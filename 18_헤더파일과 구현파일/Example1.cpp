//18_15
#include "Point.h"
//18_14
#include "Example2.h"
//헤더파일 순서가 중요하다.

//18_15
//헤더파일로옮김
//struct Point {
//	int x, y;
//};

int main() {
	//두 점을 만든다.
	Point a = { 100,100 };
	Point b = { 200,200 };

	//함수를 호출한다.
	double dist;
	dist = Distance(a, b);

	return 0;
}