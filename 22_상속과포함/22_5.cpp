#include "HTMLWriter.h"

int main() {
	//인자가 있는 생성자를 사용해서 객체를 생성한다.
	HTMLWriter hw("test.html", "You must be a good programmer~!!");
	hw.Write();

	return 0;
}