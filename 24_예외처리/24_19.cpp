#include <memory> //auto_ptr
using namespace std;

int main() {
	//스마트 포인터 생성
	//int타입을 가리킬 수 있는 스마트 포인터 p를 정의
	//int 타입의 값을 하나 할당해서 생성자에 인자로 넘겨준다.
	auto_ptr<int> p(new int);

	//스마트 포인터의 사용
	//스마트 포인터 객체가 마치 진짜 포인터인 것처럼 사용할 수 있다.
	*p = 100;

	//메모리를 따로 해제해줄 필요가 없다.

	return 0;
}