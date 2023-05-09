/*
#include <iostream>
using namespace std;

class my_vector {
	int* p;
	int size;
public:
	my_vector(int n = 100) {
		p = new int[n];
		size = n;
	}
	~my_vector() { delete[] p; }
};

int main() {
	my_vector* v1, * v2;
	v1 = new my_vector(); //µðÆúÆ® 100
	v2 = new my_vector(1024);

	delete v1;
	delete v2;
}
*/