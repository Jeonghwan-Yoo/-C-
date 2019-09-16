//25_21
#include "BaseOutput.h"

#include "student.h"
#include <iostream>
#include <iomanip>
//25_15
#include <sstream>
using namespace std;

//생성자
//sNo:학번
Student::Student(int sNo) {
	//학번 대입
	this->sNo = sNo;

	//나머지 멤버 초기화
	kor = eng = math = 0;
	ave = 0.0f;
}

// 소멸자
Student::~Student() {

}

//개인 정보를 입력 받는다.
//사용자로부터 직접 입력을 받아서 멤버 변수에 대입하고 평균까지 계산한다.
//자기 스스로 할 수 있는 일은 최대한 자기 힘으로 하는 것이 중요.
void Student::Input() {
	while (1) {
		//해당 학생의 이름, 국어, 영어, 수학 점수를 입력 받는다.
		cout << "이름(공백없이) 국어, 영어, 수학 점수를 입력하세요 : \n";
		cin >> name >> kor >> eng >> math;

		//문제가 없다면 반복을 끝낸다.
		//good()은 cin객체의 상태를 점검하는 함수.
		//파업상태라면 false를 반환.
		if (cin.good())
			break;

		//문제가 있다면 cin 객체를 초기화한다.
		//파업상태라면 다시 정상으로 되돌려야 한다.
		//clear()는 파업상태를 지우고 정상 상태로 만든다.
		cin.clear();
		//ignore()는 cin객체에 입력한 값들을 지워버리는 함수.
		//numeric_limits<streamsize>::max()는 모든 입력 값을 지우기 위해. <limits>
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//안내 메시지를 출력한다.
		cout << "[입력이 잘못되었습니다.]\n";
	}

	//해당 학생의 이름, 국어, 영어, 수학 점수를 입력 받는다.
	//cout << "이름(공백없이) 국어, 영어, 수학 점수를 입력하세요 : \n";
	//cin >> name >> kor >> eng >> math;

	//개인 평균을 계산한다.
	ave = float(kor + eng + math) / 3.0f;
}

//25_15
// 개인 정보를 화면에 출력한다.
// out : 출력객체
void Student::Show(BaseOutput& out) const { //BaseOutput&타입의 인자.
	//값을 모두 하나의 문자열로 만든다.
	//문자열의 배열로 변경하기가 수월해진다.
	stringstream ss;
	ss.precision(2);
	ss << fixed;
	ss << sNo << " " << name << " " << kor << " ";
	ss << eng << " " << math << " - " << ave;

	//7개의 문자열을 가진 배열을 만들고 초기화한다.
	//앞에서 만든 긴 문자열을 쪼개서 문자열의 배열을 만든다.
	string record[7];
	for (int i = 0; i < 7;i++)
		ss >> record[i];

	//학생의 정보를 출력 객체에 보낸다.
	//학생 정보가 담긴 문자열의 배열을 출력 객체에 전달하면 객체 타입의 형식으로 출력.
	out.PutRecord(record);
}

/*
//개인 정보를 화면에 출력한다.
//멤버 변수의 값을 스스로 화면에 출력.
void Student::Show() const {
	//26_9
	cout << setw(7) << sNo << setw(7) << name;
	cout << setw(5) << kor << setw(5) << eng;
	cout << setw(5) << math << setw(9) << "-";
	cout << setw(7) << ave << "\n";
	
	cout << setw(7) << sNo << setw(7) << name;
	cout << setw(5) << kor << setw(5) << eng;
	cout << setw(5) << math << setw(7) << ave << "\n";
}
*/


//접근자들
int Student::GetStdNumber() const {
	return sNo;
}
string Student::GetName() const {
	return name;
}
int Student::GetKor() const {
	return kor;
}
int Student::GetEng() const {
	return eng;
}
int Student::GetMath() const {
	return math;
}
float Student::GetAverage() const {
	return ave;
}

//25_9
//생성자
//부모의 생성자를 호출해서 Student클래스에서 상속 받은 부분을 초기화한다.
EngStudent::EngStudent(int sNo) : Student(sNo) {
	//EngStudent에만 있는 멤버를 초기화한다.
	hi_eng = 0;
}
//점수를 입력 받는다.
void EngStudent::Input() {
	//25_29 cin 예외 처리
	//정수 입력을 위한 반복
	while (1) {
		//해당 학생의 이름, 국어, 영어, 수학, 고급 영어 점수를 입력 받는다.
		cout << "이름(공백없이) 국어, 영어, 수학, 고급영어 점수를 입력하세요 : \n";
		cin >> name >> kor >> eng >> math >> hi_eng;

		//문제가 없다면 반복을 끝낸다.
		//good()은 cin객체의 상태를 점검하는 함수.
		//파업상태라면 false를 반환.
		if (cin.good())
			break;

		//문제가 있다면 cin 객체를 초기화한다.
		//파업상태라면 다시 정상으로 되돌려야 한다.
		//clear()는 파업상태를 지우고 정상 상태로 만든다.
		cin.clear();
		//ignore()는 cin객체에 입력한 값들을 지워버리는 함수.
		//numeric_limits<streamsize>::max()는 모든 입력 값을 지우기 위해. <limits>
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//안내 메시지를 출력한다.
		cout << "[입력이 잘못되었습니다.]\n";
	}
	
	//해당 학생의 이름, 국어, 영어, 수학, 고급 영어 점수를 입력 받는다.
	//cout << "이름(공백없이) 국어, 영어, 수학, 고급영어 점수를 입력하세요 : \n";
	//cin >> name >> kor >> eng >> math >> hi_eng;

	//개인 평균을 계산한다.
	ave = float(kor + eng + math + hi_eng) / 4.0f;
}

//25_15
void EngStudent::Show(BaseOutput& out) const {
	//값을 모두 하나의 문자열로 만든다.
	stringstream ss;
	ss.precision(2);
	ss << fixed;
	ss << sNo << " " << name << " " << kor << " ";
	ss << eng << " " << math << " " << hi_eng << " " << ave;

	//7개의 문자열을 가진 배열을 만들고 초기화한다.
	string record[7];
	for (int i = 0; i < 7;i++)
		ss >> record[i];

	//출력 객체에 보낸다.
	out.PutRecord(record);
}

/*
void EngStudent::Show() const {
	cout << setw(7) << sNo << setw(7) << name;
	cout << setw(5) << kor << setw(5) << eng;
	cout << setw(5) << math << setw(9) << hi_eng;
	cout << setw(7) << ave << "\n";
}
*/
