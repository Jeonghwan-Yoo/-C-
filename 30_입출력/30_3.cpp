#include <cstdio>

int main() {
	//안내 메시지를 출력한다.
	printf("세 개의 숫자를 입력하세요~\n");

	//세 개의 정수를 입력 받는다.
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	//평균을 구해서 출력한다.
	float ave = float(a + b + c) / 3.0f;

	printf("입력하신 값 %d, %d, %d의 평균은 %f 입니다.\n", a, b, c, ave);

	return 0;
}