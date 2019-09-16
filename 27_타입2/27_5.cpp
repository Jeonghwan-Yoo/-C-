#include "complex.h"
#include <iostream>
using namespace std;

//반환 값의 타입을 ostream&.
//인자로 받은 cout객체를 다시 반환해야 해서
ostream& operator<<(ostream& o, const Complex& right) {
	//복소수의 형태로 출력한다.
	//showpos를 사용하면 양수인 경우에도 +5처럼 기호를 출력한다.
	//noshowpos를 cout객체에 보내 다시 원래의 상태로 되돌렸다.
	o << right.Real() << showpos << right.Imaginary() << "i" << noshowpos;
	return o; //인자로 받은 cout 객체를 다시 반환한다.
}

int main() {
	Complex c1(10, 5);

	//기본 타입을 cout객체로 출력하듯이 Complex객체를 출력할 수 있다.
	cout << c1 << "\n";

	return 0;
}