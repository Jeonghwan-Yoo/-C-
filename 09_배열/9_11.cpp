#include <iostream>
using namespace std;

int main() {
	//문자열 상수를 사용해서 배열을 초기화한다.
	char cArray1[] = "ABCDE"; 
	char cArray2[] = { 'A','B','C','D','E',0 };

	//두 배열의 크기를 비교해본다.
	cout << "sizeof(cArray1) = " << sizeof(cArray1) << "(Bytes)\n";
	cout << "sizeof(cArray2) = " << sizeof(cArray2) << "(Bytes)\n";

	//두 배열의 4,5번째 원소를 출력해본다.
	cout << cArray1[4] << (int)cArray1[5] << "\n";
	cout << cArray2[4] << (int)cArray2[5] << "\n";

	return 0;
}