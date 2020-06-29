#include <iostream>
using namespace std;
class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle coin;
	double area = coin.getArea();
	cout << "coin ������ " << area << endl;

	Circle pizza(12);
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
}
