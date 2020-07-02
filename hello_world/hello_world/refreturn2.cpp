#include <iostream>
using namespace std;

char& find(char a[], char c, bool& success) {
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == c) {
			success = true;
			return a[i];
		}
	}
	success = false;
}

int main() {
	char s[] = "Mike";
	bool b = false;
	char target = 'M';
	char& loc = find(s, target, b);
	if (b == false) {
		cout << target << "을 찾을 수 없습니다." << endl;
		return 0;
	}
	loc = 'm';
	cout << s << endl;
}