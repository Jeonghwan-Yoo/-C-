#include <iostream>
#include <string>
using namespace std;

int main() {
	//���ڿ��� �غ��Ѵ�.
	char cs[20]; //C��Ÿ��
	string cpps; //C++��Ÿ��

	//���ڿ��� �Է� �޴´�.
	cin.getline(cs, 20); //C��Ÿ���� ����
	getline(cin, cpps); //C++��Ÿ���� ���� ���� �ٸ���.

	//���ڿ��� ����Ѵ�.
	cout << "cs = " << cs << "\n";
	cout << "cpps = " << cpps << "\n";

	return 0;
}