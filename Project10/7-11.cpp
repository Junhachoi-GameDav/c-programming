/*
#include <iostream>
using namespace std;

class _power {
	int kick;
	int punch;
public:
	_power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	friend _power operator+(int op1, _power op2);
};


void _power::show() {
	cout << "kick= " << kick << "," << "punch= " << punch << endl;
}

_power operator+(int op1, _power op2) {
	_power tmp;
	tmp.kick = op1 + op2.kick;
	tmp.punch = op1 + op2.punch;
	return tmp;
}

int main() {
	_power a(3, 5), b;
	a.show();
	b.show();
	b = 2+a;
	a.show();
	b.show();
}
*/