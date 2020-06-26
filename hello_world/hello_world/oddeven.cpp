#include <iostream>

using namespace std;

int main() {

	int num;
	cout << "정수값을 입력하세요. : ";
	cin >> num;

	if (1 == num % 2) cout << "입력한 숫자 " << num << "은 홀수입니다.\n";
	else cout << "입력한 숫자 " << num << "은 짝수입니다.\n";
	return 0;

}