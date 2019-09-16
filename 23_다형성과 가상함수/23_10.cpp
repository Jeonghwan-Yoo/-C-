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
//23_10 생성자 추가
public:
	void Eat();

	Dog(int n); //Dog클래스에 인자가 있는 생성자를 추가해주었다.
};

Dog::Dog(int n) {

}

void Dog::Eat() {
	cout << name << " says, 'Growl~'\n";
}

int main() {
	Dog dog1;

	return 0;
}