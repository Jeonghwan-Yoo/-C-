#include <iostream>
using namespace std;

int main() {
	//ILoveYou��� ���� ������ �̵��Ѵ�.
	goto ILoveYou; //ILoveYou��� ���̺��� �ִ� ������ ������ �帧�� �̵�.

	//�̰��� �پ�Ѵ��� ����
	cout << "�� ���ڿ��� ��µǸ� �ȵ˴ϴ�.\n";

ILoveYou: //ILoveYou��� ���̺��� ��ġ��Ų��.
	cout << "����� ILoveYou �����Դϴ�.\n";

	return 0;
}