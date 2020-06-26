#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	for (int i = 1; i <= 10; i += 2) {
		cout << "현재 i의 값 : " << i << '\n';
		sum += i;
	}

	cout << "합 : " << sum << endl;
}