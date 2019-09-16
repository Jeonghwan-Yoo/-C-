#include <iostream>
using namespace std;

int main() {
	//!연산자의 사용
	bool b1, b2;
	b1 = !true;
	b2 = !false;

	//결과 출력
	cout << boolalpha;
	cout << "NOT true ---> " << b1 << "\n";
	cout << "NOT false ---> " << b2 << "\n";

	return 0;
}