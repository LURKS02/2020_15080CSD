class Point {
	int x;
	int y;
public :
	Point();
	Point(int a, int b);
};

Point::Point():Point(0, 0) {};
Point::Point(int a, int b) : x(a), y(b) {};