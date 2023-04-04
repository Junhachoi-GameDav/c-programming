/*
#include <iostream>
using namespace std;

class Circle {
	int radius;
public :
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double get_area();
};

double Circle::get_area() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle pizza(30);

	cout << donut.get_area() << endl;

	Circle* p;
	p = &donut;

	cout << p->get_area() << endl;
	cout << (*p).get_area() << endl;

	p = &pizza;
	cout << p->get_area() << endl;
	cout << (*p).get_area() << endl;
}
*/