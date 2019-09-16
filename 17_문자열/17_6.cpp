#include <iostream>
#include <string>
using namespace std;

int main() {
	//문자열을 정의한다.
	string s1;
	string s2 = "123";
	string s3 = "abcdefg";

	//문자열의 길이를 출력한다.
	cout << "s1 = " << s1.size() << "\n";
	cout << "s2 = " << s2.size() << "\n";
	cout << "s3 = " << s3.size() << "\n";

	return 0;
}