#include <iostream>
using namespace std;

void WhilePositive(int n) {
	//인자를 출력한다.
	cout << "n = " << n << "\n";

	//인자가 0보다 작다면 재귀 호출을 끝낸다.
	if (n < 0)
		return;
	
	//그렇지 않다면 계속해서 재귀 호출을 한다.
	WhilePositive(n - 1); //자신의 인자보다 작은 값을 인자로 넘긴다. 종료하기 위해.

	//인자를 또 출력한다.
	cout << "n = " << n << "\n";
}

int main() {
	//재귀 함수를 호출
	WhilePositive(10);

	return 0;
}