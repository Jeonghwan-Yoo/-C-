#include <iostream>
using namespace std;

int main() {
	//두 개의 포인터를 초기화한다.
	short sArrays[10];
	short* ps1 = &sArrays[3];
	short* ps2 = &sArrays[7];

	//결과를 출력한다.
	cout << "ps1 = " << ps1 << "\n";
	cout << "ps2 = " << ps2 << "\n";
	cout << "ps2 - ps1 = " << ps2 - ps1 << "\n";

	return 0;
}