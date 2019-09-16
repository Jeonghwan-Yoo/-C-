#include <iostream>
#include <string>
using namespace std;

//학생 클래스
class Student {
public:
	string name; //이름
	int sNo; //학번

	//생성자, 소멸자
	Student(const string& name_arg, int stdNumber);
	~Student();
public:
	//정적 멤버들
	//student_count에 객체의 수가 보관된다.
	static int student_count;
	static void PrintStdCount();
};

//정적 멤버 변수는 보통의 멤버 변수와는 달리 별도로 클래스 외부에서 정의해야 함.
//정적 멤버 변수는 오직 하나만 생성되기 때문에 별도로 정의해주는 것.
//정적 멤버 변수
int Student::student_count = 0;

//정적 멤버 함수
void Student::PrintStdCount() {
	cout << "Student 객체 수 = " << student_count << "\n";
}

//생성자
Student::Student(const string& name_arg, int stdNumber) {
	//학생 객체의 수를 증가시킨다.
	student_count++;

	name = name_arg;
	sNo = stdNumber;
}

Student::~Student() {
	//학생 객체의 수를 감소시킨다.
	student_count--;
}

//객체를 생성하고 소멸할 때마다 student_count값이 보여주기 위한 함수.
void Func() {
	//객체 생성
	Student std1("Bill", 342);
	Student std2("James", 214);

	Student::PrintStdCount();
}

//객체를 생성하고 소멸하는 사이사이에 정적 멤버 함수를 호출해 객체의 수를 출력.
//어느 한 객체의 소유가 아니고 클래스의 소유.
int main() {
	Student::PrintStdCount();

	//객체 생성
	Student std("Jeffrey", 123);

	Student::PrintStdCount();

	//Func() 함수 호출
	Func();

	Student::PrintStdCount();

	return 0;
}