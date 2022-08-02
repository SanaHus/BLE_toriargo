using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class BluetoothConnection : MonoBehaviour {

	//public GameObject goItemPrefab;
	//public GameObject bluetoothConnectionPopup;
	//public GameObject bluetoothConfirmPopup;

	//public GameObject bluetoothDeviceGridRoot;
	public Text lbLog;
	//public GameObject goReset;

	private List<GameObject> goItemList;
	private BleDeviceUnit unit;
	private GameObject Player;
	private GameObject startbtn;
	public  bool isconnection = false;
	public int firecount = 0;
	public bool firestart = false;


	
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

	private void OnEnable()
	{
		Screen.sleepTimeout = SleepTimeout.NeverSleep;
	}

	void StartMain()
	{
		if (startbtn == null)
		{
			startbtn = GameObject.Find("Start_Button");
			Player = GameObject.Find("Player_2017");
			
		}

		if (isconnection == false)
		{
			//startbtn.SetActive(false);
		}
		else
		{
			startbtn.SetActive(true);
		}
		
	}

	void Start ()
	{

		goItemList = new List<GameObject>();
		BleDeviceManager.Instance.StartListening (BleEvent.CONNECT_PERIPHERAL, onConnectPeripheral);
		BleDeviceManager.Instance.StartListening (BleEvent.DISCOVERED_PERIPHERAL, onDiscoveredPeripheral);
		BleDeviceManager.Instance.StartListening (BleEvent.SUBSCRIBE_UPDATE_DATA, onSubscribeUpdateData);
		
		//ClearDeviceList();
		
		BleDeviceManager.Instance.disconnectPeripheral();
		BleDeviceManager.Instance.StartScan();
		StartCoroutine(CheckConnect());

		
		//DontDestroyOnLoad(this.gameObject);
	}

	IEnumerator CheckConnect()
	{
		while (true)
		{
			yield return new WaitForSeconds(2f);
			
			if (BleDeviceManager.Instance.isConnectedBLE() == false)
			{
				onReset();
			}
			else if (BleDeviceManager.Instance.isConnectedBLE() == true)
			{
				isconnection = true;
				startbtn.SetActive(true);
			}
		}
	}

	public void Update()
	{
		if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
		{
			StartMain();
		}

		keymap();

	}

	private void ClearDeviceList () 
	{
		if( goItemList.Count > 0 )
		{
			for( int i = 0; i<goItemList.Count; i++ )
			{
				DestroyImmediate(goItemList[0]);
			}

			goItemList.Clear();
		}
	}

	public void CloseBluetoothConnectionPopup () 
	{
		BleDeviceManager.Instance.StopScan();

		//2q2q2ClearDeviceList();
	}

	// Bluetooth ----
	private void onDiscoveredPeripheral( BleDeviceUnit unit )
	{
		//GameObject goItem = Instantiate(goItemPrefab, bluetoothDeviceGridRoot.transform);
		//goItem.GetComponent<BTDeviceItem>().setItem(unit);
		//goItemList.Add(goItem);
		//lbLog.text="연결시도";
		Debug.Log("====3");
		this.unit = unit;
		Connect();

	}
	
	private void onConnectPeripheral( BleDeviceUnit unit )
	{
	}

	public void onReset()
	{
		BleDeviceManager.Instance.StopScan();
		//ClearDeviceList();

		BleDeviceManager.Instance.disconnectPeripheral();
		BleDeviceManager.Instance.StartScan();
	}

	public void firecheck()
	{
		if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
		{
			firestart = false;
			/*if (ARShooterManager.gamemode == 0) return;

			if (Player.GetComponent<projectileActor>().shootstart == true)
			{
				Player.GetComponent<projectileActor>().shootstart = false;
			}*/

		}
	}

	public void onSubscribeUpdateData(BleDeviceUnit unit)
	{
		string keyData = unit.getData();

		//print("====keyData:"+keyData);
		lbLog.text = ""+keyData + "=======keyData : "+keyData.Length;

		if (keyData.Length == 0 && firestart==true)
		{
			firecheck();
		}

		int len = keyData.Length;
		string subString;
		//string ssss="";
		
		for( int i=0; i<len; i++)
		{
			subString = keyData.Substring(i, i+1);
			//firecount++;
			//ssss = ssss + subString + "===="+firecount;
			lbLog.text = "===    "+firecount+"=====  "+subString;
            
			// navi left
			if (subString.Equals("P"))
            {
	            /*if (SceneManager.GetActiveScene().name == "StageSelect" && Stagemanager.stagemode == 1)
	            {
		            GameObject.Find("StageManager").GetComponent<Stagemanager>().selectstagenum--;
		            if (GameObject.Find("StageManager").GetComponent<Stagemanager>().selectstagenum == -1)
		            {
			            GameObject.Find("StageManager").GetComponent<Stagemanager>().selectstagenum = 2;
		            }
		            GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
		            GameObject.Find("StageManager").GetComponent<Stagemanager>().Modeselect(GameObject.Find("StageManager").GetComponent<Stagemanager>().selectstagenum);
		            
	            }*/

	            /*if (SceneManager.GetActiveScene().name == "tutorial")
	            {
		            if (GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_clear==true)
		            {
			            GameObject.Find("TutorialManager").GetComponent<TutorialManager>().btn_move();
		            }
	            }
	            

	            if (SceneManager.GetActiveScene().name == "StageSelect" && Stagemanager.stagemode == 5)
	            {
		            GameObject.Find("UImanager").GetComponent<Gunselectmanger>().Prev();
		            GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
	            }*/
	            
	            if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
	            {
		            /*if (ARShooterManager.gamemode == 3)
		            {
			            GameObject.Find("Winpanel").GetComponent<winpopup>().Winprev();
			            GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
		            }*/
	            }
				//print("==== navi left");
				//lbLog.text = "Navi left";
            }
            // navi right
            else if (subString.Equals("O"))
            {
				/*f (SceneManager.GetActiveScene().name == "StageSelect" && Stagemanager.stagemode == 1)
	            {
		            GameObject.Find("StageManager").GetComponent<Stagemanager>().selectstagenum++;
		            if (GameObject.Find("StageManager").GetComponent<Stagemanager>().selectstagenum == 3)
		            {
			            GameObject.Find("StageManager").GetComponent<Stagemanager>().selectstagenum = 0;
		            }
		            GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
		            GameObject.Find("StageManager").GetComponent<Stagemanager>().Modeselect(GameObject.Find("StageManager").GetComponent<Stagemanager>().selectstagenum);
	            }
	            
	            if (SceneManager.GetActiveScene().name == "tutorial")
	            {
		            if (GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_clear==true)
		            {
			            GameObject.Find("TutorialManager").GetComponent<TutorialManager>().btn_move();
		            }
	            }
	            
	            if (SceneManager.GetActiveScene().name == "StageSelect" && Stagemanager.stagemode == 5)
	            {
		            GameObject.Find("UImanager").GetComponent<Gunselectmanger>().Next();
		            GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
	            }
					*/
	            
	            if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
	            {
		            /*if (ARShooterManager.gamemode == 3)
		            {
			            GameObject.Find("Winpanel").GetComponent<winpopup>().Winnext();
			            GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
		            }*/
	            }
				//print("==== navi right");
				//lbLog.text = "Navi right";
            }
			// navi up
            else if (subString.Equals("R"))
            {
				//print("==== navi up");
				//lbLog.text = "Navi up";
            }
            // navi down
            else if (subString.Equals("Q"))
            {
				//print("==== navi down");
				//lbLog.text = "Navi down";
            }

            // fire --
            else if (subString.Equals(","))
			{
				
				/*if (SceneManager.GetActiveScene().name == "0.Intro")
				{
					GameObject.Find("Videoplayer").GetComponent<Intromanager>().Goplay();
				}
				else if (SceneManager.GetActiveScene().name == "StageSelect")
				{
					if (Stagemanager.stagemode == 1)
					{
						GameObject.Find("StageManager").GetComponent<Stagemanager>().GoStageSelect();
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
					}
					if (Stagemanager.stagemode == 3)
					{
						GameObject.Find("StageManager").GetComponent<Stagemanager>().GoLevelselectOff();
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
					}
					if (Stagemanager.stagemode == 5)
					{
						GameObject.Find("UImanager").GetComponent<Gunselectmanger>().Goplay();
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
					}
					
				}
				else if (SceneManager.GetActiveScene().name == "tutorial")
				{
					if (GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_count == 0)
					{
						GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_1_clear();
					}
				}
				else if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
				{
					if (ARShooterManager.gamemode == 0) return;

					if (firestart == true) return;
					Player.GetComponent<projectileActor>().StartautoShoot();
					firestart = true;
					//print("==== fire");

				}*/
				
				
				//print("==== fire");
				//lbLog.text = "fire";
            }
			// front fire --
			else if( subString.Equals("f") )
			{
				/*if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
				{
					GameObject.Find("Player_2017").GetComponent<projectileActor>().Bombstart();
					//print("==== fire");

				}
				else if (SceneManager.GetActiveScene().name == "tutorial")
				{
					if (GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_count == 1)
					{
						GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_2_clear();
					}
				}*/
				
				/*
				if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
				{
					if (ARShooterManager.gamemode == 0) return;
					firestart = false;
					Player.GetComponent<projectileActor>().Reload();
				}
				*/

				//firecount++;
				//print("==== front fire");	
				//lbLog.text = "front fire : "+firecount;		
			}
            
            // Function 1 --
            else if (subString.Equals("e"))
            {
				//print("==== Function 1");			
				//lbLog.text = "Function 1";
				if (SceneManager.GetActiveScene().name == "tutorial")
				{
					/*if (GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_count == 2 && GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_clear==false)
					{
						GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_3_clear();
					}
					else
					{
						if (GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_clear == true)
						{
							GameObject.Find("TutorialManager").GetComponent<TutorialManager>().Btn_select();
						}
					}*/
				}
				else if (SceneManager.GetActiveScene().name == "StageSelect")
				{
					/*if (Stagemanager.stagemode == 1)
					{
						GameObject.Find("StageManager").GetComponent<Stagemanager>().GoStageSelect();
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
					}
					if (Stagemanager.stagemode == 3)
					{
						GameObject.Find("StageManager").GetComponent<Stagemanager>().GoLevelselectOff();
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
					}
					if (Stagemanager.stagemode == 5)
					{
						GameObject.Find("UImanager").GetComponent<Gunselectmanger>().Goplay();
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
					}*/
					
				}
				else if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
				{
					/*if (ARShooterManager.gamemode == 0)
					{
						ARShooterManager.gamemode = 1;
						GameObject.Find("processExample").SetActive(false);
						GameObject.Find("[MainCanvas]").transform.Find("starteffect").gameObject.SetActive(true);
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
						//GameObject.Find("ARShooterManager").GetComponent<ARShooterManager>().GameStart();
					}
					else if (ARShooterManager.gamemode == 3)
					{
						GameObject.Find("Winpanel").GetComponent<winpopup>().Goselect();
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
					}
					else
					{
						if (ARShooterManager.gamemode == 0) return;
						firestart = false;
						Player.GetComponent<projectileActor>().Reload();
					}*/
				}
				
            }
			// Function 2 --
			else if( subString.Equals("?") )
			{
				if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
				{
					/*if (ARShooterManager.gamemode == 0)
					{
						ARShooterManager.gamemode = 1;
						GameObject.Find("processExample").SetActive(false);
						GameObject.Find("[MainCanvas]").transform.Find("starteffect").gameObject.SetActive(true);
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
					}
				
					if (ARShooterManager.gamemode == 3)
					{
						GameObject.Find("Winpanel").GetComponent<winpopup>().Goselect();
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
					}*/
				}

				
			}
            // Function 3 --
            else if (subString.Equals(")"))
            {

	            if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
	            {
		            /*if (ARShooterManager.gamemode == 0)
		            {
			            ARShooterManager.gamemode = 1;
			            GameObject.Find("processExample").SetActive(false);
			            GameObject.Find("[MainCanvas]").transform.Find("starteffect").gameObject.SetActive(true);
			            GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
		            }
				
		            if (ARShooterManager.gamemode == 3)
		            {
			            GameObject.Find("Winpanel").GetComponent<winpopup>().Goselect();
			            GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
		            }*/
	            }
			}
		}
	}

	void keymap()
	{
			if (Input.GetKeyDown(KeyCode.P))
            {
	           /* Debug.Log(SceneManager.GetActiveScene().name);
	            Debug.Log("==========="+Stagemanager.stagemode);
	            if (SceneManager.GetActiveScene().name == "StageSelect" && Stagemanager.stagemode == 1)
	            {
		            GameObject.Find("StageManager").GetComponent<Stagemanager>().selectstagenum--;
		            if (GameObject.Find("StageManager").GetComponent<Stagemanager>().selectstagenum == -1)
		            {
			            GameObject.Find("StageManager").GetComponent<Stagemanager>().selectstagenum = 2;
		            }
		            GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
		            GameObject.Find("StageManager").GetComponent<Stagemanager>().Modeselect(GameObject.Find("StageManager").GetComponent<Stagemanager>().selectstagenum);
		            
	            }*/

	            if (SceneManager.GetActiveScene().name == "tutorial")
	            {
		            /*if (GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_clear==true)
		            {
			            GameObject.Find("TutorialManager").GetComponent<TutorialManager>().btn_move();
		            }*/
	            }
	            

	            /*if (SceneManager.GetActiveScene().name == "StageSelect" && Stagemanager.stagemode == 5)
	            {
		            GameObject.Find("UImanager").GetComponent<Gunselectmanger>().Prev();
		            GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
	            }*/
	            
	            if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
	            {
		            /*if (ARShooterManager.gamemode == 3)
		            {
			            GameObject.Find("Winpanel").GetComponent<winpopup>().Winprev();
			            GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
		            }*/
	            }
				//print("==== navi left");
				//lbLog.text = "Navi left";
            }
            // navi right
            else if (Input.GetKeyDown(KeyCode.O))
            {
	  /*          if (SceneManager.GetActiveScene().name == "StageSelect" && Stagemanager.stagemode == 1)
	            {
		            GameObject.Find("StageManager").GetComponent<Stagemanager>().selectstagenum++;
		            if (GameObject.Find("StageManager").GetComponent<Stagemanager>().selectstagenum == 3)
		            {
			            GameObject.Find("StageManager").GetComponent<Stagemanager>().selectstagenum = 0;
		            }
		            GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
		            GameObject.Find("StageManager").GetComponent<Stagemanager>().Modeselect(GameObject.Find("StageManager").GetComponent<Stagemanager>().selectstagenum);
	            }*/
	            
	            if (SceneManager.GetActiveScene().name == "tutorial")
	            {
		            /*if (GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_clear==true)
		            {
			            GameObject.Find("TutorialManager").GetComponent<TutorialManager>().btn_move();
		            }*/
	            }
	            
	            /*if (SceneManager.GetActiveScene().name == "StageSelect" && Stagemanager.stagemode == 5)
	            {
		            GameObject.Find("UImanager").GetComponent<Gunselectmanger>().Next();
		            GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
	            }*/
	            
	            if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
	            {
		            /*if (ARShooterManager.gamemode == 3)
		            {
			            GameObject.Find("Winpanel").GetComponent<winpopup>().Winnext();
			            GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
		            }*/
	            }
				//print("==== navi right");
				//lbLog.text = "Navi right";
            }
			// navi up
         

            // fire --
            else if (Input.GetKeyDown(KeyCode.A))
			{
				
				if (SceneManager.GetActiveScene().name == "0.Intro")
				{
					//GameObject.Find("Videoplayer").GetComponent<Intromanager>().Goplay();
				}
				else if (SceneManager.GetActiveScene().name == "StageSelect")
				{
					/*if (Stagemanager.stagemode == 1)
					{
						GameObject.Find("StageManager").GetComponent<Stagemanager>().GoStageSelect();
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
					}
					if (Stagemanager.stagemode == 3)
					{
						GameObject.Find("StageManager").GetComponent<Stagemanager>().GoLevelselectOff();
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
					}
					if (Stagemanager.stagemode == 5)
					{
						GameObject.Find("UImanager").GetComponent<Gunselectmanger>().Goplay();
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
					}*/
					
				}
				else if (SceneManager.GetActiveScene().name == "tutorial")
				{
					/*if (GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_count == 0)
					{
						GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_1_clear();
					}*/
				}
				else if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
				{
					/*if (ARShooterManager.gamemode == 0) return;

					if (firestart == true) return;
					Player.GetComponent<projectileActor>().StartautoShoot();
					firestart = true;
					//print("==== fire");*/

				}
				
				
				//print("==== fire");
				//lbLog.text = "fire";
            }
			// front fire --
			else if( Input.GetKeyDown(KeyCode.B) )
			{
				if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
				{
					//GameObject.Find("Player_2017").GetComponent<projectileActor>().Bombstart();
					//print("==== fire");

				}
				else if (SceneManager.GetActiveScene().name == "tutorial")
				{
					/*if (GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_count == 1)
					{
						GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_2_clear();
					}*/
				}
				
				/*
				if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
				{
					if (ARShooterManager.gamemode == 0) return;
					firestart = false;
					Player.GetComponent<projectileActor>().Reload();
				}
				*/

				//firecount++;
				//print("==== front fire");	
				//lbLog.text = "front fire : "+firecount;		
			}
            
            // Function 1 --
            else if (Input.GetKeyDown(KeyCode.C))
            {
				//print("==== Function 1");			
				//lbLog.text = "Function 1";
				if (SceneManager.GetActiveScene().name == "tutorial")
				{
					/*if (GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_count == 2 && GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_clear==false)
					{
						GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_3_clear();
					}
					else
					{
						if (GameObject.Find("TutorialManager").GetComponent<TutorialManager>().tutorial_clear == true)
						{
							GameObject.Find("TutorialManager").GetComponent<TutorialManager>().Btn_select();
						}
					}*/
				}
				else if (SceneManager.GetActiveScene().name == "StageSelect")
				{
					/*if (Stagemanager.stagemode == 1)
					{
						GameObject.Find("StageManager").GetComponent<Stagemanager>().GoStageSelect();
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
					}
					if (Stagemanager.stagemode == 3)
					{
						GameObject.Find("StageManager").GetComponent<Stagemanager>().GoLevelselectOff();
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
					}
					if (Stagemanager.stagemode == 5)
					{
						GameObject.Find("UImanager").GetComponent<Gunselectmanger>().Goplay();
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
					}*/
					
				}
				else if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
				{
					/*if (ARShooterManager.gamemode == 0)
					{
						ARShooterManager.gamemode = 1;
						GameObject.Find("processExample").SetActive(false);
						GameObject.Find("[MainCanvas]").transform.Find("starteffect").gameObject.SetActive(true);
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
						//GameObject.Find("ARShooterManager").GetComponent<ARShooterManager>().GameStart();
					}
					else if (ARShooterManager.gamemode == 3)
					{
						GameObject.Find("Winpanel").GetComponent<winpopup>().Goselect();
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
					}
					else
					{
						if (ARShooterManager.gamemode == 0) return;
						firestart = false;
						Player.GetComponent<projectileActor>().Reload();
					}*/
				}
				
            }
			// Function 2 --
			else if( Input.GetKeyDown(KeyCode.D) )
			{
				if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
				{
					/*if (ARShooterManager.gamemode == 0)
					{
						ARShooterManager.gamemode = 1;
						GameObject.Find("processExample").SetActive(false);
						GameObject.Find("[MainCanvas]").transform.Find("starteffect").gameObject.SetActive(true);
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
					}
				
					if (ARShooterManager.gamemode == 3)
					{
						GameObject.Find("Winpanel").GetComponent<winpopup>().Goselect();
						GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
					}*/
				}

				
			}
            // Function 3 --
            else if (Input.GetKeyDown(KeyCode.E))
            {

	            /*if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
	            {
		            if (ARShooterManager.gamemode == 0)
		            {
			            ARShooterManager.gamemode = 1;
			            GameObject.Find("processExample").SetActive(false);
			            GameObject.Find("[MainCanvas]").transform.Find("starteffect").gameObject.SetActive(true);
			            GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
		            }
				
		            if (ARShooterManager.gamemode == 3)
		            {
			            GameObject.Find("Winpanel").GetComponent<winpopup>().Goselect();
			            GameObject.Find("Soundplayer").GetComponent<soundplay>().Playerbtn();
		            }
	            }*/
			}		
	}
	
	/// <summary>
	/// This function is called when the MonoBehaviour will be destroyed.
	/// </summary>
	void OnDestroy()
	{
		BleDeviceManager.Instance.StopListening (BleEvent.CONNECT_PERIPHERAL, onConnectPeripheral);
		BleDeviceManager.Instance.StopListening (BleEvent.DISCOVERED_PERIPHERAL, onDiscoveredPeripheral);
	}
}