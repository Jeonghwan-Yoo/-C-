#include "DocWriter.h"
#include "HTMLWriter.h"

int main() {
	//HTMLWriter ��ü ����
	HTMLWriter hw("test.html", "HTMLWriter Content");

	//DocWriter Ŭ������ �����ͷ� ��ü�� ����Ų��.
	DocWriter* pDW = &hw; //�θ� Ŭ������ �����ͷ� �ڽ� Ŭ������ ��ü�� ����Ų��.

	//���Ͽ� �����Ѵ�.
	pDW->Write(); //�θ� Ŭ������ �����ͷ� ��� �Լ��� ȣ���Ѵ�.

	return 0;
}