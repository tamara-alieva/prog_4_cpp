#ifndef FUEL_H
#define FUEL_H

class Fuel {
private:
	bool capacity;
public:
	Fuel();
	Fuel(bool capacity);
	void setCapacity(bool capacity);
	bool getCapacity();
	void input();
	void output();
	void fill();
	void empty();
};
#endif