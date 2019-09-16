#include <bitset>
#include <iostream>
using namespace std;

int main() {
	//한 점의 색상을 보관하는 변수
	unsigned short color = 0x1234;

	//녹색을 제외한 나머지 비트를 지운다.
	//녹색은 0x07e0;
	unsigned short green_temp;
	green_temp = color & 0x07e0;

	//녹색의 비트들을 오른쪽 끝으로 이동시킨다.
	unsigned short green;
	green = green_temp >> 5;

	//결과 출력
	cout << "     color = " << bitset<16>(color) << "(" << color << ")\n";
	cout << "green_temp = " << bitset<16>(green_temp) << "(" << green_temp << ")\n";
	cout << "     green = " << bitset<16>(green) << "(" << green << ")\n";

	return 0;
}