#include "Point.h"

int main() {
	//점 3개의 배열
	Point arr[3] = { Point(100,100), Point(50,100), Point(10,10) };

	//모든 원소를 출력한다.
	for (int i = 0;i < 3;i++)
		arr[i].Print();

	return 0;
}