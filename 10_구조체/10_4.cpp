#include <iostream>
using namespace std;

int main() {
	//구조체를 정의한다.
	//2차원에서의 점에 대한 정보
	struct Point {
		int x; //x좌표
		int y; //y좌표
	};

	//변수 두 개를 정의한다.
	Point pt1 = { 30,50 };
	Point pt2;

	//pt1을 pt2에 대입한다.
	pt2 = pt1;

	//멤버 값을 출력한다.
	cout << "pt1 = (" << pt1.x << ", " << pt1.y << ")\n";
	cout << "pt2 = (" << pt2.x << ", " << pt2.y << ")\n";

	return 0;
}