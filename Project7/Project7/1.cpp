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

	double get_area() { return 3.14 * radius * radius; } // 사용 안됨

	int get_radius() { return radius; }
	void set_radius(int radius) { this->radius = radius; }
};

_circle::_circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

_circle::_circle(int radius) {
	this->radius = radius;
	cout << "생성자 실행 radius = " << radius << endl;
}

_circle:: ~_circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
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