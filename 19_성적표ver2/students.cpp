#include "students.h"
#include "list.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//한 명의 학생에 대한 정보를 보관할 구조체
struct Student {
	int sNo; //학번
	string name; //이름
	int kor, eng, math; //국어, 영어, 수학 점수
	float ave; //평균
};

//19_15
//배열 대신에 링크드 리스트를 사용해서 구조체를 보관한다.
//학생의 수도 제한이 없어진다.
List* students = NULL;

//100명의 정보를 보관할 수 있는 배열을 정의
//밖에서 정의한 변수는 프로그램을 시작할 때 생성하고, 프로그램을 종료할 때 소멸합니다.
//const int MAX_STUDENTS = 100;
//Student students[MAX_STUDENTS];

float TotalAve = 0.0f; //전체 평균
int NumberOfStudent = 0; //현재까지 입력된 학생 수

//학생을 한 명 추가한다.
//반환 값 : 더 이상 입력할 수 없는 경우 false 반환
bool AddStudent() {

	//100명 모두 입력됐는지 확인
	//if (MAX_STUDENTS == NumberOfStudent)
	//	return false;

	//소스 코드를 간결하게 하기 위해서 사용할 변수를 레퍼런스로 가리킨다.
	//Student& std = students[NumberOfStudent];

	//19_16
	//링크드 리스트에 넣기 위해서 Student 변수를 하나 동적으로 할당한다.
	Student* std = new Student;

	//해당 학생의 학생번호를 자동으로 입력한다.
	//std.sNo = NumberOfStudent + 1;

	//19_16
	std->sNo = NumberOfStudent + 1;

	//해당 학생의 이름, 국어, 영어, 수학 점수를 입력 받는다.
	cout << "이름(공백없이) 국어, 영어, 수학 점수를 입력하세요 : \n";
	//cin >> std.name >> std.kor >> std.eng >> std.math;
	//19_16
	cin >> std->name >> std->kor >> std->eng >> std->math;

	//개인 평균을 계산한다.
	//std.ave = float(std.kor + std.eng + std.math) / 3.0f;
	//19_16
	std->ave = float(std->kor + std->eng + std->math) / 3.0f;


	//기존 값을 사용해서 새로운 전체 평균을 계산한다.
	const int current = NumberOfStudent + 1; //현재까지 입력 받은 학생 수
	const int prev = NumberOfStudent; //조금 전까지 입력 받은 학생 수

	//TotalAve = (TotalAve * prev / current) + (std.ave / current);
	//19_16
	TotalAve = (TotalAve * prev / current) + (std->ave / current);


	//입력 받은 학생 수를 증가시킨다.
	NumberOfStudent++;

	//19_16
	//students리스트에 새 노드를 추가한다.
	//리스트의 끝에 추가한다.
	//GetTail()은 헤더 노드의 prev멤버의 값을 반환하는 간단한 함수.
	InsertNodeAfter(GetTail(students), std);

	return true;
}

//전체 성적을 보여준다.
void ShowAll() {
	//실수 출력 시에 소수점 이하 두 자리만 표시되게 한다.
	cout.precision(2);
	cout << fixed;

	//타이틀 부분을 출력한다.
	cout << "\n           < 전체 성적 보기 >";
	cout << "\n   학번  이름  국어 영어 수학   평균\n";

	//19_17
	//리스트에 있는 모든 학생의 정보를 출력한다.
	Node* current = students->head->next; //헤드 노드의 다음노드부터 탐색을 시작.
	while (current != students->head) { //현재 노드가 헤드 노드가 아닌 동안 반복.
		//현재 노드의 데이터를 꺼내온다.
		//GetData()는 입력한 노드의 data멤버의 값을 반환해주는 간단한 함수.
		const Student* std = (Student*)GetData(current);

		//해당 학생의 정보를 출력한다.
		cout << setw(7) << std->sNo << setw(7) << std->name;
		cout << setw(5) << std->kor << setw(5) << std->eng;
		cout << setw(5) << std->math << setw(7) << std->ave << "\n";

		//다음 노드를 가리킨다.
		//GetNext()는 입력한 노드의 next멤버의 값을 반환해주는 간단한 함수.
		current = GetNext(current);
	}


	////입력한 학생 수만큼 반복한다.
	//for (int i = 0;i < NumberOfStudent;++i) {
	//	//소스 코드를 간결하게 하기 위해서 사용할 변수를 레퍼런스로 가리킨다.
	//	const Student& std = students[i];

	//	//해당 학생의 정보를 출력한다.
	//	cout << setw(7) << std.sNo << setw(7) << std.name;
	//	cout << setw(5) << std.kor << setw(5) << std.eng;
	//	cout << setw(5) << std.math << setw(7) << std.ave << "\n";
	//}

	//전체 평균을 출력한다.
	cout << "\n전체 평균 = " << TotalAve << "\n";
}

//19_18
//초기화한다.
//다른 함수를 호출하기 전에 반드시 이 함수를 호출해야 한다.
void Setup() {
	//리스트를 생성한다.
	students = CreateList();
}

//사용한 리소스를 정리한다.
//프로그램을 종료하기전에 반드시 이 함수를 호출해야 메모리가 올바르게 해제 된다.
void Teardown() {
	//리스트를 정리한다.
	RemoveList(students, true);
}