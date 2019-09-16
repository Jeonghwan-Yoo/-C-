#include "DocWriter.h"
#include "HTMLWriter.h"

int main() {
	//HTMLWriter 객체 생성
	HTMLWriter hw("test.html", "HTMLWriter content");

	//DocWriter 객체 생성
	DocWriter dw;

	//dw 객체를 hw 객체에 대입
	dw = hw; //자식 객체의 멤버 변수들을 부모 객체의 멤버 변수로 대입한다.

	//파일 저장
	dw.Write(); //DocWriter::Write()멤버 함수가 호출

	return 0;
}