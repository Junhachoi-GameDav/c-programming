#include <iostream>
#include <cstring>
#include <string>
using namespace std;


//���� 2-2
/*
double area(int r);
double area(int r) {
	return 3.14 * r * r;
}
*/




int main() {
#pragma region ���� 2-1
	/*
	cout << "hello" << '\n';
	cout << "������";
	return 0;
	*/
#pragma endregion
#pragma region ���� 2-2
	/*
	int num = 3;
	char c = '#';
	cout << c << 5.5 << '-' << num << "hello" << true << endl;
	cout << "num + 5 = " << num + 5 << "\n";
	cout << "������ " << area(num);
	*/
#pragma endregion
#pragma region ���� 2-3
	/*
	int width;
	int height;
	
	cout << "�ʺ� �Է��ϼ���.>>";
	cin >> width;

	cout << "������ �Է��ϼ���.>>";
	cin >> height;

	int area = width * height; // �Է��� �ް� �����ؾ� �Ѵ�.
	cout << "������ " << area << "\n";
	*/
#pragma endregion
#pragma region ���� 2-4
	/*
	cout << "�̸��� �Է��ϼ���.>>";

	char name[11];
	cin >> name;

	cout << "�̸��� " << name << "�Դϴ�.\n";
	*/
#pragma endregion
#pragma region ���� 2-5
	/*
	char passward[11];
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���.>>" << endl;

	while (true)
	{
		cout << "��ȣ(��ĭ���� �Է�) >>"; //��ĭ���� �Է�
		cin >> passward;

		//passward �� c++ �̴�.
		if (strcmp(passward, "c++") == 0) {
			cout << "���α׷��� ���� �����մϴ�." << endl;
			break;
		}
		else
		{
			cout << "��ȣ�� Ʋ���ϴ�." << endl;
		}
	}
	*/
#pragma endregion
#pragma region ���� 2-6
	/*
	cout << "�ּҸ� �Է��ϼ���.>>";


	char address[100];
	//address �� 100���� \n����
	cin.getline(address, 100, '\n');

	cout << "�ּҴ� " << address << "�Դϴ�.\n";
	*/
#pragma endregion
#pragma region ���� 2-7
	/*
	string song = "���� ���� �� ��";
	string elvis = "elvis presley";
	string singer;

	cout << song + "�� �θ� ������? (�����, ���� ����)";
	cout << "(��Ʈ: ù���ڴ�" << elvis[0] << ")?";

	getline(cin, singer);
	if (singer == elvis) {
		cout << "�¾ҽ��ϴ�.";
	}
	else
	{
		cout << "Ʋ�Ƚ��ϴ�." + elvis + "�Դϴ�." << endl;
	}
	*/
#pragma endregion

}