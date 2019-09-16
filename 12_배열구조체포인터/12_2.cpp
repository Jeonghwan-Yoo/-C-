#include <iostream>
using namespace std;

int main() {
	//int 타입의 포인터에 대한 실험
	int iArray[10];
	int* pi = &iArray[3];

	cout << "pi = " << pi << "\n";
	cout << "pi + 1 = " << pi + 1 << "\n";
	cout << "pi + 2 = " << pi + 2 << "\n";
	cout << "pi - 1 = " << pi - 1 << "\n";

	//short 타입의 포인터에 대한 실험
	short sArray[10];
	short* ps = &sArray[3];

	cout << "ps = " << ps << "\n";
	cout << "ps + 1 = " << ps + 1 << "\n";
	cout << "ps + 2 = " << ps + 2 << "\n";
	cout << "ps - 1 = " << ps - 1 << "\n";

	return 0;
}