/*
#include <iostream>
using namespace std;

class _circle {
	int radius;
public:
	_circle() { radius = 1; }
	_circle(int radius) { this->radius = radius; }  // == _circle.radius
	void set_radius(int radius) { this->radius = radius; }
	double get_area() { return 3.14 * radius * radius; }
};

_circle get_circle() {
	_circle tmp(30);
	return tmp;
}

int main() {
	_circle c; //��ü ����
	cout << c.get_area() << endl;

	c = get_circle();           //tmp�� �����
	cout << c.get_area() << endl;
}
*/