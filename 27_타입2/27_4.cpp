#include "complex.h"

//왼쪽과 오른쪽 피연산자의 역할을 하는 두 개의 인자를 받는다.
Complex operator+(const Complex& left, const Complex& right) {
	//실수부와 허수부를 각각 더한다.
	int real = left.real + right.real;
	int imag = left.imaginary + right.imaginary;

	//결과를 보관한 복소수 객체를 반환한다.
	return Complex(real, imag);

}

int main() {
	Complex c1(1, 1);
	Complex c2(2, 2);
	Complex c3(0, 0);

	//+연산자를 사용한 덧셈
	c3 = c1 + c2; //c3 = (3,3)
	c3 = operator+(c1, c2); //멤버함수의 사용법과 다르다.

	return 0;
}