#include "HTMLWriter.h"

int main() {
	//���ڰ� �ִ� �����ڸ� ����ؼ� ��ü�� �����Ѵ�.
	HTMLWriter hw("test.html", "You must be a good programmer~!!");
	hw.Write();

	return 0;
}