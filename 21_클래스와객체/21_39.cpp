#include "Point.h"

int main() {
	//�ʱ�ȭ������ ��ü�� ������ش�.
	//���� �����ڸ� ȣ���Ϸ���.
	Point pt(50, 50);

	//�������� ��ü�� �����Ѵ�.
	Point* p1 = new Point(); //����Ʈ ������ ���
	Point* p2 = new Point(100, 100); //���ڰ� �ִ� ������ ���
	Point* p3 = new Point(pt); //���� ������ ���

	//��ü���� ������ ����Ѵ�.
	//������ ->�� ����ؼ� ����� ����.
	p1->Print();
	p2->Print();
	p3->Print();

	//�������� ������ ��ü���� �����Ѵ�.
	delete p1;
	delete p2;
	delete p3;
	p1 = p2 = p3 = 0; //NULL

	return 0;
}