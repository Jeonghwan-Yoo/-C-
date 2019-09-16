#include "Point.h"

#include<iostream>
using namespace std;

//Point 객체를 읽기 용으로만 사용하는 함수
void Area(const Point& pt);

int main() {

	//객체를 생성한다.
	Point pt(50, 50);

	//Area()함수를 호출한다.
	Area(pt);

	return 0;
}

//Point객체의 내용을 읽기만 하므로 const Point&타입.
void Area(const Point& pt) {
	//(0,0)과 pt가 이루는 사각형의 면적을 구한다.
	//pt가 const객체기 때문에 const함수가 아닌 GetY()를 호출할 수 없다. 오류.
	int area = pt.GetX() * pt.GetY(); //오류
	//결과 출력
	cout << "(0,0)과 이 점이 이루는 사각형의 면적 = " << area << "\n";
}