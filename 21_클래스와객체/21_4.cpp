#include <iostream>
using namespace std;

//Point클래스를 정의한다.
class Point {
public:
	//멤버 변수
	int x, y;

	//멤버 함수
	void Print();
};

void Point::Print() {
	int x = 333; //x라는 이름의 변수를 정의했다.
	cout << "(" << x << ", " << y << ")\n";
}

int main() {
	//객체를 생성한다.
	Point pt1, pt2;

	//pt1, pt2를 초기화 한다.
	pt1.x = 100;
	pt1.y = 100;
	pt2.x = 200;
	pt2.y = 200;

	//pt1, pt2의 내용을 출력한다.
	pt1.Print();
	pt2.Print();

	return 0;
}