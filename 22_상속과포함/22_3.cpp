#include "DocWriter.h"

int main() {
	//DocWriter��ü�� �����Ѵ�.
	//�����ڸ� ����ؼ� ���� �̸��� ������ ������ �������ش�.
	//Write()�Լ��� ����ؼ� ���Ͽ� ������ ����Ѵ�.
	DocWriter dw;
	dw.SetFileName("test.txt");
	dw.SetContent("You must be a good programmer~!!");
	dw.Write();

	return 0;
}