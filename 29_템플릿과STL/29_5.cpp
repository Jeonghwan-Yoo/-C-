template<typename T> //템플릿 함수의 정의를 시작한다.
T max(T a, T b) { //인자와 반환 값의 타입으로 템플릿 매개 변수 T를 사용한다.
	return (a > b ? a : b);
}

int main() {
	int i1 = 5, i2 = 3;
	int i3 = max(i1, i2); //i3 =5

	double d1 = 0.9, d2 = 1.0;
	double d3 = max(d1, d2); //d3 = 1.0

	return 0;
}