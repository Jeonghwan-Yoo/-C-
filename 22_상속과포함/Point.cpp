#include "Point.h"
#include <iostream> //cout
using namespace std;

//점위 위치를 이동시킨다.
void Point::Offset(COOR_T x_delta, COOR_T y_delta) {
	SetX(x + x_delta);
	SetY(y + y_delta);
}
//위의 함수를 호출하여 구현도 간단해지고 중복문제도 피함.
void Point::Offset(const Point& pt) {
	Offset(pt.x, pt.y);
}

Point::Point(const Point& pt) {
	x = pt.x;
	y = pt.y;
}

Point::Point(COOR_T initialX, COOR_T initialY) {
	SetX(initialX);
	SetY(initialY);
}

Point::Point() {
	x = 0;
	y = 0;
}

void Point::Print() const {
	cout << "(" << x << ", " << y << ")\n";
}