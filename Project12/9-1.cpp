//#include <iostream>
//using namespace std;
//
//class Base {
//public:
//	void f() { cout << "Base::f() called" << endl; }
//};
//
//class Derived : public Base {
//public:
//	void f() { cout << "Derived::f() called" << endl; }
//};
//
//void main() {
//	Derived d, * pDer;
//	pDer = &d;   //°´Ã¼ d¸¦ °¡¸®Å´
//	pDer->f();  // pDer.f();
//
//	Base* pBase;
//	pBase = pDer; //°´Ã¼ d¸¦ °¡¸®Å´. ¾÷Ä³½ºÆÃ
//	pBase->f();
//}