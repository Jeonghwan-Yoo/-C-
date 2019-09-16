#include <iostream>
using namespace std;

//인라인 함수
inline void Func() {
	cout << "왜 인라인 함수를 쓰지?\n";
	cout << "도대체 인라인 뭐야!!\n";
	cout << "뭐! 내가 인라인이야?\n";
}
int main() {
	//인라인 함수를 호출한다.
	Func();

	return 0;
}