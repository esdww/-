#pragma once
#include<iostream>
#include"device.h"
using namespace std;

class Player: virtual public Device
{

public:

	Player(int batteryLife, int countTraks);
	Player(int countTraks);
	void Show()override;

protected:
	int _countTracs;

};

class Sony final :public Player
{
public:

	Sony(int batteryLife, int countTraks);
	void Show()override;

};

