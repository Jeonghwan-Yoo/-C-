#include <iostream>
#include <string>
using namespace std;

int main() {
	//string ��ü�� �����.
	string cppstyle = "Yes, I am.";

	//C ��Ÿ�� ���ڿ��� ����ų �����͸� �غ��Ѵ�.
	//���ڿ��� ���� ���� ���� ������ ���� ���� ��.
	const char* cstyle = NULL;

	//C ��Ÿ�� ���ڿ��� ��´�.
	//c_str()�� C��Ÿ�� ���ڿ��� �ּҸ� ��ȯ. �� �ּҿ� ������ ���� cstyle�� ����.
	cstyle = cppstyle.c_str(); 

	//�� ���ڿ��� ����Ѵ�.
	cout << "cstyle = " << cstyle << "\n";
	cout << "cppstyle = " << cppstyle << "\n";

	return 0;
}