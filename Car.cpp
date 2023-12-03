void Car::Car() {
	this->fuel = new Fuel();
	this->brand = "";
	this->rate = 0;
}
void Car::Car(string brand) {
	this->fuel = new Fuel();
	this->brand = brand;
	this->rate = 0;
}
void Car::Car(bool rate) {
	this->fuel = new Fuel();
	this->brand = "";
	this->rate = rate;
}
void Car::Car(string brand, bool rate) {
	this->fuel = new Fuel();
	this->brand = brand;
	this->rate = rate;
}
void Car::setBrand(string brand) {
	this->brand = brand;
}
void Car::setRate(bool rate) {
	this->rate = rate;
}
string Car::getBrand() {
	return this->brand;
}
bool Car::getRate() {
	return this->rate;
}
void Car::input() {
	string temp;
	cout << "** ���� ������ ���������� **" << endl;
	do {
		cout << "������� �����: ";
		cin >> this->brand;
	} while (this->brand.empty() || nameCheck(this->brand) == 0);
	do {
		cout << "������� ����� ���������� (0 - ������, 1 - �������): ";
		cin >> temp;
	} while (temp != "0" && temp != "1");
	this->rate = stoi(temp);
	cout << "������ ������� �������!" << endl << endl;
}
void Car::output() {
	if (this->brand.empty())
		cout << "������ �� ���������� �����������!" << endl;
	else {
		cout << "������ �� ����������:" << endl << "-�����: " << this->brand << endl << "-�����: ";
		if (this->rate)
			cout << "�������" << endl;
		else
			cout << "������" << endl;
	}
}