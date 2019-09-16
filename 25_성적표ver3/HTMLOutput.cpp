#include "HTMLOutput.h"
#include <iostream>
#include <iomanip>
//25_24
#include "MyException.h"
using namespace std;

// 생성자
// filename : HTML 파일 이름
// 파일을 새로 생성하고, 기본적인 HTML태그를 파일에 써넣는다.
HTMLOutput::HTMLOutput(STR filename)
{
	columns = 0;

	// 파일을 열고 기본 태그를 추가한다.
	fout.open(filename.c_str());

	// 파일을 여는데 실패한 경우 예외를 던진다.
	if (false == fout.is_open())
		throw MyException(filename + "을 열 수 없습니다.");

	fout << "<HTML><HEAD><TITLE>IT 백두대간 C++ 프로젝트</TITLE></HEAD><BODY><CENTER>";
}

// 소멸자
HTMLOutput::~HTMLOutput()
{
	// 마무리 태그를 넣고
	// 파일을 닫는다.

	fout << "</CENTER></BODY></HTML>";
	fout.close();
}

// 표를 출력하기 시작한다.
// title : 표의 제목
// 인자로 받은 문자열을 제목처럼 출력.
// 테이블을 시작하는 태그를 파일에 출력한다.
void HTMLOutput::BeginTable(STR title)
{
	// 타이틀을 출력한다.
	fout << "<H3>" << title << "</H3>";

	// 테이블 시작 태그를 넣는다.
	fout << "<TABLE bgcolor='slategray' cellspacing='1' cellpadding='4' border='0'>";
}

// 표의 헤더를 출력한다.
// headers : 헤더들
// numbers : 헤더의 개수
// 테이블에 행을 추가하는 태그와 인자로 전달받은 문자열들을 출력한다.
void HTMLOutput::PutHeader(string headers[], int number)
{
	// 헤더의 개수를 보관한다.
	columns = number;

	// 태그와 함께 헤더를 삽입한다.
	fout << "<TR bgcolor='#e0e0ff' align='center'>";
	for (int i = 0; i < number; ++i)
		fout << "<TD>" << headers[i] << "</TD>";
	fout << "</TR>";
}

// 표의 레코드를 출력한다.
// record : 레코드. 한 사람의 데이타를 의미한다.
void HTMLOutput::PutRecord(string record[])
{
	// 태그와 함께 레코드를 삽입한다.
	// 레코드를 출력한다.
	fout << "<TR bgcolor='white' align='right'>";
	for (int i = 0; i < columns; ++i)
		fout << "<TD>" << record[i] << "</TD>";
	fout << "</TR>";
}

// 표 그리기를 마친다.
void HTMLOutput::EndTable()
{
	// 테이블 마감 태그를 넣는다.
	fout << "</TABLE>";
}

// 화면에 문자열을 출력한다.
// text : 문자열
void HTMLOutput::Write(STR text)
{
	// 문자열을 출력한다.
	fout << "<P>" << text << "</P>";
}
