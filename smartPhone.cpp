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
    cout << "Время работы аккумулятора =  " << _batteryLife << endl;
    cout << "Оператор мобильной связи = " << _connection << endl;
    cout << "Количество мегапикселей = " << _mp << endl;
    cout << "Количество треков = " << _countTracs << endl;
}
