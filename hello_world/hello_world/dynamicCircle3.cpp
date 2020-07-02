#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	~Circle() {};
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
}

int main() {
	cout << "생성하고자 하는 원의 개수?";
	int n, radius;
	cin >> n;

	Circle *pArray = new Circle[n];
	for (int i = 0; i < n; i++) {
		cout << "원 " << i + 1 << ": ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}

	int count = 0;
	Circle* p = pArray;

	for (int i = 0; i < n; i++) {
		//cout << p->getArea() << " ";
		if (p->getArea() > 100) count++;
		p++;
	}
	cout << endl << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;
	delete[] pArray;
}