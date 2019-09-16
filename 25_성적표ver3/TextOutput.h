#ifndef TEXT_OUTPUT_H
#define TEXT_OUTPUT_H

#include "ConsoleOutput.h"
#include <fstream>
using namespace std;

// 텍스트 파일 출력을 도와주는 함수
// ConsoleOutput클래스를 상속받는다. ConsoleOutput은 이미 BaseOutput을 상속 받음.
class TextOutput : public ConsoleOutput
{
public:
	TextOutput(STR filename);
	virtual ~TextOutput();

	// BaseOutput의 멤버 함수들을
	// 따로 오버라이들 할 필요는 없다.

protected:
	//StdOut()만 오버라이드. ConsoleOutput클래스에서도 가상함수로 정의됨.
	virtual ostream& StdOut();

protected:
	ofstream	fout;	// 파일을 관리하는 객체
};

#endif
