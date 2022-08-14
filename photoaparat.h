#pragma once
#include<iostream>
#include"device.h"
using namespace std;


class Photoaparat:virtual public Device
{

public:

	Photoaparat(int batteryLife, int mp);
	Photoaparat(int mp);

	void Show()override;

protected:
	int _mp;

};

class Nicon final :public  Photoaparat
{

public:
	Nicon(int batteryLife, int mp);

	void Show()override;


};

