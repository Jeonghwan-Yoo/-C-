#include <iostream>
using namespace std;

//'StudentInfo'라는 이름의 구조체를 정의한다.
struct StudentInfo {
	char bloodType; //혈액형
	int stdNumber; //학번
	float grade; //평점
};

int main() {
	//StudentInfo 구조체 타입의 변수 2개를 정의한다.
	StudentInfo si1;
	StudentInfo si2;

	//si1의 멤버에 값을 넣는다.
	si1.bloodType = 'O';
	si1.stdNumber = 20031128;
	si1.grade = 3.5f;


	//si2의 멤버에 값을 넣는다.
	si2.bloodType = 'A';
	si2.stdNumber = 20031219;
	si2.grade = 2.3f;

	//멤버의 값을 출력한다.
	cout << "학번 : " << si1.stdNumber << "\n";
	cout << "학점 : " << si1.grade << "\n";
	cout << "혈액형 : " << si1.bloodType << "\n\n";
	cout << "학번 : " << si2.stdNumber << "\n";
	cout << "학점 : " << si2.grade << "\n";
	cout << "혈액형 : " << si2.bloodType << "\n";

	return 0;
}