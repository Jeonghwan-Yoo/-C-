#include <iostream>
using namespace std;

//학생 정보를 갖는 구조체
struct StudentInfo {
	char name[20]; //이름
	int stdNumber; //학번
	float grade[2]; //최근 2학기 평점
};

int main() {
	//학생에 대한 정보를 보관한다.
	StudentInfo si = { "Kim Chol-Su",200121233,{3.2f,3.5f} };

	//학생의 정보를 출력해본다.
	cout << si.name << "\n";
	cout << si.stdNumber << "\n";
	cout << si.grade[0] << ", " << si.grade[1] << "\n";

	return 0;
}