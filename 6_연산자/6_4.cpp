#include <iostream>
using namespace std;

int main() {
	//모든 경우의 AND 연산 수행
	bool b1, b2, b3, b4;
	b1 = false && false;
	b2 = false && true;
	b3 = true && false;
	b4 = true && true;

	//결과를 출력
	cout << boolalpha;
	cout << "false AND false ---> " << b1 << "\n";
	cout << "false AND true ---> " << b2 << "\n";
	cout << "true AND false ---> " << b3 << "\n";
	cout << "true AND true ---> " << b4 << "\n";

	return 0;
}