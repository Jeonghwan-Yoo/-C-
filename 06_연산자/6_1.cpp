#include <iostream>
using namespace std;

int main() {
	//계산에 사용할 값 정의
	int a = 8;
	int b = 4;

	//사칙 연산을 한다.
	int c = a + b; //덧셈
	int d = a - b; //뺄셈
	int e = a * b; //곱셈
	int f = a / b; //나눗셈

	//나머지 연산을 한다.
	int g = a % b; //나눗셈의 나머지

	//결과 출력
	cout << "8 + 4 = " << c << "\n";
	cout << "8 - 4 = " << d << "\n";
	cout << "8 * 4 = " << e << "\n";
	cout << "8 / 4 = " << f << "\n";
	cout << "8 % 4 = " << g << "\n";

	return 0;
}