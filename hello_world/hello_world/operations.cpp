#include <iostream>
using namespace std;
int main() {
	bool trueOrnot;
	int a = 3;
	int b = 5;
	double c = 3.0;
	cout << 7 / 5 << '\n';
	cout << 7.0 / 5.0 << '\n';
	cout << 7 % 5 << '\n';
	// cout << 7.0 % 5.0 << '\n';

	trueOrnot = a * b < b + c;
	cout << "a * b < b + c �� " << trueOrnot << '\n';
	cout << "Before -------> a : " << a << ", b : " << b << '\n';
	cout << "a++ ----------> a : " << a++ << '\n';
	cout << "++b ----------> b : " << ++b << '\n';
	cout << "a�� b�� �� ū ���� " << (a >= b ? a : b);

}