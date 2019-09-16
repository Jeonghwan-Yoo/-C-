#include <iostream>
using namespace std;

int main() {
	//int 타입의 변수 정의
	int i = 0x12345678; //12, 34, 56, 78

	//char* 타입의 포인터로 i를 가리킨다.
	char* pc = (char*)&i; //실험을 위한 형변환

	//pc가 가리키는 값을 구한다.
	cout << hex; //정수를 16진수로 출력하게 만든다.
	cout << "*pc = " << (int)*pc << "\n"; //문자가 아닌 숫자로 출력하게 만드려고.
	
	return 0;
}