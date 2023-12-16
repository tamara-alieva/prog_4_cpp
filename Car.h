#include "Fuel.h"
#include "Checking.h"

class Car {
private:
	static int numberOfCars;
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
	static int getNumberOfCars();
	void input();
	void output();
};