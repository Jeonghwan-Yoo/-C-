#include "Rect.h"
#include <iostream>
using namespace std;

int main() {
	//다양한 생성자를 사용해서 Rect객체 생성
	Rect rc1;
	//Rect(const Point& topLeft, const Point& bottomRight)이용해 객체 생성.
	//임시 Point객체를 만들어서 넘겨주고 있다. Point객체를 새로 정의할 필요없이.
	Rect rc2(Point(10, 20), Point(30, 40));
	Rect rc3(50, 60, 70, 80);

	//내용 출력
	rc1.Print();
	rc2.Print();
	rc3.Print();

	return 0;
}