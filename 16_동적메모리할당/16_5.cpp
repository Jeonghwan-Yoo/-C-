#include <iostream>
using namespace std;

//문자열을 뒤집어서 복사해주는 함수
char* ReverseString(const char* src, int len) {
	//새로운 문자열을 보관할 메모리를 할당한다.
	//일반적으로 문자열의 길이는 NULL을 제외한 길이여서.
	char* reverse = new char[len + 1];

	//문자열을 역순으로 복사한다.
	for (int i = 0; i < len;++i)
		reverse[i] = src[len - i - 1];

	//새 문자열의 끝에 NULL을 넣어준다.
	//NULL문자까지 뒤집을 수는 없다.
	reverse[len] = NULL;

	//새 문자열을 반환한다.
	//함수가 끝나도 이 문자열은 소멸하지 않는다.
	return reverse;
}

int main() {
	//문자열을 하나 만든다.
	char original[] = "NEMODORI";

	//함수를 호출한다.
	//반환하는 새 문자열의 주소도 copy에 보관.
	char* copy = ReverseString(original, 8);

	//두 문자열을 출력한다.
	cout << original << "\n";
	cout << copy << "\n";

	//새 문자열의 메모리를 해제하고 NULL로 초기화.
	//copy와 reverse의 주소값이 같기 때문에 같이 초기화 된다.
	delete[] copy;
	copy = NULL;

	return 0;
}