int main() {
	//������ ����
	short int si; //short int Ÿ��
	unsigned short int usi; //unsigned short int Ÿ��
	int i; //int Ÿ��
	unsigned int ui; //unsigned int Ÿ��
	long int li; //long int Ÿ��
	unsigned long ul; //unsigne long Ÿ��

	//���� ���� ����
	si = 40000; //ERROR
	usi = 40000;
	i = 40000;
	ui = 40000;
	li = 40000;
	ul = 40000;

	//���� �� ū ���� ����
	//unsigned�� signed���� 2������ ū ����� ����.
	si = 70000; //ERROR
	usi = 70000; //ERROR
	i = 70000;
	ui = 70000;
	li = 70000;
	ul = 70000;

	//�� ū ���� ����
	si = 2200000000; //ERROR
	usi = 2200000000; //ERROR
	i = 2200000000; //ERROR
	ui = 2200000000; //ERROR
	li = 2200000000;
	ul = 2200000000;

	//unsigned int �� unsigned long int�� �Ѱ�� ���?
	ui = 4300000000; //ERROR
	ul = 4300000000; //ERROR

	//������ ����
	si = -100;
	usi = -100; //ERROR
	i = -100;
	ui = -100; //ERROR
	li = -100;
	ul = -100; //ERROR

	return 0;
}