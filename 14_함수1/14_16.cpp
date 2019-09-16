#include <iostream>
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
	//우선 인자를 잘 전달했는지만 검사.
	cout << "p1 = (" << p1.x << ", " << p1.y << ")\n";
	cout << "p2 = (" << p2.x << ", " << p2.y << ")\n";

	//결과를 반환한다(임시로 0을 반환);
	return 0.0f;
}