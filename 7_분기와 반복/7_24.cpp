#include <iostream>
using namespace std;

int main() {
	int i = 0; //1부터 10까지 증가할 변수
	int sum = 0;

	//'++i <= 10'을 만족하는 동안만 반복한다.
	//++i를 한 다음에 i<=10을 비교하는 것과 동일.
	while (++i <= 10) {
		//현재까지의 합에 i를 더한다.
		sum += i;
	}
	
	//결과 출력
	cout << "현재 i의 값 = " << i << "\n";
	cout << "1~10까지의 합 = " << sum << "\n";

	return 0;
}