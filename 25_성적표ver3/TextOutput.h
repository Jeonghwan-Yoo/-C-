#ifndef TEXT_OUTPUT_H
#define TEXT_OUTPUT_H

#include "ConsoleOutput.h"
#include <fstream>
using namespace std;

// �ؽ�Ʈ ���� ����� �����ִ� �Լ�
// ConsoleOutputŬ������ ��ӹ޴´�. ConsoleOutput�� �̹� BaseOutput�� ��� ����.
class TextOutput : public ConsoleOutput
{
public:
	TextOutput(STR filename);
	virtual ~TextOutput();

	// BaseOutput�� ��� �Լ�����
	// ���� �������̵� �� �ʿ�� ����.

protected:
	//StdOut()�� �������̵�. ConsoleOutputŬ���������� �����Լ��� ���ǵ�.
	virtual ostream& StdOut();

protected:
	ofstream	fout;	// ������ �����ϴ� ��ü
};

#endif
