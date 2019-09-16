#include <iostream>
using namespace std;

class DynamicArray {
public:
	//��� ����
	int* arr; 

	//�����ڿ� �Ҹ���.
	//�����ڿ��� �������� �Ҵ��� �޸��� �ּҸ� arr�� �����Ѵ�.
	DynamicArray(int arraySize);
	~DynamicArray();
};

DynamicArray::DynamicArray(int arraySize) { //������. ���� ũ�� ��ŭ �޸𸮸� �Ҵ�.
	//�������� �޸𸮸� �Ҵ��Ѵ�.
	arr = new int[arraySize];
}

DynamicArray::~DynamicArray() { //�Ҹ���. �޸� ����.
	//�޸𸮸� �����Ѵ�.
	delete[] arr;
	arr = NULL;
}

int main() {
	//�� ���� ������ �Է����� �����.
	int size;
	cout << "�� ���� ������ �Է��Ͻðڼ�?";
	cin >> size;

	//�ʿ��� ��ŭ�� �޸𸮸� �غ��Ѵ�.
	//������ ���� ��ŭ ����� �޸𸮸� �Ҵ��Ѵ�.
	DynamicArray da(size);

	int i;

	//������ �Է� �޴´�.
	for (i = 0;i < size;i++)
		cin >> da.arr[i];
	
	//�������� ������ ����Ѵ�.
	for (i = size - 1;i >= 0;--i)
		cout << da.arr[i] << " ";

	cout << "\n";

	//���� �޸𸮸� �������� �ʿ䰡 ����.

	return 0;
}