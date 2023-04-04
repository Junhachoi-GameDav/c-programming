/*
#include <iostream>
using namespace std;

class _circle {
	int radius;
public:
	_circle() { radius = 1; }
	_circle(int r) { radius = r; }
	void set_radius(int r) { radius = r; }
	double get_area();
};

double _circle::get_area() {
	return 3.14 * radius * radius;
}

int main() {
	_circle circle_array[3];

	circle_array[0].set_radius(10);
	circle_array[1].set_radius(20);
	circle_array[2].set_radius(30);

	for (int i = 0; i < 3; i++)
	{
		cout << "circle" << i << "의 면적은" << circle_array[i].get_area() << endl;
	}

	_circle* p;
	p = circle_array;
	for (int i = 0; i < 3; i++)
	{
		cout << "circle" << i << "의 면적은" << p->get_area() << endl;
		p++;
	}
}
*/