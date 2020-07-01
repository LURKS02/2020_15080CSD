#include <iostream>
#include "Circle.h"

using namespace std;

int main() {
	Circle coin;
	double area = coin.getArea();
	cout << "coin 면적은 " << area << endl;

	Circle pizza(12);
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}