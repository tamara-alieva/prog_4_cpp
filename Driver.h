class Driver : public Person {
private:
	int experience, orderAmount;
public:
	void setExperience(int experience);
	void setOrderAmount(int orderAmount);
	int getExperience();
	int getOrderAmount();
	void input();
	void output();
	void givePayment(int payment);
	void increaseOrderAmount();
};
