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
	_power& operator ++ ();
};


void _power::show() {
	cout << "kick= " << kick << "," << "punch= " << punch << endl;
}

_power& _power::operator++() {
	kick++;
	punch++;
	return *this;
}

int main() {
	_power a(3, 5), b;
	a.show();
	b.show();
	b = ++a;
	a.show();
	b.show();
}
*/
