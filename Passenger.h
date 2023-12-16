#ifndef PASSENGER_H
#define PASSENGER_H

class Passenger : public Person{
private:
	bool payment_method;
public:
	Passenger();
	Passenger(std::string name);
	Passenger(int balance);
	Passenger(std::string name, int balance, bool method);
	void setMethod(bool method);
	bool getMethod();
	void input();
	void output();
	void takePayment(int payment);
};
#endif