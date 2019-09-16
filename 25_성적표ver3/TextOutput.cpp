#include "TextOutput.h"
//25_24
#include "MyException.h"

// 생성자
TextOutput::TextOutput(STR filename)
{
	// 파일을 생성한다.
	fout.open(filename.c_str());

	//25_24
	//파일을 여는데 실패한 경우 예외를 던진다.
	//ofstream::is_open()은 파일이 열린 상태일 때 true를 반환. 아니면 false.
	if (false == fout.is_open())
		throw MyException(filename + "을 열 수 없습니다.");
}

// 소멸자
TextOutput::~TextOutput()
{
	// 파일을 닫는다.
	fout.close();
}

// ostream 객체를 반환한다.
// 반환값 : ostream 객체인 fout을 반환한다.
// StdOut()함수를 오버라이드해서 ofstream객체인 fout을 반환.
ostream& TextOutput::StdOut()
{
	return fout;
}

