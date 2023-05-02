/*
#include <iostream>
using namespace std;

class _circle {
private:
	int radius;
public:
	_circle(const _circle& c); // 복사 생성자
	_circle() { radius = 1; }
	_circle(int radius) { this->radius = radius; }
	double get_area() { return 3.14 * radius * radius; }
};

_circle::_circle(const _circle& c) {
	this->radius = c.radius;
	cout << "복사생성자 실행 radius = " << radius << endl;
}

int main() {
	_circle src(30);  //보통
	_circle dest(src); //복사

	cout << "원본의 면적 = " << src.get_area() << endl;
	cout << "사본의 면적 = " << dest.get_area() << endl;
}
*/