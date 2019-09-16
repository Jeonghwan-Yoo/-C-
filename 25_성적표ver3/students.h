#ifndef STUDENTS_H
#define STUDENTS_H

//25_7
//링크드 리스트를 사용한다.
#include "list.h"

//성적 정보를 관리하는 클래스
class Students { //전체 학생을 관리함
public:
	//25_14
	//ShowAll()에서 출력 형식을 지정하기 위한 열거체
	enum FORMAT {
		CONSOLE, TEXTFILE, HTMLFILE
	};

	//기존의 Setup()과 Teardown()함수는 생성자와 소멸자로 대체했다.
	//이제 main()함수에서 프로그램의 시작과 종료시 따로 호출해줄 필요 없다.
	Students();
	~Students();

	bool AddStudent(bool general);
	//25_14에서 인자 추가
	void ShowAll(FORMAT fmt);
	//void ShowAll(); 

	//이 함수의 주소를 List객체의 생성자에 넘겨주려면 정적 멤버 함수가 되야함.
	//일반 멤버 함수로 만들면 List클래스에 주소를 넘겨줄 수 없다.
	//함수의 포인터와 멤버 함수의 포인터는 서로 다른 타입.
	static void DeleteData(void* data);

private:
	List students; //링크드 리스트
	float TotalAve; //전체 평균
	int NumberOfStudent; //현재까지 입력한 학생수
};

/*
//25_2
#include <string>
#include <iostream>
using namespace std;
//한 명의 학생에 대한 정보를 보관할 구조체
struct Student {
	int sNo; //학번
	string name; //이름
	int kor, eng, math; //국어, 영어, 수학 점수
	float ave; //평균

	//25_1
	~Student() {
		cout << "Student::~Student()\n";
	}
};

bool AddStudent();
void ShowAll();
void Setup();
void Teardown();
*/


#endif