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
//		Shape::draw(); //�⺻ Ŭ���� draw�� ȣ��
//		cout << "Circle" << endl;
//	}
//};
//
//// �����Ͱ� �����Ѽ� ���� ���ε��� �ȵǴ°���....
//int main() {
//	Circle circle;
//	Shape* pShape = &circle;
//
//	pShape->draw();
//	pShape->Shape::draw(); //�������ε�
//}