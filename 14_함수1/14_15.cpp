#include <iostream>
using namespace std;

//이차원 배열을 인자로 받는 함수의 원형
void Using2DArray(int arr[][3]); //가장 앞쪽의 대괄호만 비워두면 된다.

int main() {
	//이차원 배열을 정의하고 초기화한다.
	int array[5][3] = { {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15} };

	//배열을 넘겨준다.
	Using2DArray(array); //배열의 이름만 적어주면 된다.

	return 0;
}

void Using2DArray(int arr[][3]) {
	//모든 원소를 출력한다.
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 3;j++) {
			cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << "\n";
		}
	}
}