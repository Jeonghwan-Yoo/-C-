#include <iostream>
using namespace std;

//Point Ŭ������ �����Ѵ�.
class Point {
public :
	//��� ����
	int x, y;

	//��� �Լ�
	void Print() {
		cout << "(" << x << ", " << y << ")\n"; //x,y�� �ڱ� �ڽ��� ��� ����.
	}
};

int main() {
	//��ü�� �����Ѵ�.
	Point pt1, pt2; //Ŭ������ ����� ���� Ÿ��. ��ü�� �� Ÿ���� ����� ����.

	//pt1, pt2�� �ʱ�ȭ�Ѵ�.
	//�����ϴ� ���� ����ü�� ����.
	pt1.x = 100;
	pt1.y = 100;
	pt2.x = 200;
	pt2.y = 200;

	//pt1, pt2�� ������ ����Ѵ�.
	pt1.Print();
	pt2.Print();

	return 0;
}