#include <iostream>
using namespace std;
int main() {

	char address[100];
	cout << "주소를 입력하세요 : ";
	cin.getline(address, 100, '\n'); //공백 허용
	cout << "주소는 " << address << "입니다.\n";
	return 0;
}