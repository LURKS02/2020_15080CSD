#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "7 + 23 + 5 + 100 + 25�� ���� ���� ���ڿ��� �Է��ϼ���." << endl;
	getline(cin, s, '\n');
	int sum = 0;
	int startIndex = 0;
	while (true) {
		//find(ã�����ϴ� ���ڿ�, ã�� �����ϴ� �ּҰ�)
		int fIndex = s.find('+', startIndex);
		if (fIndex == -1) {
			//substr(index) : index���� ������ �ڸ�
			string part = s.substr(startIndex);
			if (part == "") break;
			cout << part << endl;
			sum += stoi(part);
			break;
		}
		int count = fIndex - startIndex;
		string part = s.substr(startIndex, count);
		cout << part << endl;
		sum += stoi(part);
		startIndex = fIndex + 1;
	}
	cout << "���ڵ��� ���� " << sum;
}