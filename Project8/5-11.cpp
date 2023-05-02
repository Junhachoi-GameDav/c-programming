/*
#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
using namespace std;

class _person {
	char* name;
	int id;
public:
	_person(int id, const char* name); //������ 
	_person(const _person& _person1); //���� ������ 
	~_person();

	void change_name(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

_person::_person(int id, const char* name) {
	this->id = id;
	int len = strlen(name); //���ڰ���
	this->name = new char[len + 1];
	strcpy(this->name, name); //���ڿ� ����
}

_person::_person(const _person& _person1) {
	this->id = _person1.id;
	int len = strlen(_person1.name);
	this->name = new char[len + 1];
	strcpy(this->name, _person1.name);
	cout << "���� ������ ����, ���� ��ü �̸�" << this->name << endl;
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

	cout << "daughter ��ü ���� ���� ---" << endl;

	father.show();
	daughter.show();

	daughter.change_name("grace");
	cout << "duaghter �̸��� grace�� ������ �� ---" << endl;

	father.show();
	daughter.show();

	return 0;
}
*/