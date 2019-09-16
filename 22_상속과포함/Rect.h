#ifndef RECT_H
#define RECT_H

#include "Point.h"

class Rect {
public:
	//생성자
	Rect();
	//22_2 Point 객체의 생성자 지정하기
	//인자를 가진 생성자가 추가. 멤버 변수인 Point객체의 생성자에 넘기는법을 보여줌.
	Rect(const Point& topLeft, const Point& bottomRight);
	Rect(int left, int top, int right, int bottom);

	//각 점의 값 지정/얻기
	//접근자
	void SetTopLeft(const Point& topLeft);
	void SetBottomRight(const Point& bottomRight);
	void SetRect(int left, int top, int right, int bottom);
	Point GetTopLeft() const;
	Point GetBottomRight() const;
	void GetRect(int& left, int& top, int& right, int& bottom);

	//넓이, 높이 계산
	int GetWidth() const;
	int GetHeight() const;

	//내용 출력
	void Print() const;

protected:
	//2개의 Point객체를 멤버 변수로 가지고 있다.
	Point _topLeft;
	Point _bottomRight;
};

#endif