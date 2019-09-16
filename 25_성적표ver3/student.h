#ifndef STUDENT_H
#define STUDENT_H

//25_15
//#include "BaseOutput.h"

#include <string>
using namespace std;

//25_16
// ConsoleOutput 클래스가
// 있다는 사실을 알려준다.
class BaseOutput;

//한 명의 학생에 대한 정보를 관리할 클래스
class Student { //Student구조체를 클래스로 만들었다.
public:
	Student(int sNo);
	//25_9 virtual
	//하나 이상의 가상 함수를 가지고 있는 클래스는 반드시 가상 함수인 소멸자필요.
	//그래야 delete연산자를 사용해 객체를 제거할 때도 알맞은 소멸자가 호출.
	virtual ~Student();
	virtual void Input();
	//25_15
	virtual void Show(BaseOutput& out) const;
	//virtual void Show() const;

	//접근자들
	int GetStdNumber() const;
	string GetName() const;
	int GetKor() const;
	int GetEng() const;
	int GetMath() const;
	float GetAverage() const;

protected:
	int sNo; //학번
	string name; //이름
	int kor, eng, math; //국어, 영어, 수학 점수
	float ave; //평균
};

//25_9
//고급 영어를 듣는 학생에 대한 정보를 관리할 클래스
class EngStudent : public Student{ //Student클래스를 상속 받음.
public:
	EngStudent(int sNo);
	//오버라이드.
	virtual void Input();
	//25_15
	virtual void Show(BaseOutput& out) const;
	//virtual void Show() const;

protected:
	int hi_eng; //고급 영어 점수를 보관할 멤버 변수.
};

#endif