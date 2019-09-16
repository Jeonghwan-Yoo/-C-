#include <iostream>
using namespace std;

int main() {
	//정수 타입간의 형변환
	int i = 131071;
	unsigned short i2us = i; //int -> unsigned short
	short i2s = i; //int -> short

	//실수 타입간의 형변환
	double d = 12345678901234.56789;
	float d2f = d;

	//실수 타입에서 정수 타입으로 형변환
	float f = 76543.21f;
	short f2s = f; //float -> short

	//정수 타입에서 실수 타입으로 형변환
	int big_i = 1234567890;
	float i2f = big_i; //int -> float

	//결과 출력
	cout << fixed; //고정된 소수점 방식으로 출력하기 위해서.
	cout << "int:" << i << "\n\tto unsigned short:" << i2us << "\n\tto short:" << 
		i2s << "\n\n";
	cout << "double:" << d << "\n\tto float:" << d2f << "\n\n";
	cout << "float:" << f << "\n\tto short:" << f2s << "\n\n";
	cout << "int:" << big_i << "\n\tto float:" << i2f << "\n\n";

	return 0;

}