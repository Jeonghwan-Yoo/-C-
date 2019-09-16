#include <bitset>
#include <iostream>
using namespace std;

int main() {
	//unsigned와 signed 변수에 같은 값을 넣는다.
	//0xff는 unsigned는 충분하지만 signed는 충분하지 않아 음수로 해석.
	unsigned short us = 0xff00;
	short s = (short)0xff00;

	//동일한 쉬프트를 수행한다.
	unsigned short us_shift = us >> 4;
	short s_shift_r = s >> 4;

	//결과 출력
	cout << "   us = " << bitset<16>(us) << "(" << us << ")\n";
	cout << "    s = " << bitset<16>(s) << "(" << s << ")\n";
	cout << "us>>4 = " << bitset<16>(us_shift) << "(" << us_shift << ")\n";
	cout << " s>>4 = " << bitset<16>(s_shift_r) << "(" << s_shift_r << ")\n";

	return 0;
}