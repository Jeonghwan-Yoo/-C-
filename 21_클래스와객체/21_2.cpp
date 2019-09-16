#include <iostream>
using namespace std;

//Point 클래스를 정의한다.
class Point {
public :
	//멤버 변수
	int x, y;

	//멤버 함수
	void Print() {
		cout << "(" << x << ", " << y << ")\n"; //x,y는 자기 자신의 멤버 변수.
	}
};

int main() {
	//객체를 생성한다.
	Point pt1, pt2; //클래스는 사용자 정의 타입. 객체는 이 타입을 사용한 변수.

	//pt1, pt2를 초기화한다.
	//접근하는 법이 구조체와 같다.
	pt1.x = 100;
	pt1.y = 100;
	pt2.x = 200;
	pt2.y = 200;

	//pt1, pt2의 내용을 출력한다.
	pt1.Print();
	pt2.Print();

	return 0;
}