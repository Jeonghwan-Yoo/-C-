#include <iostream>
using namespace std;

//스마트 포인터 클래스
class SmartPointer { //스마트 포인터 클래스를 정의한다.
public:
	//생성자에서는 char* 타입의 인자를 받아 멤버 변수 ptr에 보관한다.
	SmartPointer(char* p) : ptr(p) {

	}
	//소멸자에서는 ptr에 보관된 값을 사용해 메모리를 해제한다.
	~SmartPointer() {
		//소멸자가 호출되는 것을 확인한다.
		cout << "메모리가 해제된다!!\n";

		delete[] ptr;
	}
public:
	char* const ptr; //포인터를 보관할 수 있는 멤버 변수.
};

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
	char* p = new char[100];

	//메모리를 스마트 포인터에 보관한다.
	//스마트포인터 객체를 생성하면서 앞에서 할당한 메모리의 주소를 인자로 넣어준다.
	SmartPointer sp(p);

	//여기까지 실행되었음을 출력한다.
	cout << "예외가 발생하기 전\n";

	//예외를 던지는 함수 호출
	B();

	//이곳은 실행되지 않음을 출력한다.
	cout << "예외가 발생한 후\n";

	//함수가 정상적으로 종료되거나 예외에 의해 종료된 경우 모두 소멸자가 호출됨.
	//메모리를 따로 해제해줄 필요가 없다.
	//delete[] p;
	//p = NULL;
}

void B() {
	throw "Exception!!";
}