#include <iostream>
using namespace std;

//2진수의 자리 수 하나를 구하는 재귀 함수
void Convert2Bin(int dec) { //한번 실행하는 동안 2진수의 자리 수 하나를 계산.
	//10진수가 0보다 작거나 같으면 종료한다.
	if (dec <= 0)
		return;
	
	//인자를 2로 나눈 값을 인자로 다시 호출한다.
	Convert2Bin(dec / 2); //다음 자리수를 구하기 위해 재귀 호출.

	//인자를 2로 나눈 나머지를 출력한다.
	cout << dec % 2; //나머지들은 계산한 순서의 역순으로 모아야한다. 그러니 뒤쪽.
}

int main() {
	//13을 2진수로 변환한다.
	Convert2Bin(13);
	cout << "\n";
	return 0;
}