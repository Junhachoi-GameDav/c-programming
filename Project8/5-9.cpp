/*
#include <iostream>
using namespace std;

class _circle {
private:
	int radius;
public:
	_circle(const _circle& c); // ���� ������
	_circle() { radius = 1; }
	_circle(int radius) { this->radius = radius; }
	double get_area() { return 3.14 * radius * radius; }
};

_circle::_circle(const _circle& c) {
	this->radius = c.radius;
	cout << "��������� ���� radius = " << radius << endl;
}

int main() {
	_circle src(30);  //����
	_circle dest(src); //����

	cout << "������ ���� = " << src.get_area() << endl;
	cout << "�纻�� ���� = " << dest.get_area() << endl;
}
*/