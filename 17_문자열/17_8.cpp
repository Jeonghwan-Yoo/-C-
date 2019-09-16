#include <iostream>
#include <string>
using namespace std;

int main() {
	//긴 문자열을 만든다.
	string text = "Napster's pay-to-play service is officially out, "
		"and we have a review of the now-legit Napster."
		"We also size up its companion music player from Samsung.";

	//이 문자열 안에서 'official'이라는 단어의 위치를 찾는다.
	//find()는 자신 안에서 특정 문자열을 찾아 본후에, 성공한 경우 그 위치를 반환한다.
	cout << "Offset of 'official' = " << text.find("official") << "\n";

	return 0;
}