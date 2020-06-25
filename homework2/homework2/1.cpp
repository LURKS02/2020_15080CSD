#include <iostream>
#include <string>

using namespace std;

int main() {
	string major;
	long long num;
	string name;

	cin >> major;
	cin >> num;
	cin >> name;

	cout << "******************************************\n";
	cout << "* 창의적 소프트웨어 프로그래밍 (with C++) *\n";
	cout << "******************************************\n";

	cout << "학과 : " << major << endl;
	cout << "학번 : " << num << endl;
	cout << "이름 : " + name << endl;
}