/*
#include <iostream>
using namespace std;

class _circle {
private:
	int radius;
public:
	_circle();
	_circle(int r);
	~_circle();

	double get_area() { return 3.14 * radius * radius; } // ��� �ȵ�

	int get_radius() { return radius; }
	void set_radius(int radius) { this->radius = radius; }
};

_circle::_circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

_circle::_circle(int radius) {
	this->radius = radius;
	cout << "������ ���� radius = " << radius << endl;
}

_circle:: ~_circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

void increase(_circle c) {
	int r = c.get_radius();
	c.set_radius(r + 1);
}

int main() {
	_circle waffle(30);
	increase(waffle);
	cout << waffle.get_radius() << endl;
}
*/