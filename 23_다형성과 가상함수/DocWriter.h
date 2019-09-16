#ifndef DOCWRITER_H
#define DOCWRITER_H

#include <string> //stringŬ������ �������� �غ�.
using namespace std;

class DocWriter {
public:
	DocWriter();
	DocWriter(const string& fileName, const string& content);
	~DocWriter();

	//���� �̸��� ����
	void SetFileName(const string& fileName);

	//������ �ؽ�Ʈ�� ����
	void SetContent(const string& content);

	//���Ͽ� �ؽ�Ʈ�� �����Ų��.
	//23_6 �����Լ��� �����
	virtual void Write(); //virtual Ű���带 ����ؼ� �����Լ��� ����.

protected:
	string _fileName; //������ ������ ������ �̸�
	string _content; //������ ����.
};

#endif