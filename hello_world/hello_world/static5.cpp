class PersonError {
	int money;
public:
	//static int getMoney() { return money; }
	void setMoney(int money) {
		this->money = money;
	}
};

int main() {
	/* static �޼��忡���� non-static ��� ������ ������ �� ���� */
	//n = PersonError::getMoney();

	PersonError errorKim;
	errorKim.setMoney(100);
}