#include "DocWriter.h"
#include "HTMLWriter.h"

int main() {
	//HTMLWriter ��ü ����
	HTMLWriter hw("test.html", "HTMLWriter content");

	//DocWriter ��ü ����
	DocWriter dw;

	//dw ��ü�� hw ��ü�� ����
	dw = hw; //�ڽ� ��ü�� ��� �������� �θ� ��ü�� ��� ������ �����Ѵ�.

	//���� ����
	dw.Write(); //DocWriter::Write()��� �Լ��� ȣ��

	return 0;
}