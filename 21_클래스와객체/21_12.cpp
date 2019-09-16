#include <iostream>
using namespace std;

class NeedConstructor {
public:
	const int maxCount;
	int& ref;
	int sample;

	NeedConstructor();
	NeedConstructor(int count, int& number);
};

NeedConstructor::NeedConstructor(int count, int& number) :maxCount(count), ref(number) {
	sample = 200;
}

NeedConstructor::NeedConstructor() : maxCount(100), ref(sample) {
	sample = 200;
}

int main() {
	//참조할 변수를 준비한다.
	int number = 400;

	//객체를 생성한다.
	NeedConstructor cr(300, number);

	//내용을 출력한다.
	cout << "cr.maxCount = " << cr.maxCount << "\n";
	cout << "cr.ref = " << cr.ref << "\n";

	return 0;
}