#include "telephone.h"
#include<iostream>
#include"device.h"
using namespace std;

Telephone::Telephone(int batteryLife, string connection) : Device(batteryLife), _connection(connection)
{

}
Telephone::Telephone(string connection): _connection(connection)
{
	
}
void Telephone::Show()
{
	cout << "����� ������ ������������ = " << _batteryLife << endl << "��������� ����� = " << _connection << endl;
}


Samsung::Samsung(int batteryLife, string connection) : Device(batteryLife), Telephone(connection)
{

}
void Samsung::Show()
{
	cout << "����� ������ ������������ = " << _batteryLife << endl << "��������� ����� = " << _connection<<endl;
}


Nokia::Nokia(int batteryLife, string connection) : Device(batteryLife), Telephone(connection)
{

}
void Nokia::Show()
{
	cout << "����� ������ ������������ = " << _batteryLife << endl << "��������� ����� = " << _connection << endl;
}