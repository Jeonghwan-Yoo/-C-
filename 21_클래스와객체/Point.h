//�ߺ��Ǵ� ���� ����
#ifndef POINT_H
#define POINT_H

//Point Ŭ������ �����Ѵ�.
class Point {
public:
	//21_32 typedef
	typedef int COOR_T; //��ǥ�� Ÿ��. int -> COOR_T

	//21_42 ����ü���
	enum {
		MIN_X = 0, MAX_X = 100, MIN_Y = 0, MAX_Y = 100
	};

	//��� �Լ�
	//21_34 const
	void Print() const;
	//21_36 �����ε�
	void Offset(COOR_T x_delta, COOR_T y_delta);
	void Offset(const Point& pt);

	//�����ڵ�
	Point();
	Point(COOR_T initialX, COOR_T initialY);
	Point(const Point& pt);

	/*
	//������
	void SetX(int value) {
		if (value < 0)
			x = 0;
		else if (value > 100)
			x = 100;
		else
			x = value;
	}
	void SetY(int value) {
		if (value < 0)
			y = 0;
		else if (value > 100)
			y = 100;
		else
			y = value;
	}
	*/
	
	//21_31 �ܺο��� �ζ��� �Լ� �����
	//������
	//21_34 const. GetY()�� �������� �������� const����
	void SetX(COOR_T value);
	void SetY(COOR_T value);
	COOR_T GetX() const {
		return x;
	}
	COOR_T GetY() const {
		return y;
	}
private:
	//��� ����
	COOR_T x, y;
};

//21_42 ����ü���
//��� ��ſ� �ɺ��� ���.
inline void Point::SetX(COOR_T value) {
	if (value < MIN_X)
		x = MIN_X;
	else if (value > MAX_X)
		x = MAX_X;
	else
		x = value;
}
inline void Point::SetY(COOR_T value) {
	if (value < MIN_Y)
		y = MIN_Y;
	else if (value > MAX_Y)
		y = MAX_Y;
	else
		y = value;
}

/*

//21_32 �ζ��� �Լ��� ���� ���Ͽ� ���� ���

//21_31
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

#endif