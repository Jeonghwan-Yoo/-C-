#include <iostream>
using namespace std;

int main() {
	//������ �����Ѵ�.
	char c = 'B';
	int i = 19;
	float f = 4.5f;

	//�ּҸ� ����Ѵ�.
	//���� �̸��� &(Ampersand)�� ���̸� �ּҸ� ��ȯ�Ѵ�.
	//cout��ü�� charŸ�� ������ �ּҸ� Ư���ϰ� ����ϱ� ������ intŸ������ ����ȯ.
	cout << "c�� �ּ� = " << (int*)&c << "\n";
	cout << "i�� �ּ� = " << &i << "\n";
	cout << "f�� �ּ� = " << &f << "\n";

	return 0;
}