#include <iostream>
using namespace std;

//PointŬ������ �����Ѵ�.
class Point {
public:
	//��� ����
	int x, y;

	//��� �Լ�
	void Print();

	//�����ڵ�
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt); //���� �������� ������ �����־���.
};

Point::Point(const Point& pt) { //�ڽŰ� ������ Ÿ���� ��ü�� ���� ���۷����� ���ڷ� �޴´�.
	cout << "���� ������ ȣ���!!\n";
	x = pt.x; //�׸��� �� ��ü�� �� ��� ������ ���� �����ϰ� �ڵ带 �ۼ��ϴ� ���� �Ϲ���.
	y = pt.y;
}

Point::Point(int initialX, int initialY) {
	x = initialX;
	y = initialY;
}

Point::Point() { //�����ڸ� �����ϰ� �ִ�. �ʱ�ȭ���ִ� ��.
	x = 0;
	y = 0;
}

void Point::Print() {
	cout << "(" << x << ", " << y << ")\n";
}

int main() {
	//��ü�� �����Ѵ�.
	Point pt1(100, 100), pt2(200, 200);

	//pt1�� ����ؼ� ���ο� pt3�� �ʱ�ȭ�Ѵ�.
	Point pt3 = pt1; //�ٸ� ��ü�� ����ؼ� �ʱ�ȭ�ϴ� ��쿡 ���� �����ڰ� ȣ��

	//pt3�� ������ ����Ѵ�.
	pt3.Print();

	//pt2�� pt3�� �����Ѵ�.
	pt3 = pt2; //�ٸ� ��ü�� �����ϴ� ��쿡�� ���� �����ڰ� ȣ����� �ʴ´�.

	//pt3�� ������ ����Ѵ�.
	pt3.Print();

	return 0;
}