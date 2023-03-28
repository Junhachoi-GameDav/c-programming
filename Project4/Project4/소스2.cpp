/*
#include <iostream>
using namespace std;

class private_access_error {
private:
	int a;
	void f();
	private_access_error();
public:
	int b;
	private_access_error(int x);
	void g();
};

private_access_error::private_access_error() {
	a = 1;
	b = 1;
}

private_access_error::private_access_error(int x) {
	a = x;
	b = x;
}

void private_access_error::f() {
	a = 5;
	b = 5;
}

void private_access_error::g() {
	a = 6;
	b = 6;
}

int main() {
	//private_access_error obj_a;		//error
	private_access_error obj_b(100);
	//obj_b.a = 10;					//error
	obj_b.b = 20;
	//obj_b.f();						//error
	obj_b.g();
}
*/