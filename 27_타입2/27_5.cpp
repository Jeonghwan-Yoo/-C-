#include "complex.h"
#include <iostream>
using namespace std;

//��ȯ ���� Ÿ���� ostream&.
//���ڷ� ���� cout��ü�� �ٽ� ��ȯ�ؾ� �ؼ�
ostream& operator<<(ostream& o, const Complex& right) {
	//���Ҽ��� ���·� ����Ѵ�.
	//showpos�� ����ϸ� ����� ��쿡�� +5ó�� ��ȣ�� ����Ѵ�.
	//noshowpos�� cout��ü�� ���� �ٽ� ������ ���·� �ǵ��ȴ�.
	o << right.Real() << showpos << right.Imaginary() << "i" << noshowpos;
	return o; //���ڷ� ���� cout ��ü�� �ٽ� ��ȯ�Ѵ�.
}

int main() {
	Complex c1(10, 5);

	//�⺻ Ÿ���� cout��ü�� ����ϵ��� Complex��ü�� ����� �� �ִ�.
	cout << c1 << "\n";

	return 0;
}