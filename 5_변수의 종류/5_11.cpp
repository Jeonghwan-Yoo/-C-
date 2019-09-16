#include <iostream>
using namespace std;

int main() {
	//다양한 타입의 변수 정의
	int i = 65;
	float f = 66.89f;
	char c = 'C';

	//명시적으로 형변환한다.
	cout << "int i = " << i << "\n";
	cout << "(char)i = " << (char)i << "\n";
	cout << "(bool)i = " << (bool)i << "\n\n";

	cout << "float f = " << f << "\n";
	cout << "(int)f = " << (int)f << "\n\n";
	
	cout << "char c = " << c << "\n";
	cout << "(int)c = " << (int)c << "\n";
}