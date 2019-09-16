#include <bitset>
#include <iostream>
using namespace std;

int main() {
	//�� ���� ������ �����ϴ� ����
	unsigned short color = 0x1234;

	//�Ķ����� ������ ������ ��Ʈ�� �����.
	//�Ķ����� 0x001f
	unsigned short blue;
	blue = color & 0x001f;

	//��� ���
	cout << "color = " << bitset<16>(color) << "(" << color << ")\n";
	cout << "blue = " << bitset<16>(blue) << "(" << blue << ")\n";

	return 0;
}