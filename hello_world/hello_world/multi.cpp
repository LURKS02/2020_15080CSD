#include <iostream>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived :private Base {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() {
		setA(5);
		showA();
		cout << b;
	}
};

class GrandDerived :private Derived {
	int c;
protected:
	void setAB(int x) {
		//setA(x);
		//showA();
		setB(x);
	}
};

int main() {
	Derived x;
	//x.a = 5;
	//x.setA(10);
	//x.showA();
	//x.b = 10;
	//x.setB(10);
	x.showB(); //쓰레기값
}