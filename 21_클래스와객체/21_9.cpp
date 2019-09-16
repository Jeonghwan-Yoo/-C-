class NeedConstructor {
public:
	const int maxCount;
	int& ref;
	int sample;
};

int main() {
	//객체를 생성한다.
	NeedConstructor cr;

	//생성하자마자 바로 초기화해본다.
	cr.maxCount = 100;
	cr.ref = cr.sample;

	return 0;
}