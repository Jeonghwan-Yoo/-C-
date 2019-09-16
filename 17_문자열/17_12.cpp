#include <iostream>
#include <string>
using namespace std;

int main() {
	//string 객체를 만든다.
	string cppstyle = "Yes, I am.";

	//C 스타일 문자열을 가리킬 포인터를 준비한다.
	//문자열을 읽을 수만 있지 변경할 수는 없는 것.
	const char* cstyle = NULL;

	//C 스타일 문자열을 얻는다.
	//c_str()은 C스타일 문자열의 주소를 반환. 이 주소에 포인터 변수 cstyle을 보관.
	cstyle = cppstyle.c_str(); 

	//두 문자열을 출력한다.
	cout << "cstyle = " << cstyle << "\n";
	cout << "cppstyle = " << cppstyle << "\n";

	return 0;
}