#include <bitset>
#include <iostream>
using namespace std;

int main() {
	//한 점의 색상을 보관하는 변수
	unsigned short color = 0x1234;

	//파란색을 제외한 나머지 비트를 지운다.
	//파란색은 0x001f
	unsigned short blue;
	blue = color & 0x001f;

	//결과 출력
	cout << "color = " << bitset<16>(color) << "(" << color << ")\n";
	cout << "blue = " << bitset<16>(blue) << "(" << blue << ")\n";

	return 0;
}