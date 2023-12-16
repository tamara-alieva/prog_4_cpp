#include "Person.h"
#include "Checking.h"

class Passenger : public Person{
private:
	bool payment_method;
public:
	Passenger();
	Passenger(string name);
	Passenger(int balance);
	Passenger(string name, int balance, bool method);
	void setMethod(bool method);
	bool getMethod();
	void input();
	void output();
	void takePayment(int payment);
};