#include <iostream>
using namespace std;

int main() {
	//동일한 값을 가진 변수를 선언한다.
	int i = 10;
	float f = 10.0f;

	//두 변수를 동일한 수로 나눈다.
	float i_div_4, f_div_4;
	i_div_4 = i / 4; //피연산자가 둘다 int
	f_div_4 = f / 4; //피연산자가 int 와 float

	//결과 출력
	//형변환은 오직 피연산자의 타입에만 영향을 받고,
	//결과를 받는 변수의 타입은 아무런 영향을 받지 않는다.
	cout << "i = " << i << "\n";
	cout << "f = " << f << "\n";
	cout << "i/4 = " << i_div_4 << "\n";
	cout << "f/4 = " << f_div_4 << "\n";

	return 0;
}