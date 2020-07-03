#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int add(int a, int &b) {
	b = b + a;
	return b;
}

int main() {
	int s = 10, t = 20;
	// 참조 매개 변수로 인한 함수 중복 정의의 모호성
	// cout << add(s, t);
}