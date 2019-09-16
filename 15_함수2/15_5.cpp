#include <iostream>
using namespace std;

void Dog() {
	cout << "I'm a dog.\n";
}

void Cat() {
	cout << "I'm a cat.\n";
}

int main() {
	//함수의 포인터를 정의한다.
	void(*p)(); //함수에 대한 포인터 변수를 정의.

	//Dog()함수를 가리키게 한 후에 호출한다.
	p = &Dog; //함수 이름에 &를 붙여주면 함수의 주소를 반환한다. 그리고 p에 대입.
	(*p)(); //p가 가리키는 함수를 호출한다. 괄호는 연산자의 우선순위 때문.

	//Cat()함수를 가리키게 한 후에 호출한다.
	p = &Cat;
	(*p)();

	return 0;
}