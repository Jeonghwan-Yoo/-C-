#include "complex.h"

int main() {
	Complex c1(10, 5);

	int i;
	//Complex��ü�� intŸ������ �Ͻ������� ����ȯ�� �� �ִ�.
	i = c1; //i = 10
	i = c1.operator int(); //���� ����

}