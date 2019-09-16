//전역 변수
//같은 파일 내의 모든 함수에서 접근할 수 있다.
int global = 10; //cout객체를 사용하기 위한 준비 작업.

void MyFunction();

int main() {
	//지역 변수
	int local = 20; //함수 안에서 정의
	
	//전역 변수에 접근
	global = 100; //성공

	//자신의 지역 변수에 접근
	local = 200; //성공

	//함수 호출
	MyFunction();

	return 0;
}

void MyFunction() {
	//전역 변수에 접근
	global = 100; //성공

	//다른 함수의 지역 변수에 접근
	local = 200; //오류
}