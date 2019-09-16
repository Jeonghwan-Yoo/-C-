#include "TextOutput.h"
//25_24
#include "MyException.h"

// ������
TextOutput::TextOutput(STR filename)
{
	// ������ �����Ѵ�.
	fout.open(filename.c_str());

	//25_24
	//������ ���µ� ������ ��� ���ܸ� ������.
	//ofstream::is_open()�� ������ ���� ������ �� true�� ��ȯ. �ƴϸ� false.
	if (false == fout.is_open())
		throw MyException(filename + "�� �� �� �����ϴ�.");
}

// �Ҹ���
TextOutput::~TextOutput()
{
	// ������ �ݴ´�.
	fout.close();
}

// ostream ��ü�� ��ȯ�Ѵ�.
// ��ȯ�� : ostream ��ü�� fout�� ��ȯ�Ѵ�.
// StdOut()�Լ��� �������̵��ؼ� ofstream��ü�� fout�� ��ȯ.
ostream& TextOutput::StdOut()
{
	return fout;
}

