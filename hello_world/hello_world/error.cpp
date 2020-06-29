#include <iostream>
using namespace std;
class PrivateAccessError {
private: //동일한 클래스의 멤버 함수에만 제한
	int a;
	void f();
	PrivateAccessError();

public: //모든 다른 클래스에 허용
	int b;
	PrivateAccessError(int x);
	void g();
	void printVal();
/* protected : 클래스 자신과 상속받은 자식 클래스에만 허용 */
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