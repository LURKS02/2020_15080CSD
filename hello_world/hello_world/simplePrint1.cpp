#include <iostream>

namespace qman { 
	//qman�̶�� namespace
	// �̰��� ����Ǵ� ��� �̸����� qman namespace�� ������ �̸�
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