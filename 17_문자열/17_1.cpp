#include <iostream>
#include <cstring> //���ڿ� ���� �Լ��� ����ϱ� ���� �غ�.
using namespace std;

int main() {
	//���� ���ڿ��� �ϳ� ����� ����.
	char src[] = "Hanbit-Media"; //������� �ٸ������κ��� �Ѱܹ��� ���ڿ�.

	//1. ���� ���ڿ��� ���̸� ���.
	int len = strlen(src); //�� ���ڿ��� ���� �޸𸮸� �Ҵ��ϱ� ���� ���̸� ���.

	//2. �� ���ڿ��� ��� �޸𸮸� �Ҵ��Ѵ�.
	char* dest = new char[len + 1]; //NULL���� ���ؼ� + 1

	//3. ���ڿ��� �����Ѵ�.
	strcpy(dest, src);

	//����� ����Ѵ�.
	cout << "src = " << src << "\n";
	cout << "dest = " << dest << "\n";

	//�޸𸮸� �����Ѵ�.
	delete[] dest;
	dest = NULL;

	return 0;
}