#include <iostream>
using namespace std;

class _circle {
private:
	static int num_of_circles;
	int radius;
public:
	_circle(int r = 1);
	~_circle() { num_of_circles--; }
	double get_area() { return 3.14 * radius * radius; }
	static int get_num_of_circles() { return num_of_circles; }
};

_circle::_circle(int r) {
	radius = r;
	num_of_circles++;
}

int _circle::num_of_circles = 0; //0 ���� �ʱ�ȭ 

int main() {
	_circle* p = new _circle[10];
	cout << "�����ϰ� �ִ� ���� ���� = " << _circle::get_num_of_circles() << endl;

	delete[] p;
	cout << "�����ϰ� �ִ� ���� ���� = " << _circle::get_num_of_circles() << endl;

	_circle a;
	cout << "�����ϰ� �ִ� ���� ���� = " << _circle::get_num_of_circles() << endl;

	_circle b;
	cout << "�����ϰ� �ִ� ���� ���� = " << _circle::get_num_of_circles() << endl;
}