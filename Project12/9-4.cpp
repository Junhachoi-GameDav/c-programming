//#include <iostream>
//using namespace std;
//
//class Shape {
//public:
//	virtual void draw() {
//		cout << "--shape--";
//	}
//};
//
//class Circle : public Shape {
//public:
//	int x;
//	virtual void drow() {
//		Shape::draw(); //기본 클라스의 draw를 호출
//		cout << "Circle" << endl;
//	}
//};
//
//// 포인터가 가르켜서 동적 바인딩이 안되는건지....
//int main() {
//	Circle circle;
//	Shape* pShape = &circle;
//
//	pShape->draw();
//	pShape->Shape::draw(); //정적바인딩
//}