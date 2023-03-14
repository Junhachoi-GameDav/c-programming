#include <iostream>
#include <cstring>
#include <string>
using namespace std;


//예제 2-2
/*
double area(int r);
double area(int r) {
	return 3.14 * r * r;
}
*/




int main() {
#pragma region 예제 2-1
	/*
	cout << "hello" << '\n';
	cout << "맛보기";
	return 0;
	*/
#pragma endregion
#pragma region 예제 2-2
	/*
	int num = 3;
	char c = '#';
	cout << c << 5.5 << '-' << num << "hello" << true << endl;
	cout << "num + 5 = " << num + 5 << "\n";
	cout << "면적은 " << area(num);
	*/
#pragma endregion
#pragma region 예제 2-3
	/*
	int width;
	int height;
	
	cout << "너비를 입력하세요.>>";
	cin >> width;

	cout << "높히를 입력하세요.>>";
	cin >> height;

	int area = width * height; // 입력을 받고 시작해야 한다.
	cout << "면적은 " << area << "\n";
	*/
#pragma endregion
#pragma region 예제 2-4
	/*
	cout << "이름을 입력하세요.>>";

	char name[11];
	cin >> name;

	cout << "이름은 " << name << "입니다.\n";
	*/
#pragma endregion
#pragma region 예제 2-5
	/*
	char passward[11];
	cout << "프로그램을 종료하려면 암호를 입력하세요.>>" << endl;

	while (true)
	{
		cout << "암호(빈칸없이 입력) >>"; //빈칸없이 입력
		cin >> passward;

		//passward 는 c++ 이다.
		if (strcmp(passward, "c++") == 0) {
			cout << "프로그램을 정상 종료합니다." << endl;
			break;
		}
		else
		{
			cout << "암호가 틀립니다." << endl;
		}
	}
	*/
#pragma endregion
#pragma region 예제 2-6
	/*
	cout << "주소를 입력하세요.>>";


	char address[100];
	//address 에 100개를 \n까지
	cin.getline(address, 100, '\n');

	cout << "주소는 " << address << "입니다.\n";
	*/
#pragma endregion
#pragma region 예제 2-7
	/*
	string song = "폴링 러브 윗 유";
	string elvis = "elvis presley";
	string singer;

	cout << song + "를 부른 가수는? (영어로, 띄어쓰기 포함)";
	cout << "(힌트: 첫글자는" << elvis[0] << ")?";

	getline(cin, singer);
	if (singer == elvis) {
		cout << "맞았습니다.";
	}
	else
	{
		cout << "틀렸습니다." + elvis + "입니다." << endl;
	}
	*/
#pragma endregion

}