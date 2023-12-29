#include "Driver.h"
#include "Checking.h"
#include <iostream>
#include <string>
using namespace std;

Driver::Driver() : Person() {
	this->experience = 0;
	this->orderAmount = 0;
}
Driver::Driver(string name) : Person(name) {
	this->experience = 0;
	this->orderAmount = 0;
}
Driver::Driver(int balance) : Person(balance) {
	this->experience = 0;
	this->orderAmount = 0;
}
Driver::Driver(string name, int balance, int experience, int orderAmount) : Person(name, balance) {
	this->experience = experience;
	this->orderAmount = orderAmount;
}
void Driver::setExperience(int experience) {
	this->experience = experience;
}
void Driver::setOrderAmount(int orderAmount) {
	this->orderAmount = orderAmount;
}
int Driver::getExperience() {
	return this->experience;
}
int Driver::getOrderAmount() {
	return this->orderAmount;
}
void Driver::input() {
	string temp; bool flag;
	cout << "** ���� ������ ��������: " << this->getName() << " **" << endl;
	do {
		cout << "������� ���������� ��� �����: ";
		cin >> temp;
		flag = Checking::intCheck(temp);
		if (!flag) cout << "���������� ��� ���. ";
	} while (!flag);
	this->experience = stoi(temp);
	do {
		cout << "������� ���������� ����������� �������: ";
		cin >> temp;
		flag = Checking::intCheck(temp);
		if (!flag) cout << "���������� ��� ���. ";
	} while (!flag);
	this->orderAmount = stoi(temp);
	cout << "������ ������� �������!" << endl << endl;
}
void Driver::output() {
	cout << "������ � ��������:" << endl << "-���: " << this->getName() << endl;
	cout << "-������: " << this->getBalance() << endl;
	cout << "-���������� ��� �����: " << this->getExperience() << endl;
	cout << "-���������� ����������� �������: " << this->getOrderAmount() << endl << endl;
}
void Driver::givePayment(int payment) {
	int old_balance = this->getBalance();
	this->setBalance(old_balance + payment);
}
void Driver::increaseOrderAmount() {
	int old_amount = this->getOrderAmount();
	this->setOrderAmount(old_amount + 1);
}