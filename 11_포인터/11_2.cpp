#include <iostream>
using namespace std;

int main() {
	//일반적인 변수를 정의한다.
	int a = 123;

	//포인터 변수를 정의한다.
	int* p;

	//p가 a를 가리키게 만든다.
	p = &a; //a의 주소가 p에 보관된다.

	//관련 정보를 출력한다.
	cout << "&a = " << &a << "\n";
	cout << "p = " << p << "\n";
	cout << "&p = " << &p << "\n"; //포인터 변수도 변수기 때문에 주소가 있다.

	return 0;
}