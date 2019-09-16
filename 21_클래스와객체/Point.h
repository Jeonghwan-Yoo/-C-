//중복되는 것을 방지
#ifndef POINT_H
#define POINT_H

//Point 클래스를 정의한다.
class Point {
public:
	//21_32 typedef
	typedef int COOR_T; //좌표의 타입. int -> COOR_T

	//21_42 열거체사용
	enum {
		MIN_X = 0, MAX_X = 100, MIN_Y = 0, MAX_Y = 100
	};

	//멤버 함수
	//21_34 const
	void Print() const;
	//21_36 오버로드
	void Offset(COOR_T x_delta, COOR_T y_delta);
	void Offset(const Point& pt);

	//생성자들
	Point();
	Point(COOR_T initialX, COOR_T initialY);
	Point(const Point& pt);

	/*
	//접근자
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
	
	//21_31 외부에서 인라인 함수 만들기
	//접근자
	//21_34 const. GetY()는 문제점을 보기위해 const없음
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

//21_42 열거체사용
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

/*

//21_32 인라인 함수를 구현 파일에 넣은 경우

//21_31
inline void Point::SetX(int value) { //인라인함수
	if (value < 0)
		x = 0;
	else if (value > 100)
		x = 100;
	else
		x = value;
}
inline void Point::SetY(int value) { //인라인함수
	if (value < 0)
		y = 0;
	else if (value > 100)
		y = 100;
	else
		y = value;
}
*/

#endif