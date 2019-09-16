#include <iostream>
using namespace std;

int main() {
	//정보를 보관할 변수 정의
	int age; //나이

	//age값을 입력 받는다.
	age = 19; //19세

	//조건에 따라서 다른 문자열을 출력한다.
	if (age <= 18) {
		cout << "미성년자입니다.\n";
	}
	else if (age == 19) { //18세 이하가 아닌 19세인 경우에 true.
		cout << "아쉽네요\n";
	}
	else {
		cout << "성인입니다\n";
	}
	return 0;
}