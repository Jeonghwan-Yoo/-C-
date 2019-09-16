#include "Point.h"
#include <iostream> //cout
using namespace std;

//21_36 �����ε�
//���� ��ġ�� �̵���Ų��.
void Point::Offset(COOR_T x_delta, COOR_T y_delta) {
	SetX(x + x_delta);
	SetY(y + y_delta);
}
//���� �Լ��� ȣ���Ͽ� ������ ���������� �ߺ������� ����.
void Point::Offset(const Point& pt) {
	Offset(pt.x, pt.y);
}

/*
//21_32 �ζ��� ��� �Լ��� ���� ���Ͽ� ���� ���
inline void Point::SetX(int value) { //�ζ����Լ�
	if (value < 0)
		x = 0;
	else if (value > 100)
		x = 100;
	else
		x = value;
}
inline void Point::SetY(int value) { //�ζ����Լ�
	if (value < 0)
		y = 0;
	else if (value > 100)
		y = 100;
	else
		y = value;
}
*/

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

//21_34 const
void Point::Print() const {
	cout << "(" << x << ", " << y << ")\n";
}