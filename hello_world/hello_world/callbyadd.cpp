#include <iostream>
using namespace std;

void swap(int *a, int *b) {
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
	cout << "in function : " << *a << ' ' << *b << endl;
}

int main() {
	int m = 2, n = 9;
	cout << "before(main): " << m << ' ' << n << endl;
	swap(&m, &n);
	cout << "after(main): " << m << ' ' << n << endl;
}