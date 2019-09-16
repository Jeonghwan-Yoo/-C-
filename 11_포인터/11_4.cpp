int main() {
	//int 타입의 주소를 void 포인터에 보관
	int i = 400;
	void* pv = &i; //형변환없이도 &i의 값을 보관할 수 있다.

	//pv에 보관된 주소를 int*타입의 변수에 옮겨 담는다.
	int* pi = (int*)pv; //void*->int*

	return 0;
}