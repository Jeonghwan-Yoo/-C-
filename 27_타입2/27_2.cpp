#include "complex.h"

int main() {
	Complex c1(1, 1);
	Complex c2(2, 2);
	Complex c3(0, 0);

	//+연산자를 사용한 덧셈
	//두 개의 Complex를 마치 기본타입을 다루는 것처럼 연산.
	c3 = c1 + c2; //c3 = (3,3)
	c3 = c1.operator+(c2); //위와 같은식
}