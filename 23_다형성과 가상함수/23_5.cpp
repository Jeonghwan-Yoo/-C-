#include "DocWriter.h"
#include "HTMLWriter.h"

int main() {
	//자식 객체 생성
	HTMLWriter hw("test.html", "This is HTMLWriter content.");

	//부모 클래스의 포인터로 가리킨다.
	DocWriter* pdw = &hw; //자식 객체를 부모 클래스의 포인터로 가리키고 있다.

	//포인터를 사용해서 저장 함수 호출
	pdw->Write();

	return 0;
}