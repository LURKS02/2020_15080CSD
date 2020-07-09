#include <iostream>
using namespace std;

//함수 중복 정의의 문제점
//데이터형마다 자료형만 다른 동일한 함수를 추가해줘야함

void myswap(int& a, int& b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void myswap(double& a, double& b) {
	double tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 4, b = 5;
	myswap(a, b);
	cout << a << '\t' << b << endl;

	double c = 0.3, d = 12.5;
	myswap(c, d);
	cout << c << '\t' << d << endl;
}