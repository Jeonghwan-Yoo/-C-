#include <iostream>
#include <string>
using namespace std;

//�ֿ� ���� Ŭ����
class Pet {
public:
	//�����ε�� �� ���� ��� �Լ� Eat()�� �ִ�.
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

//������ Ŭ����
class Dog : public Pet { //�ֿϵ��� Ŭ������ ��� �޾� ������ Ŭ������ ����.
//23_10 ������ �߰�
public:
	void Eat();

	Dog(int n); //DogŬ������ ���ڰ� �ִ� �����ڸ� �߰����־���.
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