#include "Fuel.h"
#include "Checking.h"

class Car {
private:
	string brand;
	bool rate;
public:
	Fuel fuel;
	Car();
	Car(string brand);
	Car(bool rate);
	Car(string brand, bool rate);
	void setBrand(string brand);
	void setRate(bool rate);
	string getBrand();
	bool getRate();
	void input();
	void output();
};