#include "complex.h"
#include <iostream>
using namespace std;

Complex operator+(const Complex& left, const Complex& right) {
	// 실수부와 허수부를 각각 더한다.
	int real = left.real + right.real;
	int imag = left.imaginary + right.imaginary;

	// 결과를 보관한 복소수 객체를 반환한다.
	return Complex(real, imag);
}

ostream& operator<<(ostream& o, const Complex& right)
{
	o << right.Real() << showpos << right.Imaginary() << "i" << noshowpos;
	return o;
}

int main() {

	int i = 5;
	Complex c(0, 0);

	//int타입을 Complex타입으로 암시적 형변환을 할 수 있다.
	c = i; //c = (5,0)
	c = Complex(i); //위와 같은 코드

	//int타입을 Complex타입으로 형변환할 수 있기 때문에 가능.
	//c = c + Complex(i);
	//c = operator+(c, Complex(i));으로 풀어 쓸 수 있다.
	c = c + i; //c = (10,0)
	c = c + Complex(i);

	return 0;

}