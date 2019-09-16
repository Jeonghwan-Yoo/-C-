#include <iostream>
using namespace std;

int main() {
	//각각 10, 8, 16진법을 사용한다.
	int decimal = 41; //10진수
	int octal = 041; //8진수
	int hexadecimal = 0x41; //16진수

	//출력
	cout << "41=" << decimal << "\n";
	cout << "041=" << octal << "\n";
	cout << "0x41=" << hexadecimal << "\n";
	
	return 0;
}