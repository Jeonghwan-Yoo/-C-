#include "HTMLOutput.h"
#include <iostream>
#include <iomanip>
//25_24
#include "MyException.h"
using namespace std;

// ������
// filename : HTML ���� �̸�
// ������ ���� �����ϰ�, �⺻���� HTML�±׸� ���Ͽ� ��ִ´�.
HTMLOutput::HTMLOutput(STR filename)
{
	columns = 0;

	// ������ ���� �⺻ �±׸� �߰��Ѵ�.
	fout.open(filename.c_str());

	// ������ ���µ� ������ ��� ���ܸ� ������.
	if (false == fout.is_open())
		throw MyException(filename + "�� �� �� �����ϴ�.");

	fout << "<HTML><HEAD><TITLE>IT ��δ밣 C++ ������Ʈ</TITLE></HEAD><BODY><CENTER>";
}

// �Ҹ���
HTMLOutput::~HTMLOutput()
{
	// ������ �±׸� �ְ�
	// ������ �ݴ´�.

	fout << "</CENTER></BODY></HTML>";
	fout.close();
}

// ǥ�� ����ϱ� �����Ѵ�.
// title : ǥ�� ����
// ���ڷ� ���� ���ڿ��� ����ó�� ���.
// ���̺��� �����ϴ� �±׸� ���Ͽ� ����Ѵ�.
void HTMLOutput::BeginTable(STR title)
{
	// Ÿ��Ʋ�� ����Ѵ�.
	fout << "<H3>" << title << "</H3>";

	// ���̺� ���� �±׸� �ִ´�.
	fout << "<TABLE bgcolor='slategray' cellspacing='1' cellpadding='4' border='0'>";
}

// ǥ�� ����� ����Ѵ�.
// headers : �����
// numbers : ����� ����
// ���̺� ���� �߰��ϴ� �±׿� ���ڷ� ���޹��� ���ڿ����� ����Ѵ�.
void HTMLOutput::PutHeader(string headers[], int number)
{
	// ����� ������ �����Ѵ�.
	columns = number;

	// �±׿� �Բ� ����� �����Ѵ�.
	fout << "<TR bgcolor='#e0e0ff' align='center'>";
	for (int i = 0; i < number; ++i)
		fout << "<TD>" << headers[i] << "</TD>";
	fout << "</TR>";
}

// ǥ�� ���ڵ带 ����Ѵ�.
// record : ���ڵ�. �� ����� ����Ÿ�� �ǹ��Ѵ�.
void HTMLOutput::PutRecord(string record[])
{
	// �±׿� �Բ� ���ڵ带 �����Ѵ�.
	// ���ڵ带 ����Ѵ�.
	fout << "<TR bgcolor='white' align='right'>";
	for (int i = 0; i < columns; ++i)
		fout << "<TD>" << record[i] << "</TD>";
	fout << "</TR>";
}

// ǥ �׸��⸦ ��ģ��.
void HTMLOutput::EndTable()
{
	// ���̺� ���� �±׸� �ִ´�.
	fout << "</TABLE>";
}

// ȭ�鿡 ���ڿ��� ����Ѵ�.
// text : ���ڿ�
void HTMLOutput::Write(STR text)
{
	// ���ڿ��� ����Ѵ�.
	fout << "<P>" << text << "</P>";
}
