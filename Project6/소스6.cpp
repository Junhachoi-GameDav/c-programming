/* // 4-14
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "7+23+6+100+25�� ���� ���� ���ڿ��� �Է��ϼ���. " << endl;

	getline(cin, s, '\n');

	int sum = 0;
	int start_index = 0;
	while (true)
	{
		int f_index = s.find('+', start_index);
		if (f_index == -1) { // +�� ���̻� �߰� �Ҽ� ���� ������
			string part = s.substr(start_index);

			if (part == "") {
				break;
			}

			cout << part << endl;
			sum += stoi(part); //���ڿ� ���� ��ȯ
			break;
		}

		int count = f_index - start_index;
		string part = s.substr(start_index, count);


		cout << part << endl;
		sum += stoi(part);
		start_index = f_index + 1; //�˻��� ������ �ε��� ����
	}

	cout << "���ڵ��� ���� " << sum;
}
*/