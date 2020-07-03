#include <iostream>
using namespace std;

float square(float a) {
	return a * a;
}

double square(double a) {
	return a * a;
}

int main() {
	cout << square(3.0);
	// 형변환으로 인한 함수 중복 정의 모호성
	// cout << square(3);
}