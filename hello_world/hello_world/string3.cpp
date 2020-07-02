#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "7 + 23 + 5 + 100 + 25와 같이 덧셈 문자열을 입력하세요." << endl;
	getline(cin, s, '\n');
	int sum = 0;
	int startIndex = 0;
	while (true) {
		//find(찾고자하는 문자열, 찾기 시작하는 주소값)
		int fIndex = s.find('+', startIndex);
		if (fIndex == -1) {
			//substr(index) : index부터 끝까지 자름
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
	cout << "숫자들의 합은 " << sum;
}