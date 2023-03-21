/*
#include <iostream>
using namespace std;

class circle {
public:
	int radius;
	//동일한 생성자 가능
	circle();  //매개변수 없는 생성자 =기본 생성자
	circle(int r); //있는 생성자
	double get_area();
};
// 구현부 (생성자는 리턴 타입을 쓰지 않는다.)
circle::circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

circle::circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double circle::get_area() {
	return 3.14 * radius * radius;
}

int main() {
	circle donut;
	donut.radius = 1;
	double area1 = donut.get_area();
	cout << "도넛이 면적은" << area1 << endl;

	circle pizza(30);
	double area2 = pizza.get_area();
	cout << "도넛이 면적은" << area2 << endl;
}
*/