#include "MyException.h"
#include <iostream>
using namespace std;

void A();

int main() {
	try {
		A();
	}
	catch (MemoryException& ex) {
		cout << "MemoryException 타입으로 잡혔음\n";
	}
	catch (OutOfRangeException& ex) {
		cout << "OutOfRangeException 타입으로 잡혔음\n";
	}
	catch (...) { //모든 타입의 예외를 받는다. 나머지 모든 예외를 받고 싶은 경우.
		cout << "그 밖의 타입\n";
	}

	return 0;
}

void A() {
	//throw 100; //그 밖의 타입.
	throw OutOfRangeException(NULL, 0);
}