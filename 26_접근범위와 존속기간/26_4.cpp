#include <iostream>
using namespace std;

int x = 100;

int main() {
	cout << "1. x = " << x << "\n"; //���� ���� 100

	int x = 200;

	cout << "2. x = " << x << "\n"; //�ֱ� �� 200

	{
		cout << "3. x = " << x << "\n"; //�ֱ� �� 200

		int x = 300;

		cout << "4. x = " << x << "\n"; //�ֱ� �� 300
	}

	cout << "5. x = " << x << "\n"; //��Ͼȿ��� �ֱ� �� 200

	return 0;
}