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
	cout << "* â���� ����Ʈ���� ���α׷��� (with C++) *\n";
	cout << "******************************************\n";

	cout << "�а� : " << major << endl;
	cout << "�й� : " << num << endl;
	cout << "�̸� : " + name << endl;
}