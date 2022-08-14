#include "photoaparat.h"
#include"device.h"
#include<iostream>
using namespace std;

Photoaparat::Photoaparat(int batteryLife, int mp) : Device(batteryLife), _mp(mp)
{

}
Photoaparat::Photoaparat(int mp):_mp(mp)
{

}
void Photoaparat::Show()
{
	cout << "����� ������ ������������ = " << _batteryLife << endl << "���������� ������������ = " << _mp << endl;
}

Nicon::Nicon(int batteryLife, int mp) : Device(batteryLife),Photoaparat(mp)
{

}
void Nicon::Show()
{
	cout << "����� ������ ������������ = " << _batteryLife << endl << "���������� ������������ = " << _mp << endl;
}