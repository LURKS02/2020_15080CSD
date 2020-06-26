#include <iostream>
using namespace std;

int main() {
	int a = 5;  //0101
	int b = 10; //1010
	int c;

	cout << a + b / 3 * 3 << endl;
	cout << (b >> 2) << endl;
	cout << (a != b) << endl;
	cout << (b % a) << endl;
	cout << ((a > b) ? a : b) << endl;
	cout << sizeof(a) << endl;
	
	c = a++; // a = 6
	cout << c << endl;
	a += b; // a = 16 10000
	cout << a << endl;

	cout << (a & b) << endl;
	c = (a + b, a - b);
	cout << c << endl;
}