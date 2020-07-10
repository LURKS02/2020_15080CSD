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
���� >> ���� '>': 'T'��(��) �����ڸ� �������� �ʰų� �̸� ���ǵ� �����ڿ� ���Ǵ� ���������� ��ȯ�� �������� �ʽ��ϴ�.

y = bigger(waffle, pizza) ����
T�� ������ Circle class�� ���Եȴٰ� �� ��, �� Circle class�� �񱳿����ڸ� ���� ���ϰ� ������,
Ŭ���� ��ü�δ� �񱳿����� �������� �ʱ� ������ 
Circle class �� �̿��ϴ� ��츸 overloading �����ָ� ������ �ذ�ȴ�.
*/

Circle bigger(Circle a, Circle b) {
	if (a.getRadius() > b.getRadius()) return a;
	else return b;
}

int main() {
	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << "20�� 50 �� ū ���� " << c << endl;

	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle�� pizza �� ū ���� �������� " << y.getRadius() << endl;
}