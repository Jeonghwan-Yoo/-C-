#include <iostream>
using namespace std;

//�Լ� ����
int Factorial(int n); //intŸ�����ڿ� intŸ�Թ�ȯ���� �Լ� ����.

int main() {
	//���丮���� ���ϰ� ����� �����Ѵ�.
	int result;
	result = Factorial(5); //5�� ���ڷ� �ѱ��.

	//����� ����Ѵ�.
	cout << "5!�� " << result << "�Դϴ�.\n";

	return 0;
}

int Factorial(int n) {
	//����� ������ ������ �غ��Ѵ�.
	int result = 1; //��� ���ؾ� �Ǳ� ������ �ʱⰪ�� 1��.

	//���丮���� ���Ѵ�.
	for (int i = 1; i <= n;++i) { //��� 1�� ���� �ʿ�� �����Ƿ� 2���Ͱ� ����. �ð�����.
		result *= i;
	}

	//����� ��ȯ�Ѵ�.
	return result;
}