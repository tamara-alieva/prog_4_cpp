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
	cout << "** Ввод данных автомобиля **" << endl;
	do {
		cout << "Введите марку: ";
		cin >> this->brand;
	} while (this->brand.empty() || nameCheck(this->brand) == 0);
	do {
		cout << "Введите класс автомобиля (0 - Эконом, 1 - Комфорт): ";
		cin >> temp;
	} while (temp != "0" && temp != "1");
	this->rate = stoi(temp);
	cout << "Данные успешно введены!" << endl << endl;
}
void Car::output() {
	if (this->brand.empty())
		cout << "Данные об автомобиле отсутствуют!" << endl;
	else {
		cout << "Данные об автомобиле:" << endl << "-Марка: " << this->brand << endl << "-Класс: ";
		if (this->rate)
			cout << "Комфорт" << endl;
		else
			cout << "Эконом" << endl;
	}
}