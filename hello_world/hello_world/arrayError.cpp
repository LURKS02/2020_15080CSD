#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	//inline
	Circle(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

int main() {
	Circle waffle(15);
	Circle circleArray[3] = { Circle(10), Circle(20), Circle(30) };
	//Circle circleArray[3];	�⺻ �����ڰ� �������� ����
}