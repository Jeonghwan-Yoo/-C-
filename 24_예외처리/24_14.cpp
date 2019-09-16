#include <iostream>
using namespace std;

void A();
void B();

int main() {
	try {
		A();
	}
	catch (const char* ex) {
		cout << "예외 잡음 : " << ex << "\n";
	}
	return 0;
}

void A() {
	//메모리를 할당한다.
	char* p = new char[100]; //메모리를 할당한다.

	//여기까지 실행했음을 출력한다.
	cout << "예외가 발생하기 전\n";

	//예외를 던지는 함수 호출
	//A()함수가 종료되고 main()함수로 이동한다. delete명령 실행되지 않는다.
	B();

	//이곳은 실행하지 않음을 출력한다.
	cout << "예외가 발생한 후\n";

	//메모리를 해제한다. (실행 안됨)
	delete[] p;
	p = NULL;
}

void B() {
	throw "Exception!!";
}