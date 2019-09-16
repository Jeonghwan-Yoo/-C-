#ifndef DOCWRITER_H
#define DOCWRITER_H

#include <string> //string클래스를 쓰기위한 준비.
using namespace std;

class DocWriter {
public:
	DocWriter();
	DocWriter(const string& fileName, const string& content);
	~DocWriter();

	//파일 이름을 지정
	void SetFileName(const string& fileName);

	//저장할 텍스트를 지정
	void SetContent(const string& content);

	//파일에 텍스트를 저장시킨다.
	void Write();

protected:
	string _fileName; //문서를 저장할 파일의 이름
	string _content; //문서의 내용.
};

#endif