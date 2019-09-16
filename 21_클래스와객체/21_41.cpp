#include <iostream>
#include <string>
using namespace std;

//학생 클래스
class Student {
public:
	string name; //이름
	int sNo; //학번

	void Print();
private:
	//생성자
	Student(const string& name_arg, int stdNumber);
public:
	//정적 멤버
	//정적 멤버 변수는 함수에서 학생 객체를 생성할 때 학번을 자동으로 부여. 
	static int studentNumber;
	static Student* CreateStudent(const string& name_arg);
};

int Student::studentNumber = 0;

//정적 멤버 함수 정의.
Student* Student::CreateStudent(const string& name_arg) {
	//학생 객체를 생성한다.
	Student* p = new Student(name_arg, studentNumber++);

	//새로 생성된 학생 객체 반환
	return p;
}

Student::Student(const string& name_arg, int stdNumber) {
	name = name_arg;
	sNo = stdNumber;
}

void Student::Print() {
	cout << "{name = " << name << ", Std. Num. = " << sNo << "}\n";
}

int main() {
	//학생 객체를 세 개 생성한다.
	Student* p1, *p2, *p3;
	//객체를 생성하기 위해 정적 멤버 함수를 호출한다. 그리고 주소값을 반환한다.
	p1 = Student::CreateStudent("이계희");
	p2 = Student::CreateStudent("이춘훈");
	p3 = Student::CreateStudent("윤수연");

	//생성한 학생의 정보를 출력한다.
	p1->Print();
	p2->Print();
	p3->Print();

	//객체들을 동적으로 생성했으므로 해제.
	delete p1;
	delete p2;
	delete p3;
	p1 = p2 = p3 = 0;

	return 0;
}