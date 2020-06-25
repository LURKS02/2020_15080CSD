#include <iostream>
using namespace std;
int main() {

	char name[11]; //한글은 5개 글자, 영문은 10개 글자까지 저장
	cout << "이름을 입력하세요. : ";
	cin >> name; // 공백은 받아들이지 못함
	cout << "이름은 " << name << "입니다.\n";
	return 0;

}