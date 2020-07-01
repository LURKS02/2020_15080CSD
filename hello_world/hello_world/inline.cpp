class Circle {
private:
	int radius;
public:

	/*
	Circle(){
		radius = 1;
	}
	double getArea(){
		return 3.14 * radius * radius
	}*/

	Circle();
	Circle(int r);
	double getArea();
};

inline Circle::Circle() {
	radius = 1;
}

Circle::Circle(int r) {
	radius = r;
}

inline double Circle::getArea() {
	return 3.14 * radius * radius;
}
