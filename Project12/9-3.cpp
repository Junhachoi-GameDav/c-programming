//#include <iostream>
//using namespace std;
//
//class Base {
//public:
//	virtual void f() { cout << "Base::f() called" << endl; }
//};
//
//class Derived : public Base {
//public:
//	void f() { cout << "Derived::f() called" << endl; } //virtual 생략가능
//};
//
//class Ground_Derived : public Derived {
//public:
//	void f() { cout << "Ground_Derived::f() called" << endl; } //virtual 생략가능
//};
//
//int main() {
//	Ground_Derived g;
//	Base* pBase;
//	Derived* pDer;
//	Ground_Derived* pg;
//
//	pBase = pDer = pg = &g; //모든 포인터가 객체 g를 가리킴
//
//	pBase->f();
//	pDer->f();
//	pg->f();
//}