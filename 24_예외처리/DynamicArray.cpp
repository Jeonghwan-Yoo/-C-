#include "DynamicArray.h"
#include "MyException.h"
//24_16 �����ڿ��� ���ܰ� �߻��� ���
#include <iostream>
using namespace std;

DynamicArray::DynamicArray(int arraySize) {
	//24_17 �����ڿ��� ���ܰ� �߻��� ����� �ذ�
	//������ ���� ��� �ڵ带 try������� ���Ѵ�.
	//�����ڿ��� �߻��ϴ� ��� ���ܸ� �ޱ� ���ؼ�.
	try {
		//�������� �޸𸮸� �Ҵ��Ѵ�.
		arr = new int[arraySize];

		//�迭�� ���� ����
		size = arraySize;

		//���⼭ ���Ƿ� ���ܸ� �߻���Ų��.
		throw MemoryException(this, 0);
	}
	catch (...) {
		//catch�� ����Ǵ� ���� Ȯ���ϱ� ����
		cout << "����� ����ȴ�!!\n";
		
		//�Ҹ��ڰ� ȣ����� �ʱ� ������ ���⼭ �����ؾ� �Ѵ�.
		delete[] arr;

		//���� ���ܸ� �ٽ� ������.
		throw;
	}

	/*
	//�������� �޸𸮸� �Ҵ��Ѵ�.
	arr = new int[arraySize];

	//�迭�� ���� ����
	size = arraySize;

	//24_16 �����ڿ��� ���ܰ� �߻��� ���
	//���⼭ ���Ƿ� ���ܸ� �߻���Ų��.
	throw MemoryException(this, 0);
	*/
}

DynamicArray::~DynamicArray() {
	//24_16 �����ڿ��� ���ܰ� �߻��� ���
	//�Ҹ��ڸ� �������� ������ Ȯ���Ѵ�.
	cout << "����� �Ҹ��ڴ�!!\n";
	
	//�޸𸮸� �����Ѵ�.
	delete[] arr;
	arr = 0;
}

//24_4 ������ ���� ó���� ���
//������ ���� �ٲ۴�.
void DynamicArray::SetAt(int index, int value) {
	//�ε����� ������ ���� ������ ���ܸ� ������
	if (index < 0 || index >= GetSize())
		//24_6 ������ ���
		throw OutOfRangeException(this, index); //��ü���� �ǹ̰� �ִ�.
		//24_5 ���� ��ü�� ���
		//throw MyException(this, "Out of Range!!!", index); //������ ���.
		//throw "Out of Range!!!";

	arr[index] = value;
}

/*
//24_2
//��ȯ ���� ������ �߻� ���θ� �˷��ִ� ������ �Ѵ�.
bool DynamicArray::SetAt(int index, int value) {
	//�ε����� Ȯ���Ѵ�.
	if (index < 0 || index >= GetSize())
		return false;

	arr[index] = value;

	return true;
}
*/

/*
//������ ���� �ٲ۴�
void DynamicArray::SetAt(int index, int value) {
	arr[index] = value;
}
*/

//24_4 ������ ����ó��
//������ ���� ��ȯ�Ѵ�.
int DynamicArray::GetAt(int index) const {
	//�ε����� ������ ���� ������ ���ܸ� ������
	if (index < 0 || index >= GetSize())
		//24_6 ������ ���
		throw OutOfRangeException(this, index);
		//24_5 ���� ��ü�� ���
		//throw MyException(this, "Out of Range!!!", index);
		//throw "Out of Range!!!";

	return arr[index];
}

/*
//������ ���� ��ȯ�Ѵ�.
int DynamicArray::GetAt(int index) const {
	return arr[index];
}
*/

//�迭�� ���̸� ��ȯ�Ѵ�.
int DynamicArray::GetSize() const {
	return size;
}