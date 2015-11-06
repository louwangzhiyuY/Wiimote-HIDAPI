// HIDAPI-Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "WiimoteFactory.h"

int main()
{
	WiimoteDeviceVector Wiimotes;

	{
		WiimoteFactory Factory;
		Wiimotes = Factory.GetWiimoteDevices();
	}
	
	system("pause");
    return 0;
}

