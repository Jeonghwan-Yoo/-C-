#include "DynamicArray.h"
#include "MyException.h"
#include <iostream>
using namespace std;

void A();

int main() {
	try {
		//DynamicArray�� �����ڿ��� ���ܰ� �߻��ϰ� �س��� ����.
		DynamicArray arr(100);
	}
	catch (MyException& ex) {
		cout << "���� ���� : " << ex.description << "\n";
	}
	return 0;
}