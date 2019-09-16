#include <iostream>
using namespace std;

//사각형의 정보를 갖는 구조체
struct Rectangle {
	int x, y;
	int width, height;
};

int main() {
	//사각형 구조체 변수를 만든다.
	Rectangle rc = { 100,100,50,50 };

	//포인터가 이 변수를 가리키게 만든다.
	Rectangle* p = &rc; //Rectangle구조체를 가리킬 수 있는 포인터를 정의하고 초기화.

	//구조체의 멤버에 접근한다.
	(*p).x = 200; //구조체의 멤버에 접근한다. 우선순위 때문에 괄호. rc.x = 200;과 같다.
	p->y = 250; //(*p).y = 250;과 같은 뜻.

	//구조체의 내용을 출력한다.
	cout << "rc = (" << rc.x << ", " << rc.y << ", ";
	cout << rc.width << ", " << rc.height << ")\n";

	return 0;
}