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
//	void f() { cout << "Derived::f() called" << endl; } //virtual ��������
//};
//
//class Ground_Derived : public Derived {
//public:
//	void f() { cout << "Ground_Derived::f() called" << endl; } //virtual ��������
//};
//
//int main() {
//	Ground_Derived g;
//	Base* pBase;
//	Derived* pDer;
//	Ground_Derived* pg;
//
//	pBase = pDer = pg = &g; //��� �����Ͱ� ��ü g�� ����Ŵ
//
//	pBase->f();
//	pDer->f();
//	pg->f();
//}