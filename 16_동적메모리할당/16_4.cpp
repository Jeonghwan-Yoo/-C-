#include <iostream>
using namespace std;

int main() {
	//�޸𸮸� �Ҵ��Ѵ�.
	short* p = new short[100];

	//p�� ������ �ּ� ���� Ȯ���Ѵ�.
	cout << "p = " << p << "\n";

	//�޸𸮸� �����Ѵ�.
	delete[] p; //�� �̻� p�� ����Ű�� �޸𸮸� ����� �� ����.
	p = NULL;

	//p�� ������ �ּ� ���� Ȯ���Ѵ�.
	cout << "p = " << p << "\n";

	//�޸𸮸� �����Ѵ�.
	delete[] p;
	p = NULL;

	return 0;
}