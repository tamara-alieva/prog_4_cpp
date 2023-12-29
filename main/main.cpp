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
    cout << "ТЕСТЫ:" << endl;
    cout << "1) Статическое поле numberOfCars и метод getNumberOfCars" << endl;
    Car car_1{buffer};
    buffer = "Toyota";
    Car car_2{buffer};
    buffer = "Volvo";
    Car car_3{buffer, true};
    cout << "Количество созданных объектов Car: " << Car::getNumberOfCars() << endl << endl;
    cout << "2) Возврат значения из метода rateString класса Order через указатель (*)" << endl;
    bool f = 1;
    cout << "Возвращаемая строка: " << *(Order::rateString(f, &buffer)) << endl << endl;
    cout << "3) Возврат значения из метода congestionString класса Order через ссылку" << endl;
    cout << "Возвращаемая строка: " << Order::congestionString(f, buffer) << endl << endl;

    return 0;
}