#include <iostream>
using namespace std;

class DynamicArray {
public:
	//멤버 변수
	int* arr; 

	//생성자와 소멸자.
	//생성자에서 동적으로 할당한 메모리의 주소를 arr에 보관한다.
	DynamicArray(int arraySize);
	~DynamicArray();
};

DynamicArray::DynamicArray(int arraySize) { //생성자. 받은 크기 만큼 메모리를 할당.
	//동적으로 메모리를 할당한다.
	arr = new int[arraySize];
}

DynamicArray::~DynamicArray() { //소멸자. 메모리 해제.
	//메모리를 해제한다.
	delete[] arr;
	arr = NULL;
}

int main() {
	//몇 개의 정수를 입력할지 물어본다.
	int size;
	cout << "몇 개의 정수를 입력하시겠소?";
	cin >> size;

	//필요한 만큼의 메모리를 준비한다.
	//정수를 담을 만큼 충분한 메모리를 할당한다.
	DynamicArray da(size);

	int i;

	//정수를 입력 받는다.
	for (i = 0;i < size;i++)
		cin >> da.arr[i];
	
	//역순으로 정수를 출력한다.
	for (i = size - 1;i >= 0;--i)
		cout << da.arr[i] << " ";

	cout << "\n";

	//따로 메모리를 해제해줄 필요가 없다.

	return 0;
}