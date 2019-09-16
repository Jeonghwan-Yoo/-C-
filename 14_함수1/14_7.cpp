#include <iostream>
using namespace std;

//함수 원형
int Factorial(int n); //int타입인자와 int타입반환값의 함수 원형.

int main() {
	//팩토리얼을 구하고 결과를 저장한다.
	int result;
	result = Factorial(5); //5를 인자로 넘긴다.

	//결과를 출력한다.
	cout << "5!는 " << result << "입니다.\n";

	return 0;
}

int Factorial(int n) {
	//결과를 저장할 변수를 준비한다.
	int result = 1; //계속 곱해야 되기 때문에 초기값을 1로.

	//팩토리얼을 구한다.
	for (int i = 1; i <= n;++i) { //사실 1을 곱할 필요는 없으므로 2부터가 좋다. 시간절약.
		result *= i;
	}

	//결과를 반환한다.
	return result;
}