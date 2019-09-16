#include <iostream>
using namespace std;

int main() {
	//변수를 정의한다.
	char c = 'B';
	int i = 19;
	float f = 4.5f;

	//주소를 출력한다.
	//변수 이름에 &(Ampersand)를 붙이면 주소를 반환한다.
	//cout객체가 char타입 변수의 주소를 특별하게 취급하기 때문에 int타입으로 형변환.
	cout << "c의 주소 = " << (int*)&c << "\n";
	cout << "i의 주소 = " << &i << "\n";
	cout << "f의 주소 = " << &f << "\n";

	return 0;
}