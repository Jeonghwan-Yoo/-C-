#include <iostream>
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
	//�켱 ���ڸ� �� �����ߴ����� �˻�.
	cout << "p1 = (" << p1.x << ", " << p1.y << ")\n";
	cout << "p2 = (" << p2.x << ", " << p2.y << ")\n";

	//����� ��ȯ�Ѵ�(�ӽ÷� 0�� ��ȯ);
	return 0.0f;
}