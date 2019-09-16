int main() {
	//두 개의 배열 정의
	int arrayA[3] = { 1,2,3 };
	int arrayB[3];

	//arrayA의 내용을 arrayB로 복사한다.
	for (int i = 0;i < 3;++i) {
		arrayB[i] = arrayA[i];
	}

	return 0;
}