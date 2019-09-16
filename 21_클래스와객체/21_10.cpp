class NeedConstructor {
public:
	const int maxCount;
	int& ref;
	int sample;

	NeedConstructor();
};

NeedConstructor::NeedConstructor() { //디폴트 생성자를 추가하고, 그 안에서 멤버 변수 초기화.
	maxCount = 100;
	ref = sample;
}

int main() {
	//객체를 생성한다.
	NeedConstructor cr;

	return 0;
}