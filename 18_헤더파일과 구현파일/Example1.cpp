//18_15
#include "Point.h"
//18_14
#include "Example2.h"
//������� ������ �߿��ϴ�.

//18_15
//������Ϸοű�
//struct Point {
//	int x, y;
//};

int main() {
	//�� ���� �����.
	Point a = { 100,100 };
	Point b = { 200,200 };

	//�Լ��� ȣ���Ѵ�.
	double dist;
	dist = Distance(a, b);

	return 0;
}