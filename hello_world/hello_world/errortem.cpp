#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
};

template<class T>
T bigger(T a, T b) {
	if (a > b) return a;
	else return b;
}

/*
오류 >> 이항 '>': 'T'이(가) 연산자를 정의하지 않거나 미리 정의된 연산자에 허용되는 형식으로의 변환을 정의하지 않습니다.

y = bigger(waffle, pizza) 에서
T의 값으로 Circle class가 대입된다고 할 때, 두 Circle class를 비교연산자를 통해 비교하게 되지만,
클래스 자체로는 비교연산이 성립하지 않기 때문에 
Circle class 를 이용하는 경우만 overloading 시켜주면 오류는 해결된다.
*/

Circle bigger(Circle a, Circle b) {
	if (a.getRadius() > b.getRadius()) return a;
	else return b;
}

int main() {
	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << "20과 50 중 큰 값은 " << c << endl;

	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;
}