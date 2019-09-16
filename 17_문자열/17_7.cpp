#include <iostream>
#include <string>
using namespace std;

int main() {
	//두 문자열을 준비한다.
	string str1 = "abcde";
	string str2 = "fghij";

	//두 문자열을 결합한다.
	str1 = str1 + str2;
	
	//결합한 문자열의 내용을 비교한다.
	if (str1 == "abcdefghij")
		cout << "str1 and \"abcdefghij\" are identical.\n";

	//일부러 엉뚱한 문자열과 비교해본다
	if ("123456" != str1)
		cout << "\"123456\" and str1 are NOT identical.\n";

	return 0;
}