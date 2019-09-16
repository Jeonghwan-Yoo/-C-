int main() {
	//블록을 만든다.
	{
		//블록 안에서 변수 정의
		int var_in_block = 10;

		//변수에 접근
		//같은 블록 안에서만 변수에 접근.
		var_in_block = 100; //성공
	}

	//변수에 접근
	//블록 밖에서는 변수에 접근할 수 없다.
	var_in_block = 1000; //실패

	return 0;
}