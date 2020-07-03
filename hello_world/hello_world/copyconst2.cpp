#define _CRT_SECURE_NO_DEPRECATE

#include <iostream>
#include <cstring>
using namespace std;

class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name);
	~Person();
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}

Person::~Person() {
	cout << "�Ҹ��� ���� : " << id << endl;
	if (name) {
		cout << "���� �Ҵ� �޸� ��ȯ : " << name << endl;
		delete[] name;
	}
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name)) return;
	strcpy(this->name, name);
	id++;
}

int main() {
	Person father(1, "eqman");
	Person daughter(father);

	cout << "daughter ��ü ���� ���� ----" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter �̸��� Grace�� ������ �� ----" << endl;
	father.show();
	daughter.show();

	return 0;
	//������ ����
}