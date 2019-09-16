#include <iostream>
using namespace std;

//Point클래스를 정의한다.
class Point {
public:
	//멤버 함수
	void Print();

	//생성자들
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);

	//접근자.
	//입력한 값이 지정된 범위를 벗어난 경우 올바른 값으로 변경해 대입.
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
	int GetX() {
		return x;
	}
	int GetY() {
		return y;
	}
private:
	//멤버 변수
	int x, y;
};

Point::Point(const Point& pt) {
	x = pt.x;
	y = pt.y;
}

Point::Point(int initialX, int initialY) {
	x = initialX;
	y = initialY;
}

Point::Point() {
	x = 0;
	y = 0;
}

void Point::Print() {
	cout << "(" << x << ", " << y << ")\n";
}

int main() {
	//객체를 생성한다.
	Point pt;

	//범위 밖의 값을 넣어본다.
	pt.SetX(-50);
	pt.SetY(200);

	//pt의 내용을 출력한다.
	pt.Print();

	return 0;
}