using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BTDeviceItem : MonoBehaviour {

	public string deviceID;
	public Text BTID;
	public Text deviceName;
	public Button selectDeviceItem;
	
	private BleDeviceUnit unit;

	// Use this for initialization
	void Start () {
        selectDeviceItem.onClick.AddListener(Connect);
    }
	
	public void setItem( BleDeviceUnit unit )
	{
		this.unit = unit;
		BTID.text = deviceID = unit.getAddress();
		deviceName.text = unit.getName();
	}

	public void BluetoothDeviceConnect (int i) 
	{
		if( BleDeviceManager.Instance.isConnectedBLE() == true )
		{
			BleDeviceManager.Instance.disconnectPeripheral();
		}
		
		BleDeviceManager.Instance.connectDevice(unit.getAddress());
	}

    void Connect()
    {
        BluetoothDeviceConnect(0);
    }
}
