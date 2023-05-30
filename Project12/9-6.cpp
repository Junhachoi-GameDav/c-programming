#include <iostream>
using namespace std;
class calculator {
public:
	virtual int add(int a, int b) = 0; //��
	virtual int subtract(int a, int b) = 0; //��
	virtual double average(int a[], int size) = 0; //�迭 a�� ��� ����, size�� �迭�� ũ��
};

class Good_calc : public calculator {
public:
	int add(int a, int b) { return a + b; }
	int subtract(int a, int b) { return a - b; }
	double average(int a[], int size) {
		double sum = 0;
		for (int i = 0; i < size; i++)
		{
			sum += a[i];
		}
		return sum / size;
	}
};

int main() {
	int a[] = { 1,2,3,4,5 };
	calculator* p = new Good_calc();
	cout << p->add(2, 3) << endl;
}