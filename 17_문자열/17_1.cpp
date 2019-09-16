#include <iostream>
#include <cstring> //문자열 관련 함수를 사용하기 위한 준비.
using namespace std;

int main() {
	//원본 문자열을 하나 만들어 본다.
	char src[] = "Hanbit-Media"; //실제라면 다른곳으로부터 넘겨받은 문자열.

	//1. 원본 문자열의 길이를 잰다.
	int len = strlen(src); //새 문자열을 담을 메모리를 할당하기 위해 길이를 잰다.

	//2. 새 문자열이 담길 메모리를 할당한다.
	char* dest = new char[len + 1]; //NULL값을 위해서 + 1

	//3. 문자열을 복사한다.
	strcpy(dest, src);

	//결과를 출력한다.
	cout << "src = " << src << "\n";
	cout << "dest = " << dest << "\n";

	//메모리를 해제한다.
	delete[] dest;
	dest = NULL;

	return 0;
}