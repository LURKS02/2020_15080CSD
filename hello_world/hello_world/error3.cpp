#include <iostream>
#include <string>
using namespace std;

void msg(int id) {
	cout << id << endl;
}

void msg(int id, string s = "") {
	cout << id << ":" << s << endl;
}

int main() {
	msg(5, "Good Morning");

	// 디폴트 매개 변수로 인한 함수 중복 정의의 모호성
	// msg(6);
}