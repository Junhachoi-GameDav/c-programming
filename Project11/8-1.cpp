/*
#include <iostream>
#include <string>
using namespace std;

class point {
	int x, y;
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void show_point() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class color_point :public point {
	string color;
public:
	void set_color(string color) { this->color = color; }
	void show_color_point();
};

void color_point::show_color_point() {
	cout << color << ":";
	show_point();
}

int main() {
	point p;
	color_point cp;

	cp.set(3, 4);
	cp.set_color("red");
	cp.show_color_point();
}*/