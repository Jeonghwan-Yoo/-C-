#include <iostream>
using namespace std;

int main() {
	int i = 1; //1���� 10���� ������ ����
	int sum = 0; //��ü ���� ������ ����

	//������ �ݺ��ȴ�.
	while (true) {
		//��������� �տ� i�� ���Ѵ�.
		sum += i;

		//i�� 1�� ���Ѵ�.
		++i;

		//i�� ���� �˻��Ѵ�.
		if (i > 10) //i�� ���� 10���� ū ��� while�� ���.
			break;
	}

	//��� ���
	cout << "���� i�� �� = " << i << "\n";
	cout << "1~10 ������ �� = " << sum << "\n";

	return 0;
}