#include <iostream>
using namespace std;

//공용체 정의
union MyUnion {
	int i;
	void* p;
};

int main() {
	//공용체 변수 정의
	MyUnion uni;

	//uni.i와 uni.p의 주소를 확인하자.
	//공용체 변수의 멤버들이 같은 메모리 공간을 공유하는 것을 확인한다.
	cout << "&uni.i = " << &uni.i << "\n";
	cout << "&uni.p = " << &uni.p << "\n";

	//uni.i에 값을 넣고 결과를 출력한다.
	//uni.i에 값을 대입하는 것이 uni.p에도 영향을 주는지 확인한다.
	uni.i = 0x12345678;
	cout << hex;
	cout << "uni.i = " << uni.i << "\n";
	cout << "uni.p = " << uni.p << "\n";

	//uni.p에 값을 넣고 결과를 출력한다.
	//uni.p에 값을 대입하는 것이 uni.i에도 영향을 미치는지 확인한다.
	uni.p = (void*)0x87654321; //임의 상수를 주소값처럼 형변환하면 안되지만 실험.
	cout << "uni.i = " << uni.i << "\n";
	cout << "uni.p = " << uni.p << "\n";

	return 0;
}