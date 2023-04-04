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
	_circle circle_arr[3] = { _circle(10),_circle(20), _circle() };

	for (int i = 0; i <3; i++)
	{
		cout << "circle" << i << "의 면적은" << circle_arr[i].get_area() << endl;
	}
}
*/