#include <iostream>
using namespace std;

void PrintMessage(); //PrintMessage()�� �Ʒ��ʿ� �ִٴ� ���� ��ǻ�Ϳ��� �˷��ش�.�����ݷ�.

int main() {
	//PrintMessage()�Լ��� ȣ��
	PrintMessage(); //�Լ��� ȣ���Ѵٴ� ���� �����Ѵٴ� ���̴�.
	return 0;
}

void PrintMessage() { //�Լ� ����
	cout << "Hi, I'm your first function!!!\n";
}
