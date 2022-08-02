using UnityEngine;
using System.Collections;

public class BleDeviceUnit 
{
	private string _name;
	private string _address;
	private string _data;

	public BleDeviceUnit( string name, string address )
	{
		_name = name;
		_address = address;
	}

	public void setName( string value )
	{
		_name = value;
	}

	public string getName()
	{
		return _name;
	}

	public void setAddress( string value )
	{
		_address = value;
	}
	
	public string getAddress()
	{
		return _address;
	}

	public void setData(string value)
	{
		_data = value;
	}

	public string getData()
	{
		return _data;
	}

}
