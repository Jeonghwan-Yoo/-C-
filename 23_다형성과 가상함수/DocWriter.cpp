#include "DocWriter.h"
#include <fstream> //���� ������۾��� ���� ofstreamŬ���� ���.
using namespace std;

DocWriter::DocWriter() {
	//���� �̸��� �ؽ�Ʈ�� ����Ʈ�� �������� ���´�.
	_fileName = "NoName.txt";
	_content = "There is no content.";
}

DocWriter::DocWriter(const string& fileName, const string& content) {
	_fileName = fileName;
	_content = content;
}

DocWriter::~DocWriter() {

}

//���� �̸��� ����
void DocWriter::SetFileName(const string& fileName) {
	_fileName = fileName;
}

//������ ����Ʈ�� ����
void DocWriter::SetContent(const string& content) {
	_content = content;
}

//���Ͽ� �ؽ�Ʈ�� �����Ų��.
void DocWriter::Write() {
	//������ ����.
	//�ϵ��ũ�� ������ �����ϰ� ������ ����� �� �ְ� �غ�.
	//_fileName�� ������ ������ �̸��� C��Ÿ���� ���ڿ��� �Ѱ���.
	ofstream of(_fileName.c_str());

	//������ ����� ����Ѵ�.
	//cout��ü�� ���ڿ��� �Ѱ��ֵ���
	of << "# Content #\n\n";

	//�ؽ�Ʈ�� �ִ� �״�� �����Ѵ�.
	//_content�� ������ ���ڿ��� ���Ͽ� ���ش�.
	//���ڿ��� �ִ� �״�� ������ HTML����Ŭ���������� HTML�������� �ٲ���.
	of << _content;
}