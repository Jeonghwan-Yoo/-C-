#include "ConsoleOutput.h"
#include <iostream>
#include <iomanip>
using namespace std;

// 생성자
ConsoleOutput::ConsoleOutput()
{
	columns = 0;
}

// 소멸자
ConsoleOutput::~ConsoleOutput(){

}

// 표를 출력하기 시작한다.
// title : 표의 제목
void ConsoleOutput::BeginTable(STR title)
{
	// 제목을 출력한다.
	//25_20
	StdOut() << "\n\t\t\t" << title << "\n";
	//cout << "\n\t\t\t" << title << "\n";
}

// 표의 헤더를 출력한다.
// headers : 헤더들
// numbers : 헤더의 개수
// columns멤버 변수에 이 항목들의 개수를 보관하고 인자로 넘어온 배열에
// 보관한 문자열들을 차례로 출력한다.
void ConsoleOutput::PutHeader(string headers[], int number)
{
	// 헤더의 개수를 보관한다.
	columns = number;

	// 헤더를 그려준다.
	for (int i = 0; i < number; ++i)
		cout << setw(9) << headers[i];

	//25_20
	StdOut() << "\n";
	//cout << "\n";
}

// 표의 레코드를 출력한다.
// record : 레코드. 한 사람의 데이타를 의미한다.
// 인자로 넘어온 문자열의 배열에는 columns멤버 변수에 저장한 개수 만큼의
// 문자열이 포함되엉 있다고 가정하고 차례대로 출력.
void ConsoleOutput::PutRecord(string record[])
{
	// 레코드를 출력한다.
	for (int i = 0; i < columns; ++i)
		cout << setw(9) << record[i];

	//25_20
	StdOut() << "\n";
	//cout << "\n";
}

// 표 그리기를 마친다.
void ConsoleOutput::EndTable()
{
	// 하는 일 없음. 그냥 한 칸 띄워 준다.
	//25_20
	StdOut() << "\n";
	//cout << "\n";
}

// 화면에 문자열을 출력한다.
// text : 문자열
void ConsoleOutput::Write(STR text)
{
	//25_20
	StdOut() << text << "\n"; //cout객체를 직접사용하지 않고 StdOut() 반환값사용.
	//cout << text << "\n";
}

//25_20
// ostream 객체를 반환한다.
// 반환값 : ostream 객체인 cout을 반환한다.
ostream& ConsoleOutput::StdOut()
{
	return cout;
}