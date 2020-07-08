class BaseIO {
public:
	int mode;
};

class In : virtual public BaseIO {
public:
	int readPos;
};

class Out : public BaseIO {
public:
	int writePos;
};

class InOut :public In, public Out {
public:
	bool safe;
};

int main() {
	InOut test;
	test.mode = 5;
	//모호성 에러가 뜨며 해결되지 않는다. 두 부모 클래스 모두 virtual을 선언해야 함.
}