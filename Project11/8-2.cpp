/*
#include <iostream>
#include <string>
using namespace std;

class tv {
	int size;
public:
	tv() { size = 20; }
	tv(int size) { this->size = size; }
	int get_size() { return size; }
};

class wide_tv :public tv {
	bool video_in;
public:
	wide_tv(int size, bool video_in) :tv(size) {
		this->video_in = video_in;
	}
	bool get_video_in() { return video_in; }
};

class smart_tv : public wide_tv{
	string ip_add_r;
public:
	smart_tv(string ip_add_r, int size) : wide_tv(size, true) {
		this->ip_add_r = ip_add_r;
	}
	string get_ip_add_r() { return ip_add_r; }
};

int main() {
	smart_tv htv("192.0.0.1", 32);
	cout << "size= " << htv.get_size() << endl;
	cout << "video_in= " << boolalpha << htv.get_video_in() << endl;
	cout << "ip= " << htv.get_ip_add_r() << endl;
}
*/