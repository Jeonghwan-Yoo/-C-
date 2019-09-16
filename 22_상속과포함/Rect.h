#ifndef RECT_H
#define RECT_H

#include "Point.h"

class Rect {
public:
	//������
	Rect();
	//22_2 Point ��ü�� ������ �����ϱ�
	//���ڸ� ���� �����ڰ� �߰�. ��� ������ Point��ü�� �����ڿ� �ѱ�¹��� ������.
	Rect(const Point& topLeft, const Point& bottomRight);
	Rect(int left, int top, int right, int bottom);

	//�� ���� �� ����/���
	//������
	void SetTopLeft(const Point& topLeft);
	void SetBottomRight(const Point& bottomRight);
	void SetRect(int left, int top, int right, int bottom);
	Point GetTopLeft() const;
	Point GetBottomRight() const;
	void GetRect(int& left, int& top, int& right, int& bottom);

	//����, ���� ���
	int GetWidth() const;
	int GetHeight() const;

	//���� ���
	void Print() const;

protected:
	//2���� Point��ü�� ��� ������ ������ �ִ�.
	Point _topLeft;
	Point _bottomRight;
};

#endif