#include <iostream>
using namespace std;

class Point {
//public:
	int x, y;
public:
	Point();
	Point(int a, int b);
};

Point::Point() :Point(0, 0) {}
Point::Point(int a, int b) : x(a), y(b) {}

int main() {
	/*
	Point a;
	cout << a.x << " " << a.y << endl;
	Point b(3, 5);
	cout << b.x << " " << b.y << endl;
	*/
	return 0;
}