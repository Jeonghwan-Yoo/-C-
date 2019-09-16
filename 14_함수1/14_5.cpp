#include <iostream>
using namespace std;

//3을 반환하는 함수
int Three() {
	return 3;
}

int main() {
	//반환 값을 담을 변수
	int ret;
	
	//함수를 호출하고 반환 값을 보관한다.
	ret = Three();

	//결과 출력
	cout << "ret = " << ret << "\n";

	return 0;
}