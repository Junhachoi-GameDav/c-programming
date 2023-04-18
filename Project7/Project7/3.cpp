/*
#include <iostream>
using namespace std;

int main() {
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;  //\t ег
	int i = 1;
	int n = 2;
	int& refn = n;

	n = 4;
	refn++; //refn=5
	cout << i << '\t' << n << '\t' << refn << endl;

	refn = i;
	refn++;
	cout << i << '\t' << n << '\t' << refn << endl;


	int* p = &refn;   // p= refn, p =n
	*p = 20;
	cout << i << '\t' << n << '\t' << refn << endl;
}
*/