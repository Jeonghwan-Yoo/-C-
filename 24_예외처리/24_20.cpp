#include <new> //bad_allocŬ������ ���
#include <iostream>
using namespace std;

int main() {
	try {
		//���� ���� �޸𸮸� �Ҵ��Ѵ�.
		char* p = new char[0xfffffff0];
	}
	catch (bad_alloc& ex) {
		//bad_alloc���� ���ܿ� ���� ���� ���ڿ��� ��ȯ�ϴ� what() ����Լ��� �ִ�.
		cout << ex.what() << "\n"; 
	}
	
	return 0;
}