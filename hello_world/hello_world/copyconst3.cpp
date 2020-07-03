#define _CRT_SECURE_NO_DEPRECATE

#include <iostream>
#include <cstring>
using namespace std;

class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name);
	Person(Person &person);
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

Person::Person(Person& person) {
	this->id = person.id;
	int len = strlen(person.name);
	this->name = new char[len + 1];
	strcpy(this->name, person.name);
	cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
}

Person::~Person() {
	cout << "소멸자 실행 : " << id << endl;
	if (name) {
		cout << "동적 할당 메모리 반환 : " << name << endl;
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

	cout << "daughter 객체 생성 직후 ----" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
	father.show();
	daughter.show();

	return 0;
}