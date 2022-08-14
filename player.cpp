#include "player.h"
#include"device.h"
#include<iostream>
using namespace std;

Player::Player(int batteryLife, int countTracs) : Device(batteryLife), _countTracs(countTracs)
{

}
Player::Player(int countTracs): _countTracs(countTracs)
{
	
}
void Player::Show()
{
	cout << "Время работы аккумулятора = " << _batteryLife << endl << "Количество треков = " << _countTracs << endl;
}


Sony::Sony(int batteryLife, int countTracs) : Device(batteryLife), Player(countTracs)
{

}
void Sony::Show()
{
	cout << "Время работы аккумулятора = " << _batteryLife << endl << "Количество треков = " << _countTracs << endl;
}