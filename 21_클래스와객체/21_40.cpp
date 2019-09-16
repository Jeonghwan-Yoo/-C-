#include "Point.h"
#include <iostream>

int main() {
	//객체를 생성한다.
	Point pt(100, 100); //pt의 생성자가 호출된다.

	//객체에 대한 포인터를 정의한다.
	Point* p = NULL;

	//객체를 동적으로 생성한다.
	p = new Point(50, 50); //동적으로 생성한 객체의 생성자가 호출된다.

	//객체의 내용을 출력한다.
	pt.Print();
	p->Print();

	//동적으로 생성한 객체를 해제한다.
	delete p; //동적으로 생성한 객체의 소멸자가 호출된다.
	p = NULL;

	return 0;
} //함수가 끝나면서 pt의 소멸자가 호출된다.