/* //4-9
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
	cout << "积己磊 角青 radius = " << radius << endl;
}

_circle::_circle(int r) {
	radius = r;
	cout << "积己磊 角青 radius = " << radius << endl;
}

_circle::~_circle() {
	cout << "家戈磊 角青 radius = " << radius << endl;
}

int main() {
	_circle* p_array = new _circle[3];

	p_array[0].set_radius(10);
	p_array[1].set_radius(20);
	p_array[2].set_radius(30);

	for (int i = 0; i < 3; i++)
	{
		cout << p_array[i].get_area() << endl;
	}

	_circle* p = p_array;

	for (int i = 0; i < 3; i++)
	{
		cout << p->get_area() << endl;
		p++;  //促澜 盔家狼 林家
	}

	delete[] p_array;
}
*/