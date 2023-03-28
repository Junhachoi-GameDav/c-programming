/*
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double get_area();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle() {
	cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::get_area() {
	return 3.14 * radius * radius;
}

Circle global_donut(1000);
Circle global_pizza(2000);

void f() {
	Circle f_conut(100);
	Circle f_pizza(200);
}

int main() {
	Circle main_donut;
	Circle main_pizza(30);
	f();
}
*/