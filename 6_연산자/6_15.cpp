#include <iostream>
using namespace std;

int main() {
	//������ ���� ���� ������ �����Ѵ�.
	int i = 10;
	float f = 10.0f;

	//�� ������ ������ ���� ������.
	float i_div_4, f_div_4;
	i_div_4 = i / 4; //�ǿ����ڰ� �Ѵ� int
	f_div_4 = f / 4; //�ǿ����ڰ� int �� float

	//��� ���
	//����ȯ�� ���� �ǿ������� Ÿ�Կ��� ������ �ް�,
	//����� �޴� ������ Ÿ���� �ƹ��� ������ ���� �ʴ´�.
	cout << "i = " << i << "\n";
	cout << "f = " << f << "\n";
	cout << "i/4 = " << i_div_4 << "\n";
	cout << "f/4 = " << f_div_4 << "\n";

	return 0;
}