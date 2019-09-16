#include <bitset>
#include <iostream>
using namespace std;

int main() {
	//한 점의 색상을 보관하는 변수
	unsigned short color = 0x1234;

	//빨간색 부분의 비트들을 0으로 만든다.
	//빨간색 0xffff-0xf800=0x07ff
	//빨간색 부분을 새로 써넣을 때 OR연산을 사용하기 위해 지워준다.
	unsigned short color_temp;
	color_temp = color & 0x07ff;

	//새로운 빨간색의 값을 준비한다.
	unsigned short red = 30;

	//빨간색의 값을 왼쪽 끝으로 옮긴다.
	//원하는 빨간색의 밝기가 보관되었고, 빨간색 위치로 옮겨야 한다.
	unsigned short red_temp;
	red_temp = red << 11;

	//빨간색의 값을 색상에 넣는다.
	unsigned short color_finished;
	color_finished = color_temp | red_temp;

	//결과 출력
	cout << "         color = " << bitset<16>(color) << "(" << color << ")\n";
	cout << "    color_temp = " << bitset<16>(color_temp) << "(" << color_temp << ")\n";
	cout << "           red = " << bitset<16>(red) << "(" << red << ")\n";
	cout << "      red_temp = " << bitset<16>(red_temp) << "(" << red_temp << ")\n";
	cout << "color_finished = " << bitset<16>(color_finished) << "(" << color_finished << ")\n";
}