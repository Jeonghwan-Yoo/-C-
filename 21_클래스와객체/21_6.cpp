#include <iostream>
using namespace std;

//Point클래스를 정의한다.
class Point {
public:
	//멤버 변수
	int x, y;

	//멤버 함수
	void Print();

	//생성자
	Point(); //생성자의 원형만 적어주었다. 클래스와 동일한 이름. 바깥쪽에서 정의한다.
};

Point::Point() { //생성자를 정의하고 있다. 초기화해주는 일.
	x = 0;
	y = 0;
}

void Point::Print() { 
	cout << "(" << x << ", " << y << ")\n";
}

int main() {
	//객체를 생성한다.
	Point pt;

	//pt1, pt2의 내용을 출력한다.
	pt.Print();
	
	return 0;
}