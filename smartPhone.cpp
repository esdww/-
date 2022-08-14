#include "smartPhone.h"
#include<iostream>
#include"telephone.h"
#include"photoaparat.h"
#include"player.h"
using namespace std;

SmartPhone::SmartPhone(int batteryLife, string connection, int mp, int countTracs): Device(batteryLife), Telephone(connection), Photoaparat(mp), Player(countTracs)
{
}

void SmartPhone::Show()
{
    cout << "����� ������ ������������ =  " << _batteryLife << endl;
    cout << "�������� ��������� ����� = " << _connection << endl;
    cout << "���������� ������������ = " << _mp << endl;
    cout << "���������� ������ = " << _countTracs << endl;
}
