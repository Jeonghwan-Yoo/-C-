#include <iostream>
using namespace std;

//최대공약수와 최소공배수를 구한다.
void GCD_LCM(int a, int b, int* pgcd, int* plcm) { //포인터로바꿔주고 이름을 바꿨다.
	//유클리드의 호제법을 사용해서 GCD를 구한다.
	int z;
	int x = a;
	int y = b;
	while (true) {
		z = x % y;
		if (0 == z)
			break;
		x = y;
		y = z;
	}

	//결과를 저장한다.
	*pgcd = y;
	*plcm = a * b / *pgcd;
}

int main() {
	//28과 35의 최대공약수와 최소공배수를 구한다.
	int gcd = 0;
	int lcm = 0;
	GCD_LCM(28, 35, &gcd, &lcm);

	//결과를 출력한다.
	cout << "GCD = " << gcd << "\n";
	cout << "LCM = " << lcm << "\n";

	return 0;
}