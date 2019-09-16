#include <iostream>
using namespace std;

//Point클래스를 정의한다.
class Point {
public:
	//멤버 변수
	int x, y;

	//멤버 함수
	void Print();

	//생성자들
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt); //복사 생성자의 원형을 적어주었다.
};

Point::Point(const Point& pt) { //자신과 동일한 타입의 객체에 대한 레퍼런스를 인자로 받는다.
	cout << "복사 생성자 호출됨!!\n";
	x = pt.x; //그리고 이 객체의 각 멤버 변수의 값을 복사하게 코드를 작성하는 것이 일반적.
	y = pt.y;
}

Point::Point(int initialX, int initialY) {
	x = initialX;
	y = initialY;
}

Point::Point() { //생성자를 정의하고 있다. 초기화해주는 일.
	x = 0;
	y = 0;
}

void Point::Print() {
	cout << "(" << x << ", " << y << ")\n";
}

int main() {
	//객체를 생성한다.
	Point pt1(100, 100), pt2(200, 200);

	//pt1을 사용해서 새로운 pt3을 초기화한다.
	Point pt3 = pt1; //다른 객체를 사용해서 초기화하는 경우에 복사 생성자가 호출

	//pt3의 내용을 출력한다.
	pt3.Print();

	//pt2을 pt3에 대입한다.
	pt3 = pt2; //다른 객체를 대입하는 경우에는 복사 생성자가 호출되지 않는다.

	//pt3의 내용을 출력한다.
	pt3.Print();

	return 0;
}