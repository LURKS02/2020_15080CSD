#include <iostream>
using namespace std;

class myVector {
	int *p;
	int size;
public:
	myVector(int n = 100) {
		p = new int[n];
		size = n;
	}
	~myVector() { delete[] p; }
};

int main() {
	myVector *v1, *v2;
	v1 = new myVector();
	v2 = new myVector(1024);

	delete v1;
	delete v2;
}