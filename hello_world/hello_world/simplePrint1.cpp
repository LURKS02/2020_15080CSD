#include <iostream>

namespace qman { 
	//qman이라는 namespace
	// 이곳에 선언되는 모든 이름들은 qman namespace에 생성된 이름
	//namespace::identifier
}

int main() {
	std::cout << "print\n";

	int n = 3;
	char c = '#';
	std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;

	std::cout << "n + 5 = " << n + 5;

	return 0;
}