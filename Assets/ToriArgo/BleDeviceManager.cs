using UnityEngine;
using UnityEngine.Events;
using System.Collections;
using System.Collections.Generic;
using System;
using System.Linq;

[System.Serializable]
public class UnityEventBle : UnityEvent<BleDeviceUnit>
{
}

public class BleDeviceManager : MonoBehaviour {


	private static BleDeviceManager _instance;
	private static object _lock = new object ();
	private static bool applicationIsQuitting = false;

#if UNITY_ANDROID
    private string _serviceUUID = "0000fff0-0000-1000-8000-00805f9b34fb";
    private string _writeUUID = "0000fff2-0000-1000-8000-00805f9b34fb";
    private string _notifyUUID = "0000fff1-0000-1000-8000-00805f9b34fb";

  #elif UNITY_IPHONE
	private string _serviceUUID = "FFF0";
	private string _writeUUID = "FFF2";
	private string _notifyUUID = "FFF1";
#endif


	private string _BT_NAME_PREFIX = "ARGO";

	private string _connectID = "";
//	private string _connectAddress;
	private string _macAddress = "";
	private Boolean isConnected = false;
	private Boolean isReset = false;
	private Boolean _isRequest = false;
	private Boolean _isPaused = false;



	private Dictionary <string, UnityEventBle> eventDictionary;

	private List<BleDeviceUnit> scanPeripheralList;// = new List<BleDeviceUnit> ();
	private List<BleDeviceUnit> connectPeripheralList;
	
	public static BleDeviceManager Instance { 
		get { 
			//return Nested.instance; 
			
			if (applicationIsQuitting) {
				return null;
			}
			
			lock (_lock) {
				if (_instance == null) {
					_instance = (BleDeviceManager)FindObjectOfType (typeof(BleDeviceManager));
					
					if (FindObjectsOfType (typeof(BleDeviceManager)).Length > 1) {
						_instance.initialize ();
						
						return _instance;
					}
					
					if (_instance == null) {
						GameObject singleton = new GameObject ();
						_instance = singleton.AddComponent<BleDeviceManager> ();
						singleton.name = "(singleton) " + typeof(BleDeviceManager).ToString ();
						
						DontDestroyOnLoad (singleton);
						
						_instance.initialize ();
					}
				}
				
				return _instance;
			}
		}
	}
	
	private void initialize ()
	{
		if (eventDictionary == null) {
			eventDictionary = new Dictionary<string, UnityEventBle> ();
		}

		scanPeripheralList = new List<BleDeviceUnit> ();
		connectPeripheralList = new List<BleDeviceUnit> ();

		BluetoothLEHardwareInterface.Initialize (true, false, (connectingAddress) => {
			if(connectingAddress.Length > 0) {
				//BluetoothLEHardwareInterface.Log ("Connecting address = " + connectingAddress);

				BluetoothLEHardwareInterface.ConnectToPeripheralReg(onConnectAction, 
				                                                    onServiceAction,
				                                                    onCharacteristicAction,
				                                                    onDisconnectAction);

				BluetoothLEHardwareInterface.SubscribeCharacteristicWithDeviceAddressReg(onNotificationAction, 
				                                                                       onCharacteristicNotification);

				_connectID = connectingAddress;
				
				if(isConnectedAddress(connectingAddress) == true) {
					isConnected = true;
				} else {
					connectDevice(connectingAddress);
				}
			}
		}, (error) => {
			BluetoothLEHardwareInterface.Log("Center Mode Error : " + error); 
		});

		_serviceUUID = _serviceUUID.ToLower ();
		_writeUUID = _writeUUID.ToLower ();
		_notifyUUID = _notifyUUID.ToLower ();
	}

	public void Load()
	{
		BluetoothLEHardwareInterface.Log ("BleDeviceManager Load");
	}
	
	public void Log(String log)
	{
		BluetoothLEHardwareInterface.Log (log);
	}

	public void StartListening( string eventName, UnityAction<BleDeviceUnit> listener )
	{
		UnityEventBle thisEvent = null;
		if (_instance.eventDictionary.TryGetValue (eventName, out thisEvent)) {
			thisEvent.AddListener (listener);
		} else {
			thisEvent = new UnityEventBle();
			thisEvent.AddListener(listener);
			_instance.eventDictionary.Add (eventName, thisEvent);
		}
	}
	
	public void StopListening(string eventName, UnityAction<BleDeviceUnit> listener)
	{
		if (_instance == null)
			return;
		
		UnityEventBle thisEvent = null;
		if (_instance.eventDictionary.TryGetValue (eventName, out thisEvent)) {
			thisEvent.RemoveListener(listener);
		}
	}
	
	public void TriggerEvent(string eventName, BleDeviceUnit e)
	{
		UnityEventBle thisEvent = null;
		if (_instance.eventDictionary.TryGetValue (eventName, out thisEvent)) {
			thisEvent.Invoke(e);
		}
	}

	private void startScanTimer()
	{
		stopScanTimer();
		StartCoroutine("processScanTimer");
	}

	private void stopScanTimer()
	{
		StopCoroutine("processScanTimer");
	}

	IEnumerator processScanTimer()
	{
		yield return new WaitForSeconds(10);
		StopScan();
	}
	public void StartScan()
	{
		startScanTimer();

		if(scanPeripheralList != null)
			scanPeripheralList.Clear ();

		BluetoothLEHardwareInterface.Log ("StartScan");

		BluetoothLEHardwareInterface.ScanForPeripheralsWithServices (null, (address, name) => {

			Debug.Log("name   : "+name);
			if( !name.Contains(_BT_NAME_PREFIX) ) return;

			for(int i = 0; i < scanPeripheralList.Count; i++)
			{
				if(scanPeripheralList[i].getAddress().Equals(address))
				{
					return;
				}
			}

			BleDeviceUnit unit = new BleDeviceUnit(name, address);
			scanPeripheralList.Add(unit);

			BleDeviceManager.Instance.TriggerEvent(BleEvent.DISCOVERED_PERIPHERAL, unit);

		}, (address, name, rssi, advertisingInfo) => {
			/*
			if (advertisingInfo != null)
				BluetoothLEHardwareInterface.Log (string.Format ("Device: {0} RSSI: {1} Data Length: {2} Bytes: {3}", name, rssi, advertisingInfo.Length, BytesToString (advertisingInfo)));
			else
				BluetoothLEHardwareInterface.Log (string.Format ("Device: {0} RSSI: {1} advertisingInfo = null"));
			*/
		});
	}

	public void StopScan()
	{
		stopScanTimer();
		BluetoothLEHardwareInterface.StopScan ();
	}

	private void StopAutoConnect() 
	{
		StopScan();
	}

	private Boolean checkConnect()
	{		
		if (BluetoothLEHardwareInterface.isBleEnabled () == false) {
			BluetoothLEHardwareInterface.showBleSettingPopup();
			return false;
		}
		return true;
	}

	public void connectDevice(string address)
	{
#if UNITY_ANDROID
		if (checkConnect () == false) 
		{
			return;
		}
#endif

		BluetoothLEHardwareInterface.ConnectToPeripheral (address, 
		                                                  onConnectAction, 
		                                                  onServiceAction,
		                                                  onCharacteristicAction,
		                                                  onDisconnectAction);
	}

	private void onConnectAction(string address) 
	{
		//BluetoothLEHardwareInterface.Log ("onConnectAction address = " + address );
	}

	private void onServiceAction(string address, string serviceUUID) 
	{
		//BluetoothLEHardwareInterface.Log ("onServiceAction address = " + address + " serviceUUID = " + serviceUUID );
	}

	private void onCharacteristicAction(string address, string serviceUUID, string characteristicUUID) 
	{
		if (IsEqual (serviceUUID, _serviceUUID))
		{
			if (IsEqual (characteristicUUID, _notifyUUID))
			{
				_connectID = address;
				BluetoothLEHardwareInterface.SubscribeCharacteristicWithDeviceAddress (_connectID,
		                                                                       _serviceUUID,
		                                                                       _notifyUUID,
				                                                               onNotificationAction, 
		                                                                       onCharacteristicNotification);
			}
		}
	}

	private void onDisconnectAction(string address)
	{
		isConnected = false;
		disconnectionAction(address);

		// TODO -- disconnect
		//NativeAPIManager.getInstance().setToast(Localization.Get("info_bluetooth_disconnected"));
		//ObserverManager.Instance.callEventData(ObserverData.Type.CHANGE_BLUETOOTH_ICON_OFF, null);
	}

	private void onNotificationAction(string address, string notification)
	{
		isConnected = true;
		
		BleDeviceUnit unit = new BleDeviceUnit ("", address);
		BleDeviceManager.Instance.TriggerEvent (BleEvent.CONNECT_PERIPHERAL, unit);
	}

	private void onCharacteristicNotification (string address, string characteristic, byte [] bytes) 
	{
		if (_connectID.Equals (address))
		{
			getReadData(address, bytes);
		}
	}

	public void setMacAddress(string address)
	{
		_macAddress = address;
	}
	
	public string getMacAddress()
	{
		return _macAddress;
	}

	public Boolean isConnectedBLE()
	{
		return isConnected;
	}

	public void setConnectedBLE(Boolean connected)
	{
		isConnected = connected;
	}

	public Boolean isConnectedAddress(string address)
	{
		return BluetoothLEHardwareInterface.IsConnectAddress(address);
	}

/*
	private void onCharacteristicNotification(string deviceAddress, byte [] bytes)
	{
		if (_connectID.Equals (deviceAddress)) 
		{			
			getReadData(deviceAddress, bytes);
		}
	}
 */
	private void disconncecToast()
	{
		Debug.Log ("disconncecToast");
	}

	private void disconnectionAction(string deviceAddress)
	{
		Debug.Log ("disconnectionAction");
	}

	private void getReadData(string deviceAddress, byte [] bytes)
	{
		// STX			0x02
		// CMD			KD, ND
		// LEN
		// PAYLOAD
		// CHKSUM
		// ETX			0x03
		string temp;
		int index = 0;

		// STX, ETX check --
		if( bytes[index].Equals(0x02) == false || bytes[bytes.Length-1].Equals(0x03) == false )
		{
			BluetoothLEHardwareInterface.Log("STX or ETX error ==");
			return;
		}

		string CMD = System.Text.Encoding.ASCII.GetString(new byte[]{bytes[++index],bytes[++index]});
		temp = System.Text.Encoding.ASCII.GetString(new byte[]{bytes[++index],bytes[++index]});

		int len = int.Parse(temp);
		string PAYLOAD = "";
		for( int i=0; i<len; i++ )
		{
			PAYLOAD += System.Text.Encoding.ASCII.GetString(new byte[]{bytes[++index]});			
		}

		string CHKSUM = System.Text.Encoding.ASCII.GetString(new byte[]{bytes[++index],bytes[++index]});

		byte chksumCal = 0;
		len = bytes.Length - 4;
		for( int i=0; i<len; i++ )
		{
			chksumCal += bytes[i+1];
		}

		// chksum check --
		temp = System.Convert.ToString(chksumCal, 16);
		if( IsEqual(temp, CHKSUM) == false )
		{
			BluetoothLEHardwareInterface.Log("chksum error ==");
			return;
		}

		if( IsEqual(CMD, "KD") == true )
		{
			//BluetoothLEHardwareInterface.Log("CMD Key Data");

			// ACK Data---
			byte [] sendData = {0x02,0x41,0x44,0x30,0x30,0x39,0x34,0x03};
			sendBytes(sendData);

			BleDeviceUnit unit = new BleDeviceUnit("","");
			unit.setData(PAYLOAD);
			BleDeviceManager.Instance.TriggerEvent(BleEvent.SUBSCRIBE_UPDATE_DATA, unit);
		}
		else if( IsEqual(CMD, "ND") == true )
		{
			//BluetoothLEHardwareInterface.Log("CMD NFC Data");
		}
		else if( IsEqual(CMD, "BD") == true )
		{
			byte [] sendData = {0x02,0x41,0x44,0x30,0x30,0x39,0x34,0x03};
			sendBytes(sendData);

			int numBaterry = int.Parse(PAYLOAD);
			if( numBaterry <= 790 )
			{
				// TODO -- 배터리 경고 --
				//ViewData viewData = new ViewData(MainTrigger.OverViewToast, ViewData.VIEW_TYPE_OVERVIEW);
        		//EventManager.Instance.TriggerEvent(ViewEvents.VIEW_TOAST_ALERT_EVENT, viewData);
			}
		}
		else
		{
			BluetoothLEHardwareInterface.Log("CMD else ~~~");
		}
	}

	public void setDeviceVibrate(byte[] vibratorData)
	{
		sendBytes(vibratorData);
	}

    private void elseif()
    {
        throw new NotImplementedException();
    }

    private int getDataAtOffset(byte[] bytes, int offset)
	{
		return ((char)bytes[offset]);
	}

	public void sendData( )
	{
		byte[] data = null;

		if (isConnectedBLE() == false) 
		{
			return;
		}

		sendBytes(data);	
	}

    public void sendBytes(byte[] data)
    {
        BluetoothLEHardwareInterface.WriteCharacteristic(_connectID, _serviceUUID, _writeUUID, data, data.Length,
                                                          false, (characteristicUUID) =>
                                                          {
                                                              BluetoothLEHardwareInterface.Log("sendBytes Write Succeeded");
                                                          });
    }

    private string BytesToString (byte[] bytes)
	{
		string result = "";
		
		foreach (var b in bytes)
			result += b.ToString ("X2");
		
		return result;
	}

	private bool IsEqual(string uuid1, string uuid2)
	{
		return (uuid1.ToUpper().CompareTo(uuid2.ToUpper()) == 0);
	}

	public string getConnectAddress()
	{
		return _connectID;
	}

	public void disconnectPeripheral()
	{
		if( _connectID != null && _connectID.Length > 0 )
		{
			BluetoothLEHardwareInterface.DisconnectPeripheral(_connectID, (address) => {
				//Debug.Log ("disconnectPeripheral callback _connectID = " + _connectID);
			});
		}
	}

	public String getDeviceName(String address) 
	{
		return "";
	}

	public void setAppPaused(Boolean isPaused)
	{
		_isPaused = isPaused;
		BluetoothLEHardwareInterface.SetAppPaused(isPaused);
	}

}