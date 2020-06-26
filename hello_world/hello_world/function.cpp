#include <iostream>

using namespace std;

/*
int main() {
	int total;
	int a = 10;
	int i;

	total = 0;
	for (i = 1; i <= a; i++) {
		total += i;
	}

	cout << "total = " << total << endl;

	total = 0;
	for (i = 1; i <= 100; i++) {
		total += i;
	}
	cout << "total = " << total << endl;

	total = 0;
	for (i = 1; i <= 5; i++) {
		total += i;
	}
	cout << "total = " << total << endl;
}
*/

int sum(int n) {
	int total = 0;
	int i;
	for (i = 1; i <= n; i++) total += i;
	return total;
}

int main() {
	int a = 10;
	cout << "total = " << sum(a) << endl;
	cout << "total = " << sum(100) << endl;
	cout << "total = " << sum(5) << endl;
}