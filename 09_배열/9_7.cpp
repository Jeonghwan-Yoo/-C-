#include <iostream>
using namespace std;

int main() {
	//세 가지 종류의 배열을 정의한다.
	char cArray[3] = { 'A','B','C' };
	int iArray[4] = { 100,200,300,400 };
	double dArray[5] = { 0.1,0.2,0.3,0.4,0.5 };

	//cArray의 크기에 대한 조사
	cout << "sizeof(cArray) = " << sizeof(cArray) << "(Bytes)\n";
	cout << "sizeof(cArray[0]) = " << sizeof(cArray[0]) << "(Bytes)\n";
	cout << "원소의 개수 = " << sizeof(cArray) / sizeof(cArray[0]) << "\n\n";

	//iArray의 크기에 대한 조사
	cout << "sizeof(iArray) = " << sizeof(iArray) << "(Bytes)\n";
	cout << "sizeof(iArray[0]) = " << sizeof(iArray[0]) << "(Bytes)\n";
	cout << "원소의 개수 = " << sizeof(iArray) / sizeof(iArray[0]) << "\n\n";

	//dArray의 크기에 대한 조사
	cout << "sizeof(dArray) = " << sizeof(dArray) << "(Bytes)\n";
	cout << "sizeof(dArray[0]) = " << sizeof(dArray[0]) << "(Bytes)\n";
	cout << "원소의 개수 = " << sizeof(dArray) / sizeof(dArray[0]) << "\n\n";

	return 0;
}