int main() {
	//변수의 정의
	short int si; //short int 타입
	unsigned short int usi; //unsigned short int 타입
	int i; //int 타입
	unsigned int ui; //unsigned int 타입
	long int li; //long int 타입
	unsigned long ul; //unsigne long 타입

	//작은 값을 대입
	si = 40000; //ERROR
	usi = 40000;
	i = 40000;
	ui = 40000;
	li = 40000;
	ul = 40000;

	//조금 더 큰 값을 대입
	//unsigned는 signed보다 2배정도 큰 양수를 보관.
	si = 70000; //ERROR
	usi = 70000; //ERROR
	i = 70000;
	ui = 70000;
	li = 70000;
	ul = 70000;

	//더 큰 값을 대입
	si = 2200000000; //ERROR
	usi = 2200000000; //ERROR
	i = 2200000000; //ERROR
	ui = 2200000000; //ERROR
	li = 2200000000;
	ul = 2200000000;

	//unsigned int 와 unsigned long int의 한계는 어디?
	ui = 4300000000; //ERROR
	ul = 4300000000; //ERROR

	//음수를 대입
	si = -100;
	usi = -100; //ERROR
	i = -100;
	ui = -100; //ERROR
	li = -100;
	ul = -100; //ERROR

	return 0;
}