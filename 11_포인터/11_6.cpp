#include <iostream>
using namespace std;

int main() {
	//int Ÿ���� ���� ����
	int i = 0x12345678; //12, 34, 56, 78

	//char* Ÿ���� �����ͷ� i�� ����Ų��.
	char* pc = (char*)&i; //������ ���� ����ȯ

	//pc�� ����Ű�� ���� ���Ѵ�.
	cout << hex; //������ 16������ ����ϰ� �����.
	cout << "*pc = " << (int)*pc << "\n"; //���ڰ� �ƴ� ���ڷ� ����ϰ� �������.
	
	return 0;
}