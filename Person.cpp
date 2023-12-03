void Person::Person() {
	this->name = "";
	this->balance = 0;
}

void Person::Person(string name) {
	this->name = name;
	this->balance = 0;
}

void Person::Person(int balance) {
	this->name = "";
	this->balance = balance;
}

void Person::Person(string name, int balance) {
	this->name = name;
	this->balance = balance;
}

void Person::setName(string name) {
	this->name = name;
}

void Person::setBalance(int balance) {
	this->balance = balance;
}
string Person::getName() {
	return this->name;
}
int Person::getBalance() {
	return this->balance;
}
void Person::input() {
	string temp;
	cout << "** ���� ������ �������� **" << endl;
	do {
		cout << "������� ���: ";
		cin >> this->name;
	} while (this->name.empty() || nameCheck(this->name) == 0);
	do {
		cout << "������� ������: ";
		cin >> temp;
	} while (temp.empty() || intCheck(temp) == 0);
	this->balance = stoi(temp);
	cout << "������ ������� �������!" << endl << endl;
}
void Person::output() {
	if (this->name.empty())
		cout << "������ � �������� �����������!" << endl;
	else
		cout << "������ � ��������:" << endl << "-���: " << this->name << endl << "-������: " << this->balance << endl;
}