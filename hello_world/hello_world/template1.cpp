#include <iostream>
using namespace std;

template <class T>

void myswap(T & a, T & b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

/*
컴파일 과정에서 구체화(specialization)가 진행됨
*/

int main() {
	int a = 4, b = 5;
	myswap(a, b);
	cout << a << '\t' << b << endl;

	double c = 0.3, d = 12.5;
	myswap(c, d);
	cout << c << '\t' << d << endl;
}