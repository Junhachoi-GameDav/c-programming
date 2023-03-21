
#include <iostream>
using namespace std;

class rectangle {
public:
	int width, height;
	rectangle();
	rectangle(int w, int h);
	rectangle(int length);
	bool is_square();
};

rectangle::rectangle() {
	width = height = 1;
}

rectangle::rectangle(int w, int h) {
	width = w;
	height = h;
}

rectangle::rectangle(int length) {
	width = height = length;
}

bool rectangle::is_square() {
	if (width == height) {
		return true;
	}
	else
	{
		return false;
	}
}

int main() {
	rectangle reat1;
	rectangle reat2(3,5);
	rectangle reat3(3);

	if (reat1.is_square()) cout << "reat1 은 정사각형 입니다." << endl;
	if (reat2.is_square()) cout << "reat2 은 정사각형 입니다." << endl;
	if (reat3.is_square()) cout << "reat3 은 정사각형 입니다." << endl;
}
