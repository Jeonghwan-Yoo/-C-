#include <iostream>
using namespace std;

int main() {
	//2~9단까지 반복한다.
	for (int i = 2; i <= 9; ++i) {
		//i단의 시작을 표시한다.
		cout << i << "단 --------\n";

		//1~9까지 반복한다.
		for (int j = 1; j <= 9;++j) {
			cout << i << " x " << j << " = " << i * j << "\n";
		}
	}
	return 0;
}