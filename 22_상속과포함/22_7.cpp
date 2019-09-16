#include "DocWriter.h"
#include "HTMLWriter.h"

int main() {
	//HTMLWriter 객체 생성
	HTMLWriter hw("test.html", "HTMLWriter Content");

	//DocWriter 클래스의 포인터로 객체를 가리킨다.
	DocWriter* pDW = &hw; //부모 클래스의 포인터로 자식 클래스의 객체를 가리킨다.

	//파일에 저장한다.
	pDW->Write(); //부모 클래스의 포인터로 멤버 함수를 호출한다.

	return 0;
}