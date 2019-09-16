#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H

#include <string>
#include <exception> //상속 받기 위해
using namespace std;

//이 프로젝트 사용할 예외
class MyException : public exception {
public:
	//생성자
	//msg:예외를 설명하는 문자열
	//예외를 설명할 문자열을 인자로 받아 멤버 변수 _Str에 보관한다.
	MyException(const string& msg) : _Str(msg) {

	}

	//소멸자
	virtual ~MyException() {

	}

	//예외 설명 문자열을 반환한다.
	//반환 값 : 문자열
	//what()함수를 오버라이드한다. 예외에 대한 설명 문자열을 반환하는 함수.
	//생성자에서 입력 받은 문자열을 반환한다.
	virtual const char *what() const {
		return _Str.c_str();
	}

protected:
	string _Str;
};

#endif