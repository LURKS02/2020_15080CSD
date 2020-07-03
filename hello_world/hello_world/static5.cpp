class PersonError {
	int money;
public:
	//static int getMoney() { return money; }
	void setMoney(int money) {
		this->money = money;
	}
};

int main() {
	/* static 메서드에서는 non-static 멤버 변수에 접근할 수 없음 */
	//n = PersonError::getMoney();

	PersonError errorKim;
	errorKim.setMoney(100);
}