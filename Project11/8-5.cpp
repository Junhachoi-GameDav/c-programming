/*
#include <iostream>
using namespace std;

class base {
	int a;
protected:
	void set_a(int a) { this->a = a; }
public:
	void show_a() { cout << a; }
};

class derived : protected base {
	int b;
protected:
	void set_b(int b) { this->b = b; }
public:
	void show_b() { cout << b; }
};

int main() {
	derived x;
	//x.a = 5;
	//x.set_a(10);
	//x.show_a();
	//x.b = 10;
	//x.set_b(10);
	x.show_b();
}
*/