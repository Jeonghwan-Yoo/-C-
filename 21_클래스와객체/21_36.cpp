#include "Point.h"

int main() {
	//객체를 생성한다.
	Point pt(50, 50);
	Point delta(100, 100); //인자로 사용될 예정.

	//점을 x축으로 10, y축으로 -10만큼 이동시킨다.
	//첫번째 버전
	pt.Offset(10, -10);

	//현재 점의 위치 출력.
	pt.Print();

	//점을 범위 밖으로 이동시킨다. (안정성 테스트);
	//두번째 버전
	pt.Offset(delta);

	//현재 점의 위치 출력
	pt.Print();

	return 0;
}