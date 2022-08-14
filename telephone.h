#pragma once
#include<iostream>
#include"electroniks.h"
#include"device.h"
using namespace std;

class Telephone: virtual public Device
{
public:

	Telephone(int batteryLife, string connection);
	Telephone(string connection);
	void Show()override;

protected:
	string _connection;
};

class Samsung final :public Telephone
{
public:
	
	Samsung(int batteryLife, string connection);
	void Show()override;

};

class Nokia final :public Telephone
{
public:

	Nokia(int batteryLife, string connection);
	void Show();

};

