#include <iostream>
using namespace std;

//����ü ����
union MyUnion {
	int i;
	void* p;
};

int main() {
	//����ü ���� ����
	MyUnion uni;

	//uni.i�� uni.p�� �ּҸ� Ȯ������.
	//����ü ������ ������� ���� �޸� ������ �����ϴ� ���� Ȯ���Ѵ�.
	cout << "&uni.i = " << &uni.i << "\n";
	cout << "&uni.p = " << &uni.p << "\n";

	//uni.i�� ���� �ְ� ����� ����Ѵ�.
	//uni.i�� ���� �����ϴ� ���� uni.p���� ������ �ִ��� Ȯ���Ѵ�.
	uni.i = 0x12345678;
	cout << hex;
	cout << "uni.i = " << uni.i << "\n";
	cout << "uni.p = " << uni.p << "\n";

	//uni.p�� ���� �ְ� ����� ����Ѵ�.
	//uni.p�� ���� �����ϴ� ���� uni.i���� ������ ��ġ���� Ȯ���Ѵ�.
	uni.p = (void*)0x87654321; //���� ����� �ּҰ�ó�� ����ȯ�ϸ� �ȵ����� ����.
	cout << "uni.i = " << uni.i << "\n";
	cout << "uni.p = " << uni.p << "\n";

	return 0;
}