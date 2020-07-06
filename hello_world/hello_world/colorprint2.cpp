#include <iostream>
#include <string>
using namespace std;

class Point {
protected:
	int x, y;
public:
	void set(int x, int y);
	void showPoint();
};

void Point::set(int x, int y) {
	this->x = x;
	this->y = y;
}

void Point::showPoint() {
	cout << "(" << x << "," << y << ")" << endl;
}

class ColorPoint : public Point {
	string color;
public:
	void setColor(string color);
	void showColorPoint();
	bool equals(ColorPoint p);
};

void ColorPoint::setColor(string color) {
	this->color = color;
}

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint();
}

bool ColorPoint::equals(ColorPoint p) {
	if (x == p.x && y == p.y && color == p.color) return true;
	else return false;
}

int main() {

	Point p;
	p.set(2, 3);
	//p.x = 5;
	//p.y = 5;
	p.showPoint();

	ColorPoint cp;
	//cp.x = 10;
	//cp.y = 10;
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();

	ColorPoint cp2;
	cp2.set(3, 4);
	cp2.setColor("Red");
	cout << ((cp.equals(cp2)) ? "true" : "false");

	cout << "======================================" << endl;

	//up-casting
	ColorPoint cp3;
	ColorPoint *pDer = &cp3;
	Point* pBase = pDer;
	pDer->set(3, 4);
	pBase->showPoint();
	pDer->setColor("Red");
	pDer->showColorPoint();
	//pBase->showColorPoint();

	//down-casting
	pDer = (ColorPoint*)pBase;
	pDer->setColor("Red");
	pDer->showColorPoint();

	ColorPoint *pDer2;
	Point po, *pBase2;
	pBase2 = &po;
	pDer2 = (ColorPoint*)pBase2;

	pDer2->set(3, 4);
	pDer2->setColor("Red");
}