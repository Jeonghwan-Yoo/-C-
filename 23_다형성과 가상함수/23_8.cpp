#include <iostream>
#include <string>
using namespace std;

//애완 동물 클래스
class Pet {
public:
	//오버로드된 두 개의 멤버 함수 Eat()이 있다.
	void Eat();
	void Eat(const string& it);

	string name;
};

void Pet::Eat() {
	cout << name << " says, 'Where is the food?\n";
}

void Pet::Eat(const string& it) {
	cout << name << " says, 'I like " << it << ".'\n";
}

//강아지 클래스
class Dog : public Pet { //애완동물 클래스를 상속 받아 강아지 클래스를 정의.

};

int main() {
	//강아지 생성
	//디폴트 생성자를 사용해 객체를 생성하고 이름을 지어준다.
	//기본적으로 컴퓨터가 제공해주는 디폴트 생성자가 있다.
	//이 생성자에서는 아무런 일도 하지 않는다.
	Dog dog1;
	dog1.name = "Patrasche";

	//두 가지 Eat() 함수를 호출한다.
	dog1.Eat();
	dog1.Eat("milk");

	return 0;
}