#include <iostream>
#include <string>
using namespace std;

int main() {
	//전체 경로를 가진 문자열을 만든다.
	//이스케이프 문자열 때문에 역슬래쉬를 두번 넣어주어야 한다.
	//이스케이프 문자열은 역슬래쉬 2개여도 1바이트로 취급.
	string path = "c:\\My Document\\Pictures\\33.jpg"; 

	//문자열의 길이를 얻어둔다.
	int len = path.size();

	//맨 뒤쪽의 3문자만 얻어온다.
	string ext = path.substr(len - 3, 3); //len-3에서부터 3글자 얻는다.

	//결과를 출력해본다.
	cout << "extension = " << ext << "\n";

	return 0;
}