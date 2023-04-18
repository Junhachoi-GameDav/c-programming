
#include <iostream>
using namespace std;

class _circle {
	int radius;
public:
	_circle() { radius = 1; }
	_circle(int radius) { this->radius = radius; }
	void set_radius(int radius) { this->radius = radius; }
	double get_area() { return 3.14 * radius * radius; }
};

int main() {
	_circle circle;
	_circle& refc = circle;
	refc.set_radius(10);
	cout << refc.get_area() << " " << circle.get_area(); // µ¿ÀÏ °´Ã¼
}
