#include <iostream>
#include <bitset>
using namespace std;

//16비트 칼라에서의 한 점을 나타내는 구조체
struct Pixel16 {
	unsigned int blue : 5;
	unsigned int green : 6;
	unsigned int red : 5;
};

//Pixel16과 unsigned short를 멤버로 가진 공용체
//unsigned short타입의 값을 Pixel16구조체 값으로 변환하기 위해.
union Convert16 {
	Pixel16 pixel;
	unsigned short us;
};

int main() {
	//한 점의 색상을 보관하는 변수
	unsigned short color = 0x1234;

	//unsigned short 타입의 값을 Pixel16구조체 타입인 것처럼 다루기 위해 공용체 사용.
	Convert16 convert;
	convert.us = color; //convert.us에 색상 정보를 대입.

	//결과 출력
	cout << "color = " << bitset<16>(color) << "(" << color << ")\n";
	cout << "blue = " << bitset<16>(convert.pixel.blue) << "(" << 
		convert.pixel.blue << ")\n";

	cout << sizeof(struct Pixel16);

	return 0;
}