#include <iostream>
using namespace std;

int main() {
	int i = 0; //1���� 10���� ������ ����
	int sum = 0;

	//'++i <= 10'�� �����ϴ� ���ȸ� �ݺ��Ѵ�.
	//++i�� �� ������ i<=10�� ���ϴ� �Ͱ� ����.
	while (++i <= 10) {
		//��������� �տ� i�� ���Ѵ�.
		sum += i;
	}
	
	//��� ���
	cout << "���� i�� �� = " << i << "\n";
	cout << "1~10������ �� = " << sum << "\n";

	return 0;
}