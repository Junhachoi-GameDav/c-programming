/*
#include <iostream>
using namespace std;

class _rect;

class _rect_manager {
public:
	bool equals(_rect r, _rect s);
};

class _rect {
	int width, height;
public:
	_rect(int width, int height) { this->width = width; this->height = height; }
	friend bool _rect_manager::equals(_rect r, _rect s);
};

bool _rect_manager::equals(_rect r, _rect s) {
	if (r.width == s.width && r.height == s.height) {
		return true;
	}
	else
	{
		return false;
	}
}

int main() {
	_rect a(3, 4), b(3, 4);
	_rect_manager man;

	if (man.equals(a, b)) {
		cout << "equal" << endl;
	}
	else
	{
		cout << "not equal" << endl;
	}
}
*/