class NeedConstructor {
public:
	const int maxCount;
	int& ref;
	int sample;

	NeedConstructor();
};

NeedConstructor::NeedConstructor() { //����Ʈ �����ڸ� �߰��ϰ�, �� �ȿ��� ��� ���� �ʱ�ȭ.
	maxCount = 100;
	ref = sample;
}

int main() {
	//��ü�� �����Ѵ�.
	NeedConstructor cr;

	return 0;
}