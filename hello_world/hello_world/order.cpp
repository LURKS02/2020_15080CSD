#include <iostream>
using namespace std;

class A {
public:
	int a;
	A() { cout << "생성자 A" << endl; }
	~A() { cout << "소멸자 A" << endl; }
};

class B : A {
public:
	int b;
	B() { cout << "생성자 B" << endl; }
	~B() { cout << "소멸자 B" << endl; }
};

class C : B{
public:
	int c;
	C() { cout << "생성자 C" << endl; }
	~C() { cout << "소멸자 C" << endl; }
	void print() { cout << a << b << endl; }
	/*
	a에서 접근 불가 오류 발생.
	묵시적 상속 접근 지정자가 protected 또는 public 이었다면
	C에서도 A에 접근할 수 있었을 것.
	그러나 오류가 생기므로 A의 요소들은 private 속성으로 전달된 것임을 알 수 있다.
	*/
};

int main() {
}