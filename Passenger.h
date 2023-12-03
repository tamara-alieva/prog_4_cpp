#include "Person.h"

class Passenger : public Person{
private:
	bool payment_method;
public:
	void setMethod(bool method);
	bool getMethod();
	void input();
	void output();
	void takePayment(int payment);
};