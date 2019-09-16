#include <iostream>
using namespace std;

int main() {
	int i = 11; //10부터 1까지 감소할 변수
	int sum = 0; //전체 합을 보관할 변수

	//'--i'를 만족하는 동안만 반복한다.
	while (i--) { //i가 0이 되면 while을 나온다.
		//현재까지의 합에 i를 더한다.
		sum += i;
	}

	//결과 출력
	cout << "현재 i의 값 = " << i << "\n";
	cout << "1~10까지의 합 = " << sum << "\n";

	return 0;
}