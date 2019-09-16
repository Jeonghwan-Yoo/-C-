#include "DocWriter.h"
#include <fstream> //파일 입출력작업을 위한 ofstream클래스 사용.
using namespace std;

DocWriter::DocWriter() {
	//파일 이름과 텍스트를 디폴트로 지정시켜 놓는다.
	_fileName = "NoName.txt";
	_content = "There is no content.";
}

DocWriter::DocWriter(const string& fileName, const string& content) {
	_fileName = fileName;
	_content = content;
}

DocWriter::~DocWriter() {

}

//파일 이름을 지정
void DocWriter::SetFileName(const string& fileName) {
	_fileName = fileName;
}

//저장할 덱스트를 지정
void DocWriter::SetContent(const string& content) {
	_content = content;
}

//파일에 텍스트를 저장시킨다.
void DocWriter::Write() {
	//파일을 연다.
	//하드디스크에 파일을 생성하고 내용을 써넣을 수 있게 준비.
	//_fileName에 보관된 파일의 이름을 C스타일의 문자열로 넘겨줌.
	ofstream of(_fileName.c_str());

	//간단한 헤더를 출력한다.
	//cout객체에 문자열을 넘겨주듯이
	of << "# Content #\n\n";

	//텍스트를 있는 그대로 저장한다.
	//_content에 보관한 문자열도 파일에 써준다.
	//문자열을 있는 그대로 쓰지만 HTML저장클래스에서는 HTML형식으로 바꿔줌.
	of << _content;
}