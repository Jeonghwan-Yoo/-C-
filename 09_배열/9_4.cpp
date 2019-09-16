#include <iostream>
using namespace std;

int main() {
	//배열을 정의하면서 초기화시킨다.
	int kor_scores[5] = { 100,88,92,40,76 };

	//각 원소의 값을 출력한다.
	for (int i = 0; i < 5;i++) {
		cout << i << " 번째 원소 = " << kor_scores[i] << "\n";
	}
	return 0;
}