#include <bitset>
#include <iostream>
using namespace std;

int main() {
	//피연산자를 준비한다.
	unsigned char a, b;
	a = 178;
	b = 113;

	//비트 단위 논리 연산을 수행
	unsigned char c1, c2, c3, c4; //간결한 설명을 위해 unsigned char.
	c1 = a & b; //AND
	c2 = a | b; //OR
	c3 = a ^ b; //XOR
	c4 = ~a; //NOT

	//결과를 출력한다.
	//괄호 안에는 10진수가 출력된다.
	//원래 타입이 unsigned char이기 때문에 형변환을 하지 않으면 숫자 대신 문자가 출력.
	cout << "a = " << bitset<8>(a) << "(" << (unsigned int)a << ")\n";
	cout << "b = " << bitset<8>(b) << "(" << (unsigned int)b << ")\n";
	cout << "a&b = " << bitset<8>(c1) << "(" << (unsigned int)c1 << ")\n";
	cout << "a|b = " << bitset<8>(c2) << "(" << (unsigned int)c2 << ")\n";
	cout << "a^b = " << bitset<8>(c3) << "(" << (unsigned int)c3 << ")\n";
	cout << "~a = " << bitset<8>(c4) << "(" << (unsigned int)c4 << ")\n";

	return 0;
}