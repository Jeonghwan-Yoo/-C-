#include <iostream>
using namespace std;

//PointŬ������ �����Ѵ�.
class Point {
public:
	//��� ����
	int x, y;

	//��� �Լ�
	void Print();

	//������
	Point(); //�������� ������ �����־���. Ŭ������ ������ �̸�. �ٱ��ʿ��� �����Ѵ�.
};

Point::Point() { //�����ڸ� �����ϰ� �ִ�. �ʱ�ȭ���ִ� ��.
	x = 0;
	y = 0;
}

void Point::Print() { 
	cout << "(" << x << ", " << y << ")\n";
}

int main() {
	//��ü�� �����Ѵ�.
	Point pt;

	//pt1, pt2�� ������ ����Ѵ�.
	pt.Print();
	
	return 0;
}