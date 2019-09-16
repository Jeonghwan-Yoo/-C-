#include "Point.h"

//void XX() 형태의 함수에 대한 포인터
typedef void(*FP1)(int); //멤버가 아닌 함수에 대한 포인터
//void Point::XX() 형태의 멤버 함수에 대한 포인터
typedef void(Point::*FP2)(int); //Point클래스의 멤버 함수에 대한 포인터

int main() {
	//객체를 생성한다.
	Point pt(50, 50);

	//FP1, FP2를 사용해서 SetX() 함수를 가리킨다.
	//FP1 fp1 = &Point::SetX; //오류
	FP2 fp2 = &Point::SetX; //SetX()함수의 주소를 fp2에 대입한다.

	//함수 포인터를 사용해서 함수 호출
	//pt객체를 이용해 fp2가 가리키는 함수를 호출한다.
	//SetX()가 호출된다.
	//연산자 우선 순위 때문에 괄호로 항상 감싸주어야 한다.
	(pt.*fp2)(100);

	//내용 출력
	pt.Print();

	return 0;
}