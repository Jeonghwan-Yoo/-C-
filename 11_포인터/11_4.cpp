int main() {
	//int Ÿ���� �ּҸ� void �����Ϳ� ����
	int i = 400;
	void* pv = &i; //����ȯ���̵� &i�� ���� ������ �� �ִ�.

	//pv�� ������ �ּҸ� int*Ÿ���� ������ �Ű� ��´�.
	int* pi = (int*)pv; //void*->int*

	return 0;
}