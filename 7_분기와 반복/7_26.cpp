#include <iostream>
using namespace std;

int main() {
	int i = 1; //1부터 10까지 증가할 변수
	int sum = 0; //전체 합을 보관할 변수

	//무한정 반복된다.
	while (true) {
		//현재까지의 합에 i를 더한다.
		sum += i;

		//i에 1을 더한다.
		++i;

		//i의 값을 검사한다.
		if (i > 10) //i의 값이 10보다 큰 경우 while을 벗어남.
			break;
	}

	//결과 출력
	cout << "현재 i의 값 = " << i << "\n";
	cout << "1~10 까지의 합 = " << sum << "\n";

	return 0;
}