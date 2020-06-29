#include <iostream>
using namespace std;
class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~ Circle(); //소멸자
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~ Circle() {
	cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle coin;
	double area = coin.getArea();
	cout << "coin 면적은 " << area << endl;

	Circle pizza(12);
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;

	/*
	main()함수가 종료하면 스택에 생성된 객체 소멸
	이때 객체 생성 반대순으로 소멸
	*/
	return 0; 
}
