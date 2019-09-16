#ifndef HTML_OUTPUT_H
#define HTML_OUTPUT_H

#include "BaseOutput.h"
#include <fstream>
using namespace std;

// HTML 출력을 도와주는 클래스
class HTMLOutput : public BaseOutput //BaseOutput클래스를 상속 받음.
{
public:
	HTMLOutput(STR filename);
	virtual ~HTMLOutput();

	//BaseOutput클래스에서 순수 가상 함수들을 모두 오버라이드함.
	virtual void BeginTable(STR title);
	virtual void PutHeader(string headers[], int number);
	virtual void PutRecord(string record[]);
	virtual void EndTable();
	virtual void Write(STR text);

protected:
	int columns;	// 헤더의 개수
	ofstream fout;	// 파일을 관리할 객체
};

#endif
