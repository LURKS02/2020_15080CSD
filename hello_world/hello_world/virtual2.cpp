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
	//��ȣ�� ������ �߸� �ذ���� �ʴ´�. �� �θ� Ŭ���� ��� virtual�� �����ؾ� ��.
}