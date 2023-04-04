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
	_circle circles[2][3];

	circles[0][0].set_radius(1);
	circles[0][1].set_radius(2);
	circles[0][2].set_radius(3);
	circles[1][0].set_radius(4);
	circles[1][1].set_radius(5);
	circles[1][2].set_radius(6);

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "circle" << i << "," << j << "j의 면적은";
			cout << circles[i][j].get_area() << endl;
		}
	}
}
*/