#include <iostream>
using namespace std;

int main() {
	//���� ����
	int score = 5;

	//������ ���� ������ �޽����� ���
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
	default: //������ case�� �ش����� �ʴ� �����
		cout << "�ùٸ��� ���� �����Դϴ�!!\n";
	}
	return 0;
}