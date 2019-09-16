#include <iostream>
using namespace std;

int main() {
	//정보를 보관할 변수 정의
	int age; //나이

	//age를 입력 받는다.
	age = 20;

	//조건에 따라서 다른 문자열을 출력한다.
	if (age <= 19) {
		cout << "미성년자입니다.\n";
	}

	return 0;
}