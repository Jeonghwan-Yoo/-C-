#include <iostream>
using namespace std;

int main() {
	//�޸𸮸� �Ҵ��Ѵ�.
	short* p = new short[100];

	//p�� ������ �ּ� ���� Ȯ���Ѵ�.
	cout << "p = " << p << "\n";
	
	//�޸𸮸� �����Ѵ�.
	delete[] p; //�� �̻� p�� ����Ű�� �޸𸮸� ����� �� ����.

	//p�� ������ �ּ� ���� Ȯ���Ѵ�.
	cout << "p = " << p << "\n";

	//�޸𸮸� �����Ѵ�.
	delete[] p;

	return 0;
}