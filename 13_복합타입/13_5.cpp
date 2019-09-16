#include <iostream>
#include <bitset>
using namespace std;

//16��Ʈ Į�󿡼��� �� ���� ��Ÿ���� ����ü
struct Pixel16 {
	unsigned int blue : 5;
	unsigned int green : 6;
	unsigned int red : 5;
};

//Pixel16�� unsigned short�� ����� ���� ����ü
//unsigned shortŸ���� ���� Pixel16����ü ������ ��ȯ�ϱ� ����.
union Convert16 {
	Pixel16 pixel;
	unsigned short us;
};

int main() {
	//�� ���� ������ �����ϴ� ����
	unsigned short color = 0x1234;

	//unsigned short Ÿ���� ���� Pixel16����ü Ÿ���� ��ó�� �ٷ�� ���� ����ü ���.
	Convert16 convert;
	convert.us = color; //convert.us�� ���� ������ ����.

	//��� ���
	cout << "color = " << bitset<16>(color) << "(" << color << ")\n";
	cout << "blue = " << bitset<16>(convert.pixel.blue) << "(" << 
		convert.pixel.blue << ")\n";

	cout << sizeof(struct Pixel16);

	return 0;
}