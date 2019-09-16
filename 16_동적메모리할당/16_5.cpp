#include <iostream>
using namespace std;

//���ڿ��� ����� �������ִ� �Լ�
char* ReverseString(const char* src, int len) {
	//���ο� ���ڿ��� ������ �޸𸮸� �Ҵ��Ѵ�.
	//�Ϲ������� ���ڿ��� ���̴� NULL�� ������ ���̿���.
	char* reverse = new char[len + 1];

	//���ڿ��� �������� �����Ѵ�.
	for (int i = 0; i < len;++i)
		reverse[i] = src[len - i - 1];

	//�� ���ڿ��� ���� NULL�� �־��ش�.
	//NULL���ڱ��� ������ ���� ����.
	reverse[len] = NULL;

	//�� ���ڿ��� ��ȯ�Ѵ�.
	//�Լ��� ������ �� ���ڿ��� �Ҹ����� �ʴ´�.
	return reverse;
}

int main() {
	//���ڿ��� �ϳ� �����.
	char original[] = "NEMODORI";

	//�Լ��� ȣ���Ѵ�.
	//��ȯ�ϴ� �� ���ڿ��� �ּҵ� copy�� ����.
	char* copy = ReverseString(original, 8);

	//�� ���ڿ��� ����Ѵ�.
	cout << original << "\n";
	cout << copy << "\n";

	//�� ���ڿ��� �޸𸮸� �����ϰ� NULL�� �ʱ�ȭ.
	//copy�� reverse�� �ּҰ��� ���� ������ ���� �ʱ�ȭ �ȴ�.
	delete[] copy;
	copy = NULL;

	return 0;
}