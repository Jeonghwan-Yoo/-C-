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
	Point(int initialX, int initialY); //�� ���� ���ڸ� ���� �����ڸ� �߰�.
};

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
	Point pt(3, 5); //���ڰ� �ִ� �����ڸ� ȣ���ϱ� ���ؼ� ��ü�� ������ �� ���ڸ� �־���.

	//pt1, pt2�� ������ ����Ѵ�.
	pt.Print();

	return 0;
}