/*
#include <iostream>
using namespace std;

class circle {
public:
	int radius;
	//������ ������ ����
	circle();  //�Ű����� ���� ������ =�⺻ ������
	circle(int r); //�ִ� ������
	double get_area();
};
// ������ (�����ڴ� ���� Ÿ���� ���� �ʴ´�.)
circle::circle() {
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;
}

circle::circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

double circle::get_area() {
	return 3.14 * radius * radius;
}

int main() {
	circle donut;
	donut.radius = 1;
	double area1 = donut.get_area();
	cout << "������ ������" << area1 << endl;

	circle pizza(30);
	double area2 = pizza.get_area();
	cout << "������ ������" << area2 << endl;
}
*/