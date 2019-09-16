#include <iostream>
#include <cmath> //sqrt(), pow()
using namespace std;

struct Point {
	int x, y;
};

//두 점의 거리를 구하는 함수의 원형
double Distance(Point p1, Point p2);

int main() {
	//두 점을 만든다.
	Point a = { 0,0 };
	Point b = { 3,4 };

	//두 점의 거리를 구한다.
	double dist_a_b = Distance(a, b);

	//결과를 출력한다.
	cout << "(" << a.x << ", " << a.y << ") 와 ";
	cout << "(" << b.x << ", " << b.y << ") 의 거리 = " << dist_a_b << "\n";

	return 0;
}

//두 점의 거리를 구하는 코드는 없다.
double Distance(Point p1, Point p2) {
	//피타고라스의 정리를 사용한다.
	double distance;
	//사실 (p1.x-p2.x)*(p1.x-p2.x)처럼 직접하는 것이 더 빠르긴 하다.
	distance = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));

	//결과를 반환한다(임시로 0을 반환);
	return distance;
}