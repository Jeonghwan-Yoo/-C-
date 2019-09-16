#include <iostream>
#include <cmath> //sqrt(), pow()
using namespace std;

struct Point {
	int x, y;
};

//�� ���� �Ÿ��� ���ϴ� �Լ��� ����
double Distance(Point p1, Point p2);

int main() {
	//�� ���� �����.
	Point a = { 0,0 };
	Point b = { 3,4 };

	//�� ���� �Ÿ��� ���Ѵ�.
	double dist_a_b = Distance(a, b);

	//����� ����Ѵ�.
	cout << "(" << a.x << ", " << a.y << ") �� ";
	cout << "(" << b.x << ", " << b.y << ") �� �Ÿ� = " << dist_a_b << "\n";

	return 0;
}

//�� ���� �Ÿ��� ���ϴ� �ڵ�� ����.
double Distance(Point p1, Point p2) {
	//��Ÿ����� ������ ����Ѵ�.
	double distance;
	//��� (p1.x-p2.x)*(p1.x-p2.x)ó�� �����ϴ� ���� �� ������ �ϴ�.
	distance = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));

	//����� ��ȯ�Ѵ�(�ӽ÷� 0�� ��ȯ);
	return distance;
}