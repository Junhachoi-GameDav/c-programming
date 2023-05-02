/*
#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
using namespace std;

class _person {
	char* name;
	int id;
public:
	_person(int id, const char* name); //생성자 컴파일러 복사 자동생성
	~_person();

	void change_name(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

_person::_person(int id, const char* name) {
	this->id = id;
	int len = strlen(name); //문자개수
	this->name = new char[len + 1];
	strcpy(this->name, name); //문자열 복사
}

_person::~_person() {
	if (name) {
		delete[] name;
	}
}

void _person::change_name(const char* name) {
	if (strlen(name) > strlen(this->name)) { return; }

	strcpy(this->name, name);
}

int main() {
	_person father(1, "kitae");
	_person daughter(father);

	cout << "daughter 객체 생성 직후 ---" << endl;

	father.show();
	daughter.show();

	daughter.change_name("grace");
	cout << "duaghter 이름을 grace로 변경한 후 ---" << endl;

	father.show();
	daughter.show();

	return 0;
}
*/