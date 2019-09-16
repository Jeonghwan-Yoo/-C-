#ifndef HTMLWRITER_H
#define HTMLWRITER_H

//DocWriterŬ������ ��ӹޱ� ���ؼ��� ��������� ���Խ��Ѿ� �Ѵ�.
#include "DocWriter.h"

class HTMLWriter : public DocWriter { //����ϴ� ��. ���Ǵ�κ� public.
public:
	HTMLWriter();
	~HTMLWriter();
	//22_5 �θ� Ŭ������ ������ �����ϱ�
	//���ڰ� �ִ� �����ڸ� ȣ��. DocWriterŬ������ �����ڷ� ����.
	HTMLWriter(const string& fileName, const string& content);

	//�ؽ�Ʈ�� ���Ϸ� �����Ų��.
	void Write();

	//��Ʈ�� �����Ѵ�.
	void SetFont(const string& fontName, int fontSize, const string& fontColor);

protected:
	string _fontName;
	int _fontSize;
	string _fontColor;
};

#endif