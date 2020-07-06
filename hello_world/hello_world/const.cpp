#include <iostream>
using namespace std;

class A {
protected:
	int x;
public:
	A() { x = 0; }
	A(int x) { this->x = x; }
};

class B : public A {
protected:
	int y;
public:
	B(int x, int y) : A(x + 5) { this->y = y; }
	void print() {
		cout << "x = " << x << ", y = " << y << endl;
	}
};

class C : public B {
	int m;
public:
	C(int x, int y, int z) : B(x, y) { m = x * y * z; }
	void printVal() {
		cout << "x = " << x << ", y = " << y << ", m = " << m << endl;
	}
};

int main() {
	C c(3, 5, 2);
	B b(3, 4);
	c.printVal();
	b.print();
}