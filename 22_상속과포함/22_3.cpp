#include "DocWriter.h"

int main() {
	//DocWriter객체를 생성한다.
	//접근자를 사용해서 파일 이름과 문자의 내용을 지정해준다.
	//Write()함수를 사용해서 파일에 쓰도록 명령한다.
	DocWriter dw;
	dw.SetFileName("test.txt");
	dw.SetContent("You must be a good programmer~!!");
	dw.Write();

	return 0;
}