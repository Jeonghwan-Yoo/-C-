#include <iostream>
using namespace std;

struct Dizzy {
	int id; //����ü �������� ���� ������ ��
	Dizzy* p; //Dizzy ����ü�� ����Ű�� ������. �ڽ��� ������ DizzyŸ���� ����ų �� �ִ�.
};

int main() {
	//Dizzy ��ü�� 3�� �����, ���θ� ����Ű�� �����.
	Dizzy a, b, c;
	a.id = 1;
	a.p = &b;
	b.id = 2;
	b.p = &c;
	c.id = 3;
	c.p = &a;

	//a�� ����ؼ� a, b, c��ο� �����Ѵ�.
	cout << "a.id = " << a.id << "\n";
	cout << "b.id = " << a.p->id << "\n"; //b.id
	cout << "c.id = " << a.p->p->id << "\n"; //c.id
	cout << "a.id = " << a.p->p->p->id << "\n"; //a.id

	return 0;
}