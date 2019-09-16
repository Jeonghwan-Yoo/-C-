#include "ConsoleOutput.h"
#include <iostream>
#include <iomanip>
using namespace std;

// ������
ConsoleOutput::ConsoleOutput()
{
	columns = 0;
}

// �Ҹ���
ConsoleOutput::~ConsoleOutput(){

}

// ǥ�� ����ϱ� �����Ѵ�.
// title : ǥ�� ����
void ConsoleOutput::BeginTable(STR title)
{
	// ������ ����Ѵ�.
	//25_20
	StdOut() << "\n\t\t\t" << title << "\n";
	//cout << "\n\t\t\t" << title << "\n";
}

// ǥ�� ����� ����Ѵ�.
// headers : �����
// numbers : ����� ����
// columns��� ������ �� �׸���� ������ �����ϰ� ���ڷ� �Ѿ�� �迭��
// ������ ���ڿ����� ���ʷ� ����Ѵ�.
void ConsoleOutput::PutHeader(string headers[], int number)
{
	// ����� ������ �����Ѵ�.
	columns = number;

	// ����� �׷��ش�.
	for (int i = 0; i < number; ++i)
		cout << setw(9) << headers[i];

	//25_20
	StdOut() << "\n";
	//cout << "\n";
}

// ǥ�� ���ڵ带 ����Ѵ�.
// record : ���ڵ�. �� ����� ����Ÿ�� �ǹ��Ѵ�.
// ���ڷ� �Ѿ�� ���ڿ��� �迭���� columns��� ������ ������ ���� ��ŭ��
// ���ڿ��� ���ԵǾ� �ִٰ� �����ϰ� ���ʴ�� ���.
void ConsoleOutput::PutRecord(string record[])
{
	// ���ڵ带 ����Ѵ�.
	for (int i = 0; i < columns; ++i)
		cout << setw(9) << record[i];

	//25_20
	StdOut() << "\n";
	//cout << "\n";
}

// ǥ �׸��⸦ ��ģ��.
void ConsoleOutput::EndTable()
{
	// �ϴ� �� ����. �׳� �� ĭ ��� �ش�.
	//25_20
	StdOut() << "\n";
	//cout << "\n";
}

// ȭ�鿡 ���ڿ��� ����Ѵ�.
// text : ���ڿ�
void ConsoleOutput::Write(STR text)
{
	//25_20
	StdOut() << text << "\n"; //cout��ü�� ����������� �ʰ� StdOut() ��ȯ�����.
	//cout << text << "\n";
}

//25_20
// ostream ��ü�� ��ȯ�Ѵ�.
// ��ȯ�� : ostream ��ü�� cout�� ��ȯ�Ѵ�.
ostream& ConsoleOutput::StdOut()
{
	return cout;
}