#include <iostream>
using namespace std;

int main() {
	//전체 합을 보관할 변수
	int sum = 0;
	int i = 1;
	//1~10까지 반복하면서 더한다.
	for (i;i <= 10;++i) {
		//i가 5인 경우는 그냥 넘어간다.
		if (5 == i)
			continue;

		//현재까지의 합에 i를 더한다.
		sum += i;
	}
	//결과 출력
	cout << "현재 i의 값 = " << i << "\n";
	cout << "1~4, 6~10 까지의 합 = " << sum << "\n";

	return 0;
}