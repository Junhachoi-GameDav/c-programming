#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
	getline(cin, s, '&');
	cin.ignore(); //'&' 뒤에 따라오는 엔터 제거 코드

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

		s.replace(f_index, f.length(), r);  //index부터 f의 길이만큼 r로 변경
		start_index = f_index + r.length();

	}

	cout << s << endl;
}