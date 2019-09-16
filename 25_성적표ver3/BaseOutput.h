#ifndef BASE_OUTPUT_H
#define BASE_OUTPUT_H

#include <string>
using namespace std;

//소스 코드를 간결하게 하기 위해서 타입을 새로 정의한다.
typedef const string& STR;

//콘솔 출력을 도와주는 클래스
class BaseOutput {
public:
	//성적표 출력을 시작한다는 의미의 함수.
	//각 자식 클래스들은 이 함수에서 필요한 준비 작업을 하게 된다.
	virtual void BeginTable(STR title) = 0;
	//헤더를 출력하는 용도의 함수.
	//인자로는 문자열의 배열과 배열의 크기를 전달.
	virtual void PutHeader(string headers[], int number) = 0;
	//학생의 정보를 출력하는 용도의 함수.
	//인자로는 각 항목의 값을 문자열의 배열로 전달.
	virtual void PutRecord(string record[]) = 0;
	//성적표 출력을 끝낸다는 의미의 함수.
	//각 자식 클래스들은 이 함수에서 필요한 마무리 작업을 하게 된다.
	virtual void EndTable() = 0;
	//한 줄의 문자열을 출력하는 함수이다.
	//각 자식 클래스들은 자신의 특징에 맞게 이 문자열을 출력.
	virtual void Write(STR text) = 0;

	//자식 클래스들의 소멸자가 호출되는 것을 보장하기 위해 소멸자를 가상 함수로.
	virtual ~BaseOutput() {

	}
};

#endif