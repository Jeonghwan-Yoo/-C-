#include "DynamicArray.h"
#include "MyException.h"
#include <iostream>
using namespace std;

void UseArray(DynamicArray& arr1, DynamicArray& arr2);

int main() {
	//�迭 ��ü�� 2�� �����.
	DynamicArray arr1(10);
	DynamicArray arr2(8);

	UseArray(arr1, arr2);

	return 0;
}

void UseArray(DynamicArray& arr1, DynamicArray& arr2) {
	try {
		arr1.SetAt(5, 100);
		arr2.SetAt(5, 100);

		arr1.SetAt(8, 100);
		arr2.SetAt(8, 100);

		arr1.SetAt(10, 100);
		arr2.SetAt(10, 100);
	}
	catch (MyException& ex) { //���۷��� Ÿ������ �޴� ���� ����.
		//�� �迭�� �ּҸ� ���� ����Ѵ�.
		cout << "&arr1 = " << &arr1 << "\n&arr2 = " << &arr2 << "\n";
		
		//���ܿ� ���� �ڼ��� ������ ����Ѵ�.
		cout << "���ܸ� ���� ��ü�� �ּҴ� = " << ex.sender << "\n";
		cout << "���ܿ� ���� ���� = " << ex.description << "\n";
		cout << "�ΰ� ���� = " << ex.info << "\n";
	}
}