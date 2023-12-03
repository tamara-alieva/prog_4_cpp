#include "Fuel.h"

class Car {
private:
	string brand;
	bool rate;
public:
	Fuel fuel;
	void setBrand(string brand);
	void setRate(bool rate);
	string getBrand();
	bool getRate();
	void input();
	void output();
};