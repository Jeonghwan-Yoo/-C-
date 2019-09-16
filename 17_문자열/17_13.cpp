#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	//string 객체를 만든다.
	string cppstyle = "Yes, I am.";

	//C 스타일 문자열을 담을 공간을 준비한다.
	char* cstyle = new char[cppstyle.size() + 1]; //NULL까지 담기 위해서.

	//C 스타일 문자열을 얻어서 복사한다.
	//cppstyle 객체에서 문자열의 포인터를 얻어와서 strcpy()함수를 호출.
	strcpy(cstyle, cppstyle.c_str());

	//cstyle의 첫번째 문자를 바꿔본다.
	cstyle[0] = 'Z';

	//두 문자열을 출력한다.
	cout << "cstyle = " << cstyle << "\n";
	cout << "cppstyle = " << cppstyle << "\n";

	//메모리를 해제한다.
	delete[] cstyle;
	cstyle = NULL;

	return 0;
}