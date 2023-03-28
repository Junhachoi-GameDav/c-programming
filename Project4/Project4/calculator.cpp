#include <iostream>
#include "add_module.h"
#include "calculater.h"
using namespace std;

void calculater::run() {
	cout << "두 개의 수를 입력>>  ";
	int a, b;
	cin >> a >> b;
	adder _adder(a, b);
	cout << _adder.process();
}