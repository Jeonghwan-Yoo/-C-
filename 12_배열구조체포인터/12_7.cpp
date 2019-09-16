int main() {
	//참조될 변수들을 정의한다.
	double a, b, c;

	//3개의 원소를 가진 포인터의 배열을 정의한다.
	double* pArray[3]; //double* 타입의 배열을 정의
	
	//각 원소가 변수들을 가리키게 만든다.
	pArray[0] = &a;
	pArray[1] = &b;
	pArray[2] = &c;

	return 0;
}