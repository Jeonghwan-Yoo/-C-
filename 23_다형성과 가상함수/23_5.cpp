#include "DocWriter.h"
#include "HTMLWriter.h"

int main() {
	//�ڽ� ��ü ����
	HTMLWriter hw("test.html", "This is HTMLWriter content.");

	//�θ� Ŭ������ �����ͷ� ����Ų��.
	DocWriter* pdw = &hw; //�ڽ� ��ü�� �θ� Ŭ������ �����ͷ� ����Ű�� �ִ�.

	//�����͸� ����ؼ� ���� �Լ� ȣ��
	pdw->Write();

	return 0;
}