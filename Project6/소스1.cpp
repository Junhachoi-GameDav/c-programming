/* //4-7
#include <iostream>
using namespace std;

class _circle {
	int radius;
public:
	_circle();
	_circle(int r);
	~_circle();
	void set_radius(int r) { radius = r; }
	double get_area() { return radius * radius * 3.14; }
};

_circle::_circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

_circle::_circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}

_circle::~_circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

int main() {
	_circle* p, * q;
	p = new _circle;
	q = new _circle(30);
	cout << p->get_area() << endl << q->get_area() << endl;
	delete p;
	delete q;
}
*/