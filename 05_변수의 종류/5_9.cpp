#include <iostream>
using namespace std;

int main() {
	//다양한 타입의 변수를 정의한다.
	int i = 65;
	float f = 66.89f;
	char c = 'C';
	bool b = true;

	//형변환에 사용할 변수들을 미리 정의해둔다.
	//이렇게 하는 것이 더욱 간결한 경우가 있다.
	int  f2i, c2i, b2i;
	float i2f, c2f, b2f;
	char i2c, f2c, b2c;
	bool i2b, f2b, c2b;

	//int을 다른 타입으로
	i2f = i; //int -> float
	i2c = i; //int -> char
	i2b = i; //int -> bool

	//float을 다른 타입으로
	f2i = f; //float -> int
	f2c = f; //float -> char
	f2b = f; //float -> bool

	//char을 다른 타입으로
	c2i = c; //char -> int
	c2f = c; //char -> float
	c2b = c; //int -> bool

	//bool을 다른 타입으로
	b2i = b; //bool -> int
	b2f = b; //bool -> float
	b2c = b; //bool -> char

	//결과 출력
	cout << "int:" << i << "\n\tto float:" << i2f << "\n\tto char:" 
		<< i2c << "\n\tto bool:" << i2b << "\n\n";
	cout << "float:" << f << "\n\tto int:" << f2i << "\n\tto char:"
		<< f2c << "\n\tto bool:" << f2b << "\n\n";
	cout << "char:" << c << "\n\tto int:" << c2i << "\n\tto float:"
		<< c2f << "\n\tto bool:" << c2b << "\n\n";
	cout << "bool:" << b << "\n\tto int:" << b2i << "\n\tto float:"
		<< b2f << "\n\tto char:" << b2c << "\n\n";

	return 0;
}