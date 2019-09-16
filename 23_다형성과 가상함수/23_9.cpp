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
//23_9 오바라이드
public:
	//인자가 없는 Eat()함수를 오바라이딩했다.
	void Eat();
};

void Dog::Eat() {
	cout << name << " says, 'Growl~'\n";
}

int main() {
	//강아지 생성
	Dog dog1;
	dog1.name = "Patrasche";

	//두 가지 Eat() 함수를 호출한다.
	dog1.Eat();
	dog1.Eat("milk");

	return 0;
}