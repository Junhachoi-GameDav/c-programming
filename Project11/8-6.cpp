#include <iostream>
using namespace std;

class base {
	int a;
protected:
	void set_a(int a) { this->a = a; }
public:
	void show_a() { cout << a; }
};

class derived : private base {
	int b;
protected:
	void set_b(int b) { this->b = b; }
public:
	void show_b() {
		set_a(5);
		show_a();
		cout << b;
	}
};

class grand_derived : private derived {
	int c;
protected:
	void set_ab(int x) {
		set_a(x);
		show_a();
		set_b(x);
	}
};