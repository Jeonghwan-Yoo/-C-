//다른 파일에 있는 전역 변수에 접근하기 위한 준비
extern int ga;

int main() {
	//다른 파일에 있는 전역 변수에 접근
	ga = 200; //성공

	return 0;
}