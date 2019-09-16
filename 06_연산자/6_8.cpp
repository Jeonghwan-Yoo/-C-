#include <bitset> //bitset 사용을 위한 준비 작업
#include <iostream>
using namespace std;

int main() {
	//다양한 타입의 변수를 준비한다.
	char c = 1;
	short int si = 2;
	int i = 4;

	//각각 2진수와 10진수로 출력한다.
	cout << "c = " << bitset<8>(c) << "(" << (int)c << ")\n";
	cout << "si = " << bitset<16>(si) << "(" << si << ")\n";
	cout << "i = " << bitset<32>(i) << "(" << i << ")\n";

	return 0;
}