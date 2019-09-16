#include <iostream>
using namespace std;

int main() {
	//메모리를 할당한다.
	short* p = new short[100];

	//p에 보관한 주소 값을 확인한다.
	cout << "p = " << p << "\n";
	
	//메모리를 해제한다.
	delete[] p; //더 이상 p가 가리키는 메모리를 사용할 수 없다.

	//p에 보관한 주소 값을 확인한다.
	cout << "p = " << p << "\n";

	//메모리를 해제한다.
	delete[] p;

	return 0;
}