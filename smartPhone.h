#pragma once
#include"photoaparat.h"
#include"telephone.h"
#include"player.h"
#include<iostream>
using namespace std;


class SmartPhone final:public Photoaparat,Telephone,Player
{

public:
	SmartPhone(int batteryLife, string connection, int mp, int countTracs);
	void Show() override;


};

