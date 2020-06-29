#include <iostream>
using namespace std;
class PrivateAccessError {
private: //������ Ŭ������ ��� �Լ����� ����
	int a;
	void f();
	PrivateAccessError();

public: //��� �ٸ� Ŭ������ ���
	int b;
	PrivateAccessError(int x);
	void g();
	void printVal();
/* protected : Ŭ���� �ڽŰ� ��ӹ��� �ڽ� Ŭ�������� ��� */
};

PrivateAccessError::PrivateAccessError() {
	a = 1;
	b = 1;
}

PrivateAccessError::PrivateAccessError(int x) {
	a = x;
	b = x;
}

void PrivateAccessError::f() {
	a = 5;
	b = 5;
}

void PrivateAccessError::g() {
	a = 6;
	b = 6;
}

void PrivateAccessError::printVal() {
	cout << a << " " << b << endl;
}
int main() {
	// PrivateAccessError objA; private
	PrivateAccessError objB(100);
	// objB.a = 10; private
	objB.b = 20;
	//objB.f(); private
	objB.g();

	objB.printVal();
}