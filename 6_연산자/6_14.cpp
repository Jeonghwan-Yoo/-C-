#include <iostream>
using namespace std;

int main() {
	//4개의 변수를 동일한 값으로 채운다.
	int A, B, C, D;
	A = B = C = D = 3;

	//다양하게 ++, -- 연산자를 이용한다.
	int ppA, Bpp, mmC, Dmm;
	ppA = ++A; //전치
	Bpp = B++; //후치
	mmC = --C; //전치
	Dmm = D--; //후치

	//결과를 출력한다.
	cout << "A, B, C, D : " << A << ", " << B << ", " << C << ", " << D << "\n";
	cout << "++A, B++, --C, D-- : " << ppA << ", " << Bpp << ", "
		<< mmC << ", " << Dmm << "\n";

	return 0;
}