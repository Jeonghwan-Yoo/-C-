#include <iostream>
using namespace std;

//�簢���� ������ ���� ����ü
struct Rectangle {
	int x, y;
	int width, height;
};

int main() {
	//�簢�� ����ü ������ �����.
	Rectangle rc = { 100,100,50,50 };

	//�����Ͱ� �� ������ ����Ű�� �����.
	Rectangle* p = &rc; //Rectangle����ü�� ����ų �� �ִ� �����͸� �����ϰ� �ʱ�ȭ.

	//����ü�� ����� �����Ѵ�.
	(*p).x = 200; //����ü�� ����� �����Ѵ�. �켱���� ������ ��ȣ. rc.x = 200;�� ����.
	p->y = 250; //(*p).y = 250;�� ���� ��.

	//����ü�� ������ ����Ѵ�.
	cout << "rc = (" << rc.x << ", " << rc.y << ", ";
	cout << rc.width << ", " << rc.height << ")\n";

	return 0;
}