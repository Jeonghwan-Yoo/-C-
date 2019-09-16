#include "DynamicArray.h"
#include "MyException.h"
#include <iostream>
using namespace std;

void A();

int main() {
	try {
		//DynamicArray의 생성자에서 예외가 발생하게 해놓은 상태.
		DynamicArray arr(100);
	}
	catch (MyException& ex) {
		cout << "예외 설명 : " << ex.description << "\n";
	}
	return 0;
}