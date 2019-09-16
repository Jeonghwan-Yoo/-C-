//cout을 사용하기 위한 준비
#include <iostream>
using namespace std;

int main() {
	//3개의 변수를 정의
	int a;
	int b;
	int c;

	//각 변수에 100, 200, 300값을 넣는다.
	a = 100;
	b = 200;
	c = 300;

	//화면에 출력한다.
	//a, b, c를 연이어 화면에 출력한다.
	cout << a << b << c;
	cout << a << ", " << b << ", " << c << '\n';

	return 0;
}