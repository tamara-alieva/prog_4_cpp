#include "Checking.h"

class Person {
private:
	string name;
	int balance;
public:
	Person();
	Person(string name);
	Person(int balance);
	Person(string name, int balance);
	void setName(string name);
	void setBalance(int balance);
	string getName();
	int getBalance();
	void input();
	void output();
};