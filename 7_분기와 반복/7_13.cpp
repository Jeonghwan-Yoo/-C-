#include <iostream>
using namespace std;

int main() {
	//���� ����
	int score = 2;

	//������ ���� ������ �޽����� ���
	//��� case�� break�� ������ �Ѵ�. break�� �߰�ȣ ������ �帧�� �̵��ϴ� ����.
	switch (score) {
	case 0:
		cout << "�з� ���̱���~\n";
		break;
	case 1:
		cout << "���� �� ����ϼ���~\n";
		break;
	case 2:
		cout << "��Ÿ���׿�~\n";
		break;
	case 3:
		cout << "���־��~\n";
		break;
	}
	return 0;
}