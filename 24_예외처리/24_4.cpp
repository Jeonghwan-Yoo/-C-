#include "DynamicArray.h"
#include <iostream>
using namespace std;

void UseArray(DynamicArray& arr);

int main() {
	//크기가 10인 배열 객체를 만든다.
	DynamicArray arr(10);
	UseArray(arr);
	return 0;
}

void UseArray(DynamicArray& arr) {
	try { //블럭 안에서 던져지는 예외를 받겠다는 뜻.
		arr.SetAt(5, 100);
		arr.SetAt(8, 100);
		arr.SetAt(10, 100);
	}
	catch (const char* ex) { //해당 타입만 예외를 받고있다. 
		cout << "예외 종류 : " << ex << "\n";
	}
}