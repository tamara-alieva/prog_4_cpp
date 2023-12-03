void Driver::Driver() : Person() {
	this->experience = 0;
	this->orderAmount = 0;
}
void Driver::Driver(string name) : Person(name) {
	this->experience = 0;
	this->orderAmount = 0;
}
void Driver::Driver(int balance) : Person(balance) {
	this->experience = 0;
	this->orderAmount = 0;
}
void Driver::Driver(string name, int balance, int experience, int orderAmount) : Person(name, balance) {
	this->experience = experience;
	this->orderAmount = orderAmount;
}
void Driver::setExperience(int experience) {
	this->experience = experience;
}
void Driver::setOrderAmount(int orderAmount) {
	this->orderAmount = orderAmount;
}
int Driver::getExperience() {
	return this->experience;
}
int Driver::getOrderAmount() {
	return this->orderAmount;
}
void Driver::input() {
	string temp;
	cout << "** Ввод данных водителя: " << this->getName() << " **" << endl;
	do {
		cout << "Введите количество лет опыта: ";
		cin >> temp;
	} while (temp.empty() || intCheck(temp) == 0);
	this->experience = stoi(temp);
	do {
		cout << "Введите количество выполненных заказов: ";
		cin >> temp;
	} while (temp.empty() || intCheck(temp) == 0);
	this->orderAmount = stoi(temp);
	cout << "Данные успешно введены!" << endl << endl;
}
void Driver::output() {
	cout << "Данные о водителе:" << endl << "-Имя: " << this->getName() << endl;
	cout << "-Баланс: " << this->getBalance() << endl;
	cout << "-Количество лет опыта: " << this->getExperience() << endl;
	cout << "-Количество выполненных заказов: " << this->getOrderAmount() << endl << endl;
}
void Driver::givePayment(int payment) {
	int old_balance = this->getBalance();
	this->setBalance(old_balance + payment);
}
void Driver::increaseOrderAmount() {
	int old_amount = this->getOrderAmount();
	this->setOrderAmount(old_amount + 1);
}