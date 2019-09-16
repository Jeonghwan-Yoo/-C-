#include "DynamicArray.h"
#include "MyException.h"
//24_16 생성자에서 예외가 발생한 경우
#include <iostream>
using namespace std;

DynamicArray::DynamicArray(int arraySize) {
	//24_17 생성자에서 예외가 발생한 경우의 해결
	//생성자 내의 모든 코드를 try블록으로 감싼다.
	//생성자에서 발생하는 모든 예외를 받기 위해서.
	try {
		//동적으로 메모리를 할당한다.
		arr = new int[arraySize];

		//배열의 길이 보관
		size = arraySize;

		//여기서 고의로 예외를 발생시킨다.
		throw MemoryException(this, 0);
	}
	catch (...) {
		//catch가 실행되는 것을 확인하기 위해
		cout << "여기는 실행된다!!\n";
		
		//소멸자가 호출되지 않기 때문에 여기서 해제해야 한다.
		delete[] arr;

		//받은 예외를 다시 던진다.
		throw;
	}

	/*
	//동적으로 메모리를 할당한다.
	arr = new int[arraySize];

	//배열의 길이 보관
	size = arraySize;

	//24_16 생성자에서 예외가 발생한 경우
	//여기서 고의로 예외를 발생시킨다.
	throw MemoryException(this, 0);
	*/
}

DynamicArray::~DynamicArray() {
	//24_16 생성자에서 예외가 발생한 경우
	//소멸자를 실행하지 않음을 확인한다.
	cout << "여기는 소멸자다!!\n";
	
	//메모리를 해제한다.
	delete[] arr;
	arr = 0;
}

//24_4 구조적 예외 처리의 사용
//원소의 값을 바꾼다.
void DynamicArray::SetAt(int index, int value) {
	//인덱스의 범위가 맞지 않으면 예외를 던진다
	if (index < 0 || index >= GetSize())
		//24_6 다형성 사용
		throw OutOfRangeException(this, index); //구체적인 의미가 있다.
		//24_5 예외 객체의 사용
		//throw MyException(this, "Out of Range!!!", index); //생성자 사용.
		//throw "Out of Range!!!";

	arr[index] = value;
}

/*
//24_2
//반환 값이 예외의 발생 여부를 알려주는 역할을 한다.
bool DynamicArray::SetAt(int index, int value) {
	//인덱스를 확인한다.
	if (index < 0 || index >= GetSize())
		return false;

	arr[index] = value;

	return true;
}
*/

/*
//원소의 값을 바꾼다
void DynamicArray::SetAt(int index, int value) {
	arr[index] = value;
}
*/

//24_4 구조적 예외처리
//원소의 값을 반환한다.
int DynamicArray::GetAt(int index) const {
	//인덱스의 범위가 맞지 않으면 예외를 던진다
	if (index < 0 || index >= GetSize())
		//24_6 다형성 사용
		throw OutOfRangeException(this, index);
		//24_5 예외 객체의 사용
		//throw MyException(this, "Out of Range!!!", index);
		//throw "Out of Range!!!";

	return arr[index];
}

/*
//원소의 값을 반환한다.
int DynamicArray::GetAt(int index) const {
	return arr[index];
}
*/

//배열의 길이를 반환한다.
int DynamicArray::GetSize() const {
	return size;
}