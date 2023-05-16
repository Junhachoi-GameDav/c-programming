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
	_power& operator << (int n);
};


void _power::show() {
	cout << "kick= " << kick << "," << "punch= " << punch << endl;
}

_power& _power::operator << (int n) {
	kick += n;
	punch += n;
	return *this;
}

int main() {
	_power a(1, 2);
	a << 3 << 5 << 6;
	a.show();
}