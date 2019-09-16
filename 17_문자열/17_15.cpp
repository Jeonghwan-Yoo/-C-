#include <iostream>
#include <string>
using namespace std;

int main() {
	//문자열을 준비한다.
	char cs[20]; //C스타일
	string cpps; //C++스타일

	//문자열을 입력 받는다.
	cin.getline(cs, 20); //C스타일의 사용법
	getline(cin, cpps); //C++스타일의 사용법 둘이 다르다.

	//문자열을 출력한다.
	cout << "cs = " << cs << "\n";
	cout << "cpps = " << cpps << "\n";

	return 0;
}