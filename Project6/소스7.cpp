#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << endl;
	getline(cin, s, '&');
	cin.ignore(); //'&' �ڿ� ������� ���� ���� �ڵ�

	string f, r;
	cout << endl << "find: ";
	getline(cin, f, '\n');
	cout << "replace: ";
	getline(cin, r, '\n');

	int start_index = 0;
	while (true)
	{
		int f_index = s.find(f, start_index);
		if (f_index == -1)
			break;

		s.replace(f_index, f.length(), r);  //index���� f�� ���̸�ŭ r�� ����
		start_index = f_index + r.length();

	}

	cout << s << endl;
}