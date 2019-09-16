#include <new> //bad_alloc클래스를 사용
#include <iostream>
using namespace std;

int main() {
	try {
		//많은 양의 메모리를 할당한다.
		char* p = new char[0xfffffff0];
	}
	catch (bad_alloc& ex) {
		//bad_alloc에는 예외에 대한 설명 문자열을 반환하는 what() 멤버함수가 있다.
		cout << ex.what() << "\n"; 
	}
	
	return 0;
}