#include <iostream>
using namespace std;

int main() {
	//피연산자를 정의한다.
	int a = 3;
	int b = 5;

	//관계 연산자 사용. 6가지 종류. bool 타입의 변수에 결과를 보관.
	bool b1, b2, b3, b4, b5, b6;
	b1 = a > b; //a가 b보다 크다
	b2 = a >= b; //a가 b보다 크거나 같다
	b3 = a < b; //a가 b보다 작다
	b4 = a <= b; //a가 b보다 작거나 같다
	b5 = a == b; //a와 b가 같다
	b6 = a != b; //a와 b가 같지 않다.

	//bool 타입의 값을 문자로 출력하게 만든다.
	cout << boolalpha; //bool타입의 결과를 1,0 대신 true, false로 출력하게 한다.

	//결과를 출력
	cout << a << " > " << b << " --> " << b1 << "\n";
	cout << a << " >= " << b << " --> " << b2 << "\n";
	cout << a << " < " << b << " --> " << b3 << "\n";
	cout << a << " <= " << b << " --> " << b4 << "\n";
	cout << a << " == " << b << " --> " << b5 << "\n";
	cout << a << " != " << b << " --> " << b6 << "\n";

	return 0;
}