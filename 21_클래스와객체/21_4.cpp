#include <iostream>
using namespace std;

//PointŬ������ �����Ѵ�.
class Point {
public:
	//��� ����
	int x, y;

	//��� �Լ�
	void Print();
};

void Point::Print() {
	int x = 333; //x��� �̸��� ������ �����ߴ�.
	cout << "(" << x << ", " << y << ")\n";
}

int main() {
	//��ü�� �����Ѵ�.
	Point pt1, pt2;

	//pt1, pt2�� �ʱ�ȭ �Ѵ�.
	pt1.x = 100;
	pt1.y = 100;
	pt2.x = 200;
	pt2.y = 200;

	//pt1, pt2�� ������ ����Ѵ�.
	pt1.Print();
	pt2.Print();

	return 0;
}