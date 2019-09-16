#include <iostream>
using namespace std;

int x = 100;

int main() {
	cout << "1. x = " << x << "\n"; //전역 변수 100

	int x = 200;

	cout << "2. x = " << x << "\n"; //최근 값 200

	{
		cout << "3. x = " << x << "\n"; //최근 값 200

		int x = 300;

		cout << "4. x = " << x << "\n"; //최근 값 300
	}

	cout << "5. x = " << x << "\n"; //블록안에서 최근 값 200

	return 0;
}