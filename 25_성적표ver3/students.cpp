//25_21
#include "ConsoleOutput.h"
#include "TextOutput.h"
#include "HTMLOutput.h"
//25_14
#include "BaseOutput.h"
#include <sstream>
//25_7
#include "student.h"
#include "students.h"
#include <iostream>
using namespace std;

//25_28
// 디폴트 파일이름
const char* DEFAULT_TEXT_FILENAME = "report.txt";
const char* DEFAULT_HTML_FILENAME = "report.html";


//생성자
//List의 생성자도 호출한다.
//students는 List클래스 타입의 멤버변수. 멤버 변수의 생성자를 호출하고 있다.
//List객체의 생성자에 데이터 제거 함수의 주소를 넘겨주는 부분이다.
Students::Students() : students(&Students::DeleteData) {
	//초기화
	TotalAve = 0.0f;
	NumberOfStudent = 0;
}

//소멸자
Students::~Students() {
	//따로 해줄 것이 없다.
}

//학생을 한 명 추가한다.
//반환 값:더 이상 입력할 수 없는 경우 false 반환
bool Students::AddStudent(bool general) { //26_11에서 인자가 추가됨.
	//25_27 예외처리
	Student* std = NULL; //catch에도 접근하려면 밖에 정의해야 한다.
	try {
		//인원 제한을 검사하던 코드가 없어졌다.
		//링크드 리스트를 생성하던 코드가 없어졌다.

		//26_11
		//학생 종류에 맞는 객체를 생성한다.
		//Student* std;
		if (general)
			std = new Student(NumberOfStudent + 1);
		else
			std = new EngStudent(NumberOfStudent + 1);

		//링크드 리스트에 넣기 위해 Student변수 하나를 동적으로 할당한다.
		//Student* std = new Student(NumberOfStudent + 1);

		//개인 정보를 입력 받는다.
		//사용자로부터 콘솔 창으로 학생의 정보를 입력 받는 코드는 Input()으로 이동.
		std->Input();

		//기존 값을 사용해서 새로운 전체 평균을 계산한다.
		const int current = NumberOfStudent + 1; //현재까지 입력 받은 학생 수
		const int prev = NumberOfStudent; //조금 전까지 입력 받은 학생 수

		TotalAve = (TotalAve * prev / current) + (std->GetAverage() / current);

		//입력 받은 학생 수를 증가시킨다.
		NumberOfStudent++;

		//students리스트에 새 노드를 추가한다.
		students.InsertNodeAfter(students.GetTail(), std);
	}
	catch (...) { //타입에 상관없이 모든 예외를 받는다.
		//예외가 발생하면 학생 객체를 제거하고 예외를 다시 던짐.
		delete std;
		std = NULL;

		throw;
	}

	return true;
}

//25_14 새로운 ShowAll
void Students::ShowAll(FORMAT fmt) {
	//25_28 스마트포인터를 활용한 예외를 대비
	//예외를 대비해서 스마트 포인터를 사용한다.
	//소스를 간단하게 하기 위해 타입을 새로 정의.
	//매번 auto_ptr<BaseOutput>이라고 쓰면 지저분해질 수 있다.
	typedef auto_ptr<BaseOutput> POUT;
	POUT out;
	
	//출력 형식에 맞는 객체를 생성한다.
	//out 포인터가 세 클래스 중 한 클래스의 객체를 가리킨다.
	//BaseOutput* out;
	
	//25_28 (POUT)추가 및 FILENAME 수정
	//fmt인자의 값에 따라 객체를 생성하고 out변수에 그 주소를 담는다.
	//이 때 POUT타입으로 명시적인 형변환을 해줄 필요가 있다.
	if (TEXTFILE == fmt)
		out = (POUT)new TextOutput(DEFAULT_TEXT_FILENAME);
	else if (HTMLFILE == fmt)
		out = (POUT)new HTMLOutput(DEFAULT_HTML_FILENAME);
	else
		out = (POUT)new ConsoleOutput;

	//성적표의 출력을 시작한다.
	out->BeginTable("< 전체 성적 보기 >");

	//헤더 부분을 출력한다.
	string header[7] = { "학번", "이름", "국어", "영어", "수학", "고급영어", 
		"평균" };
	out->PutHeader(header, 7);

	//리스트에 있는 모든 학생의 정보를 출력한다.
	Node* current = students.GetHead()->GetNext();
	while (current != students.GetHead()) {
		//현재 노드의 데이터를 꺼내온다.
		const Student* std = (Student*)current->GetData();

		//개인 성적 정보를 출력한다.
		//출력 객체를 인자로 넘긴다.
		//Student::Show()나 EngStudent::Show()는 이제 BaseOutput&타입 인자.
		std->Show(*out);

		//다음 노드를 가리킨다.
		current = current->GetNext();
	}

	//성적표의 출력을 마친다.
	out->EndTable(); //출력 객체에 성적표 출력의 끝을 알린다.

	//전체 평균 정보를 하나의 문자열로 만든다.
	stringstream ss;
	ss.precision(2);
	ss << fixed;
	ss << "전체 평균 = " << TotalAve;

	//출력 객체에 문자열을 보낸다.
	out->Write(ss.str());

	//25_28
	// 스마트 포인터를 사용했으므로
	// out 객체를 따로 제거해줄 필요 없다.

	//출력 객체를 제거한다.
	//BaseOutput클래스의 소멸자가 가상함수기 때문에 출력 객체의 타입에 맞는 소멸자.
	//delete out;
	//out = NULL;

}

/*
//전체 성적을 보여준다.
void Students::ShowAll() {
	//실수 출력 시에 소수점 이하 두 자리만 표시하게 한다.
	cout.precision(2);
	cout << fixed;

	//타이틀 부분을 출력한다.
	cout << "\n           < 전체 성적 보기 >";
	//25_12 고급영어 추가
	cout << "\n   학번  이름  국어 영어 수학 고급영어   평균\n";
	//cout << "\n   학번  이름  국어 영어 수학   평균\n";

	//리스트에 있는 모든 학생의 정보를 출력한다.
	Node* current = students.GetHead()->GetNext();
	while (current != students.GetHead()) {
		//현재 노드의 데이터를 꺼내온다.
		const Student* std = (Student*)current->GetData();

		//개인 성적 정보를 출력한다.
		//화면에 학생의 정보를 출력하는 부부의 코드가 Show()로 이동.
		std->Show(); //다형성에 의해 객체의 타입에 맞는 Show()함수를 호출.

		//다음 노드를 가리킨다.
		current = current->GetNext();
	}

	//전체 평균을 출력한다.
	cout << "\n전체 평균 = " << TotalAve << "\n";
}
*/


//링크드 리스트의 데이터 제거용 함수
//링크드 리스트가 노드의 데이터를 제거할 때 이 함수를 호출한다.
void Students::DeleteData(void* data) {
	//Student 구조체를 바꿔서 제거한다.
	delete (Student*)data;
}

/*
#include "students.h"
#include "list.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//25_3
//한 명의 학생에 대한 정보를 보관할 구조체
struct Student {
	int sNo; //학번
	string name; //이름
	int kor, eng, math; //국어, 영어, 수학 점수
	float ave; //평균
};

//배열 대신에 링크드 리스트를 사용해서 구조체를 보관한다.
//학생의 수도 제한이 없어진다.
List* students = NULL;

float TotalAve = 0.0f; //전체 평균
int NumberOfStudent = 0; //현재까지 입력된 학생 수

//학생을 한 명 추가한다.
//반환 값 : 더 이상 입력할 수 없는 경우 false 반환
bool AddStudent() {

	//링크드 리스트에 넣기 위해서 Student 변수를 하나 동적으로 할당한다.
	Student* std = new Student;

	std->sNo = NumberOfStudent + 1;

	//해당 학생의 이름, 국어, 영어, 수학 점수를 입력 받는다.
	cout << "이름(공백없이) 국어, 영어, 수학 점수를 입력하세요 : \n";

	cin >> std->name >> std->kor >> std->eng >> std->math;

	//개인 평균을 계산한다.
	std->ave = float(std->kor + std->eng + std->math) / 3.0f;


	//기존 값을 사용해서 새로운 전체 평균을 계산한다.
	const int current = NumberOfStudent + 1; //현재까지 입력 받은 학생 수
	const int prev = NumberOfStudent; //조금 전까지 입력 받은 학생 수

	TotalAve = (TotalAve * prev / current) + (std->ave / current);


	//입력 받은 학생 수를 증가시킨다.
	NumberOfStudent++;

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

	//전체 평균을 출력한다.
	cout << "\n전체 평균 = " << TotalAve << "\n";
}

//25_3
//링크드 리스트의 데이터 제거용 함수
//링크드 리스트가 노드의 데이터를 제거할 때 이 함수를 호출한다.
void DeleteData(void* data) {
	//Student 구조체를 바꿔서 제거한다.
	//우리는 인자 data에 Student구조체 변수의 주소가 담겨있다는 사실을 안다.
	delete (Student*)data;
}

//초기화한다.
//다른 함수를 호출하기 전에 반드시 이 함수를 호출해야 한다.
//main()함수에 의해 프로그램이 시작될 때 호출.
void Setup() {
	//25_3
	//리스트를 생성한다.
	//데이터 제거 함수를 인자로 넘겨준다.
	//링크드 리스트를 생성할 때 앞에 만든 DeleteData()함수 주소를 넘겨준다.
	//링크드 리스트는 함수의 포인터를 사용해서 이 주소를 보관해둘 것이다.
	students = CreateList(&DeleteData);

	//리스트를 생성한다.
	//students = CreateList();
}

//사용한 리소스를 정리한다.
//프로그램을 종료하기전에 반드시 이 함수를 호출해야 메모리가 올바르게 해제 된다.
void Teardown() {
	//리스트를 정리한다.
	RemoveList(students, true);
}

*/


