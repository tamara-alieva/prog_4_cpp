#pragma once

#include "Person.h"
#include <string>

class Driver : public Person {
private:
	int experience, orderAmount;
public:
	Driver();
	Driver(std::string name);
	Driver(int balance);
	Driver(std::string name, int balance, int experience, int orderAmount);
	void setExperience(int experience);
	void setOrderAmount(int orderAmount);
	int getExperience();
	int getOrderAmount();
	void input();
	void output();
	void givePayment(int payment);
	void increaseOrderAmount();
};