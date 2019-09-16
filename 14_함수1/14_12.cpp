#include <iostream>
using namespace std;

//두 개의 멤버를 가진 구조체를 정의
struct RetValues {
	int retValue1;
	int retValue2;
};

//구조체를 반환하는 함수의 정의
RetValues PlusMinus(int a, int b) {
	//구조체 변수를 만든다.
	RetValues ret;
	ret.retValue1 = a + b;
	ret.retValue2 = a - b;

	//구조체 변수를 반환한다
	return ret;
}

int main() {
	//반환 값을 받을 구조체 변수를 준비
	RetValues result;

	//3,5의 덧셈과 뺄셈을 구한다.
	result = PlusMinus(3, 5);

	//결과 출력
	cout << "3 + 5 = " << result.retValue1 << "\n";
	cout << "3 - 5 = " << result.retValue2 << "\n";

	return 0;
}