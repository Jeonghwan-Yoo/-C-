#include "complex.h"

int main() {
	Complex c1(10, 5);

	int i;
	//Complex객체를 int타입으로 암시적으로 형변환할 수 있다.
	i = c1; //i = 10
	i = c1.operator int(); //위와 같음

}