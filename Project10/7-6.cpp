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
	_power operator += (_power op2);
};

void _power::show() {
	cout << "kick= " << kick << "," << "punch= " << punch << endl;
}

_power _power::operator+=(_power op2) {
	kick = kick + op2.kick;
	punch = punch + op2.punch;
	return *this;
}

int main() {
	_power a(3, 5), b(4, 6), c;
	a.show();
	b.show();
	c = a += b;
	a.show();
	c.show();
}
*/