/* // 4-8
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
	cout << "생성자 실행 radius = " << radius << endl;
}

_circle::_circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

_circle::~_circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
	int radius;
	while (true)
	{
		cout << "정수 반지름 입력(음수이면 종료)>> ";
		cin >> radius;
		if (radius < 0) break;

		_circle* p = new _circle(radius);
		cout << "원의 면적은" << p->get_area() << endl;
		delete p;
	}
}
*/