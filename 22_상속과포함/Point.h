//중복되는 것을 방지
#ifndef POINT_H
#define POINT_H

//Point 클래스를 정의한다.
class Point {
public:

	typedef int COOR_T; //좌표의 타입. int -> COOR_T

	enum {
		MIN_X = 0, MAX_X = 100, MIN_Y = 0, MAX_Y = 100
	};

	//멤버 함수
	void Print() const;
	void Offset(COOR_T x_delta, COOR_T y_delta);
	void Offset(const Point& pt);

	//생성자들
	Point();
	Point(COOR_T initialX, COOR_T initialY);
	Point(const Point& pt);

	//접근자
	void SetX(COOR_T value);
	void SetY(COOR_T value);
	COOR_T GetX() const {
		return x;
	}
	COOR_T GetY() const {
		return y;
	}
private:
	//멤버 변수
	COOR_T x, y;
};

//상수 대신에 심볼을 사용.
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

#endif