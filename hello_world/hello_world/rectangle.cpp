#include <iostream>
using namespace std;

class Rectangle {
public :
	int width;
	int height;
	int getArea();
};

int Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle photoFrame;
	photoFrame.width = 5;
	photoFrame.height = 3;
	cout << "photoFrame의 면적은 " << photoFrame.getArea() << endl;
}