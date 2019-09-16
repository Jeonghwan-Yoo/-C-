#include <iostream>
using namespace std;

//배열을 인자로 갖는 함수의 원형
void UsingArray(char arr[]);

int main() {
	//배열을 만들고 초기화한다.
	char array[20] = "Hello, World!"; //문자열을 사용해 초기화.

	//함수에 배열을 넘겨준다.
	UsingArray(array);

	//함수 호출 후의 배열 상태를 출력한다.
	cout << "In main() : " << array << "\n";

	return 0;
}

void UsingArray(char arr[]) { //[]는 *와 같다고 생각할 수 있다.
	//넘겨 받은 배열을 출력한다.
	cout << "In UsingArray() : " << arr << "\n";

	//배열의 원소 하나를 수정해본다.
	arr[12] = '?';
}