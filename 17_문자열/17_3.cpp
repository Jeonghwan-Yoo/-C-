#include <iostream>
using namespace std;

int main() {
	//문자를 준비한다.
	char c = 'A';

	//문자열을 준비한다.
	char s[] = "This is a string.";

	//문자열을 cout 객체에 넘겨준다.
	cout << s << "\n";
	cout << &s[0] << "\n";

	//문자의 주소를 cout 객체에 넘겨준다.
	cout << &c << "\n"; //NULL이 나올때까지 출력.

	return 0;
}