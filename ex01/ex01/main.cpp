#include <iostream>
#include "Circle.h"

using namespace std;

int main() {
	Circle coin;
	double area = coin.getArea();
	cout << "coin ������ " << area << endl;

	Circle pizza(12);
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
}