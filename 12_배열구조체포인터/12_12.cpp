#include <iostream>
using namespace std;

struct Dizzy {
	int id; //구조체 변수마다 갖는 고유한 값
	Dizzy* p; //Dizzy 구조체를 가리키는 포인터. 자신을 포함한 Dizzy타입을 가리킬 수 있다.
};

int main() {
	//Dizzy 객체를 3개 만들고, 서로를 가리키게 만든다.
	Dizzy a, b, c;
	a.id = 1;
	a.p = &b;
	b.id = 2;
	b.p = &c;
	c.id = 3;
	c.p = &a;

	//a만 사용해서 a, b, c모두에 접근한다.
	cout << "a.id = " << a.id << "\n";
	cout << "b.id = " << a.p->id << "\n"; //b.id
	cout << "c.id = " << a.p->p->id << "\n"; //c.id
	cout << "a.id = " << a.p->p->p->id << "\n"; //a.id

	return 0;
}