#include <iostream>
using namespace std;

int main() {
	//그냥 문자의 배열을 만든다.
	char ThisIsNotString[] = { 'H','e','l','l','o' };

	//문자열을 만든다.
	char ThisIsString[] = { 'H','e','l','l','o','\0' };

	//두 배열을 cout객체로 보낸다.
	cout << ThisIsNotString << "\n";
	cout << ThisIsString << "\n";

	return 0;

}