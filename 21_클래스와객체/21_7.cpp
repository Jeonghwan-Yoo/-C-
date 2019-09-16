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
	Point(int initialX, int initialY); //두 개의 인자를 가진 생성자를 추가.
};

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
	Point pt(3, 5); //인자가 있는 생성자를 호출하기 위해선 객체를 생성할 때 인자를 넣어줌.

	//pt1, pt2의 내용을 출력한다.
	pt.Print();

	return 0;
}