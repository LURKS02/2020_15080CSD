#include <iostream>
using namespace std;

class A {
public:
	void f() { cout << "af" << endl; }
	virtual void g() { cout << "ag" << endl; }
	~A() { cout << "~a" << endl; }
};

class B:public A {
public:
	void f() { cout << "bf" << endl; }
	virtual void g() { cout << "bg" << endl; }
	~B() { cout << "~b" << endl; }
};

int main() {
	B *q = new B();
	A *p = q;
	delete p;
	return 0;
}