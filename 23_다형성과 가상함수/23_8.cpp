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

};

int main() {
	//������ ����
	//����Ʈ �����ڸ� ����� ��ü�� �����ϰ� �̸��� �����ش�.
	//�⺻������ ��ǻ�Ͱ� �������ִ� ����Ʈ �����ڰ� �ִ�.
	//�� �����ڿ����� �ƹ��� �ϵ� ���� �ʴ´�.
	Dog dog1;
	dog1.name = "Patrasche";

	//�� ���� Eat() �Լ��� ȣ���Ѵ�.
	dog1.Eat();
	dog1.Eat("milk");

	return 0;
}