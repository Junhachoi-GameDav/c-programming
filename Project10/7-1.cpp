/*
#include <iostream>
using namespace std;

class _rect;
bool equals(_rect r, _rect s);

class _rect {
	int width, height;
public:
	_rect(int width, int height) {
		this->width = width; this->height = height;
	}
	friend bool equals(_rect r, _rect s);
};

bool equals(_rect r, _rect s) {
	if (r.width == s.width && r.height == s.height) return true;
	else
	{
		return false;
	}
}

int main() {
	_rect a(3, 4), b(4, 5);
	if (equals(a, b)) {
		cout << "equal" << endl;
	}
	else
	{
		cout << "not equal" << endl;
	}
}
*/