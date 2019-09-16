#ifndef CONSOLE_OUTPUT_H
#define CONSOLE_OUTPUT_H

#include "BaseOutput.h"

// 콘솔 출력을 도와주는 클래스
class ConsoleOutput : public BaseOutput
{
public:
	ConsoleOutput();
	virtual ~ConsoleOutput();

	virtual void BeginTable(STR title);
	virtual void PutHeader(string headers[], int number);
	virtual void PutRecord(string record[]);
	virtual void EndTable();
	virtual void Write(STR text);

protected:
	virtual ostream& StdOut();

protected:
	int columns;	// 헤더의 개수
};

#endif

