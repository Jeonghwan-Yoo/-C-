#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	//string ��ü�� �����.
	string cppstyle = "Yes, I am.";

	//C ��Ÿ�� ���ڿ��� ���� ������ �غ��Ѵ�.
	char* cstyle = new char[cppstyle.size() + 1]; //NULL���� ��� ���ؼ�.

	//C ��Ÿ�� ���ڿ��� �� �����Ѵ�.
	//cppstyle ��ü���� ���ڿ��� �����͸� ���ͼ� strcpy()�Լ��� ȣ��.
	strcpy(cstyle, cppstyle.c_str());

	//cstyle�� ù��° ���ڸ� �ٲ㺻��.
	cstyle[0] = 'Z';

	//�� ���ڿ��� ����Ѵ�.
	cout << "cstyle = " << cstyle << "\n";
	cout << "cppstyle = " << cppstyle << "\n";

	//�޸𸮸� �����Ѵ�.
	delete[] cstyle;
	cstyle = NULL;

	return 0;
}