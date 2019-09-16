#include <iostream>
using namespace std;

int main() {
	//ILoveYou라고 찍힌 곳으로 이동한다.
	goto ILoveYou; //ILoveYou라는 레이블이 있는 곳으로 실행의 흐름을 이동.

	//이곳을 뛰어넘는지 실험
	cout << "이 문자열이 출력되면 안됩니다.\n";

ILoveYou: //ILoveYou라는 레이블을 위치시킨다.
	cout << "여기는 ILoveYou 다음입니다.\n";

	return 0;
}