#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	for (int i = 1; i <= 10; i += 2) {
		cout << "���� i�� �� : " << i << '\n';
		sum += i;
	}

	cout << "�� : " << sum << endl;
}