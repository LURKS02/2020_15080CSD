#include <iostream>
using namespace std;

class A {
public:
	int a;
	A() { cout << "������ A" << endl; }
	~A() { cout << "�Ҹ��� A" << endl; }
};

class B : A {
public:
	int b;
	B() { cout << "������ B" << endl; }
	~B() { cout << "�Ҹ��� B" << endl; }
};

class C : B{
public:
	int c;
	C() { cout << "������ C" << endl; }
	~C() { cout << "�Ҹ��� C" << endl; }
	void print() { cout << a << b << endl; }
	/*
	a���� ���� �Ұ� ���� �߻�.
	������ ��� ���� �����ڰ� protected �Ǵ� public �̾��ٸ�
	C������ A�� ������ �� �־��� ��.
	�׷��� ������ ����Ƿ� A�� ��ҵ��� private �Ӽ����� ���޵� ������ �� �� �ִ�.
	*/
};

int main() {
}