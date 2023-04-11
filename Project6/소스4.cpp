/* // 4-10
#include <iostream>
using namespace std;

class _circle {
	int radius;
public:
	_circle();
	~_circle() {};
	void set_radius(int r) { radius = r; }
	double get_area() { return 3.14 * radius * radius; }
};

_circle::_circle() {
	radius = 1;
}

int main() {
	cout << "생성하고자 하는 원의 개수? ";
	int n, radius;
	cin >> n;

	if (n <= 0) {
		return 0;
	}

	_circle* p_array = new _circle[n];

	for (int i = 0; i < n; i++)
	{
		cout << "원" << i + 1 << ": ";
		cin >> radius;
		p_array[i].set_radius(radius);
	}

	int count = 0;
	_circle* p = p_array;

	for (int i = 0; i < n; i++)
	{
		cout << p->get_area() << ' ';
		if (p->get_area() >= 100 && p->get_area() <= 200) {
			count++;
		}
		p++;
	}

	cout << endl;
	delete[] p_array;
}
*/