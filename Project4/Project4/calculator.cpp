#include <iostream>
#include "add_module.h"
#include "calculater.h"
using namespace std;

void calculater::run() {
	cout << "�� ���� ���� �Է�>>  ";
	int a, b;
	cin >> a >> b;
	adder _adder(a, b);
	cout << _adder.process();
}