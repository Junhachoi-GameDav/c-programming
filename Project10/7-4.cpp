/*
#include<iostream>
using namespace std;

class _power {
	int kick;
	int punch;
public:
	_power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	_power operator + (_power op2);
};

void _power::show() {
	cout << "kick= " << kick << "," << "punch= " << punch << endl;
}

_power _power::operator+(_power op2) {
	_power tmp;
	tmp.kick = this->kick + op2.kick;
	tmp.punch = this->punch + op2.punch;
	return tmp;
}

int main() {
	_power a(3, 5), b(4, 6), c;
	c = a + b;  
	a.show();
	b.show();
	c.show();
}
*/