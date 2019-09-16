#include <iostream>
using namespace std;

int main() {
	//구조체를 정의한다.
	//2차원에서의 점에 대한 정보
	struct Point {
		int x; //x 좌표
		int y; //y 좌표
	} pt1 = { 30,50 }, pt2; //pt1과 pt2의 정의를 한번에.

	//pt1을 pt2에 대입한다.
	pt2 = pt1;

	//멤버 값을 출력한다.
	cout << "pt1 = (" << pt1.x << ", " << pt1.y << ")\n";
	cout << "pt2 = (" << pt2.x << ", " << pt2.y << ")\n";

	return 0;
}