#include <iostream>
#include <cmath> //수학과 관련된 함수들. c는 CRT를 의미.
using namespace std;

int main() {
	//2의 제곱근을 구한다.
	double sqrt_2 = sqrt(2.0);

	//12의 제곱을 구한다.
	double pow_12_2 = pow(12, 2);

	//결과 출력
	cout << "2의 제곱근 = " << sqrt_2 << "\n";
	cout << "12의 제곱 = " << pow_12_2 << "\n";

	return 0;
}