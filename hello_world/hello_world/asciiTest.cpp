#include <iostream>
using namespace std;

int main() {

	cout << 'A' << '\t';
	int A = 'A';
	cout << A << '\n';
	cout << 'a' << '\t';
	cout << (int)'a' << '\n';
	cout << '0' << '\t';
	cout << (int)'0' << '\n';
	cout << "----------\n";
	cout << 'A' + 1 << '\t';
	cout << (char)('A' + 1) << '\n';
	cout << 'A' - 'a' << '\n';
	cout << (char)('A' + 32) << '\n';
	return 0;
}