#include <typeinfo> //bad_cast 예외처리
using namespace std;

class A {
public:
	virtual void Func() {

	}
};
class B : public A {

};
class C : public B {

};

int main() {
	//C 객체를 생성해서 A*에 담는다.
	//클래스 C타입의 객체를 생성해서 그 주소를 클래스 A타입의 포인터에 보관했다.
	//자식 객체의 주소이므로 아무런 문제가 없다.
	A* pa1 = new C;

	//A 객체를 생성해서 A*에 담는다.
	//클래스 A타입의 객체를 생성해서 A타입의 포인터에 보관했다.
	A* pa2 = new A;

	//pa1을 C*타입으로 형변환한다.
	//pa1이 가리키는 객체는 원래 클래스 C타입이므로 형변환 문제 없다.
	C* pc1 = dynamic_cast<C*>(pa1); //성공

	//pa2를 C*타입으로 형변환한다.
	//pa2가 가리키는 객체는 원래 클래스 A타입이므로 이 형변환은 잘못된 것이다.
	C* pc2 = dynamic_cast<C*>(pa2); //실패:NULL반환
	
	try {
		//*pa2를 C&타입으로 형변환한다.
		//포인터 타입이 아닌 레퍼런스 타입으로 형변환한다.
		//*pa2는 클래스 A타입의 객체므로 C&타입으로 형변환하느 것은 잘못됨.
		C& rc1 = dynamic_cast<C&>(*pa2); //실패:bad_cast예외 발생
	}
	catch (bad_cast& e) {

	}

	return 0;
}