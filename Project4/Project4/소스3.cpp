/*
#include <iostream>
using namespace std;

struct struct_circle
{
private:
	int radius;
public:
	struct_circle(int r) {
		radius = r;
	} // 구조체 자동 인라인 생성
	double get_area();
};

double struct_circle::get_area() {
	return 3.14 * radius * radius;
}

int main() {
	struct_circle waffle(3);
	cout << "면적은 " << waffle.get_area();
}
*/