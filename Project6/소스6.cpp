/* // 4-14
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "7+23+6+100+25와 같이 덧셈 문자열을 입력하세요. " << endl;

	getline(cin, s, '\n');

	int sum = 0;
	int start_index = 0;
	while (true)
	{
		int f_index = s.find('+', start_index);
		if (f_index == -1) { // +를 더이상 발견 할수 없을 떄까지
			string part = s.substr(start_index);

			if (part == "") {
				break;
			}

			cout << part << endl;
			sum += stoi(part); //문자열 수로 변환
			break;
		}

		int count = f_index - start_index;
		string part = s.substr(start_index, count);


		cout << part << endl;
		sum += stoi(part);
		start_index = f_index + 1; //검색을 시작할 인덱스 전진
	}

	cout << "숫자들의 합은 " << sum;
}
*/