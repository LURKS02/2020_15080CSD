#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	//inline
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

int main() {
	Circle waffle(15);
	Circle circleArray[3] = { Circle(10), Circle(20), Circle(30) };
	//Circle circleArray[3];	기본 생성자가 존재하지 않음
	for (int i = 0; i < 3; i++)
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
}