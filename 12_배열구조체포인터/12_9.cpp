#include <iostream>
using namespace std;

//학생 정보를 갖는 구조체
struct StudentInfo {
	char name[20]; //이름
	int stdNumber; //학번
	float grade[2]; //최근 2학기 평점
};

int main() {
	//5명의 학생정보를 담을 배열을 만들고
	//학생 정보를 초기화한다.
	StudentInfo stdInfos[5] = { //배열의 각 원소 초기화.
		{"Kim Chol-Su", 200121233, { 3.2f,3.5f }},
		{"Lee Chol-Su", 200223517, { 4.5f,4.5f }},
		{"Park Chol-Su", 200321131, { 1.7f,2.0f }},
		{"Yang Chol-Su", 200222289, { 0.4f,4.1f }},
		{"Yoon Chol-Su", 199921444, { 2.7f,2.8f }}
	};

	//학생의 정보를 출력해본다.
	for (int i = 0;i < 5;i++) {
		cout << stdInfos[i].name << "\n";
		cout << stdInfos[i].stdNumber << "\n";
		cout << stdInfos[i].grade[0] << ", " << stdInfos[i].grade[1] << "\n\n";
	}

	return 0;
}