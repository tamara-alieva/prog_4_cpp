#define _CRT_SECURE_NO_WARNINGS
#include "../Fuel.h"
#include "../Car.h"
#include "../Driver.h"
#include "../Passenger.h"
#include "Order.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string buffer;
    buffer = "Kia Rio";
    cout << "�����:" << endl;
    cout << "1) ����������� ���� numberOfCars � ����� getNumberOfCars" << endl;
    Car car_1{buffer};
    buffer = "Toyota";
    Car car_2{buffer};
    buffer = "Volvo";
    Car car_3{buffer, true};
    cout << "���������� ��������� �������� Car: " << Car::getNumberOfCars() << endl << endl;
    cout << "2) ������� �������� �� ������ rateString ������ Order ����� ��������� (*)" << endl;
    bool f = 1;
    cout << "������������ ������: " << *(Order::rateString(f, &buffer)) << endl << endl;
    cout << "3) ������� �������� �� ������ congestionString ������ Order ����� ������" << endl;
    cout << "������������ ������: " << Order::congestionString(f, buffer) << endl << endl;

    return 0;
}