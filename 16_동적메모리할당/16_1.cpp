#include <iostream>
using namespace std;

int main() {
	//몇 개의 정수를 입력할지 물어본다.
	int size;
	cout << "몇 개의 정수를 입력하시겠소? ";
	cin >> size;

	//필요한 만큼의 메모리를 할당한다.
	int* arr = new int[size]; //10개면 int로 40바이트를 할당. 공간을 가리키기 위해 포인터.

	//정수를 입력 받는다.
	cout << "정수를 입력하시오.\n";
	for (int i = 0;i < size;++i)
		cin >> arr[i]; //*(arr + i)

	//평균을 계산하고 출력한다.
	int sum = 0;
	for (int i = 0;i < size;++i)
		sum += arr[i];

	float ave = (float)sum / (float)size;
	cout << "합 = " << sum << ", 평균 = " << ave << "\n";

	//사용한 메모리를 해제한다. 결자해지로 반드시 해제.
	delete[] arr;

	return 0;
}