#pragma once
#include"electroniks.h"
#include<iostream>
using namespace std;


class Device:virtual public IElectroniks
{

public:
	 
	 Device(int batteryLife);
	 Device();
	 void Show() ;
		
protected:
	int _batteryLife;

};

