#include <iostream>
using namespace std;

int main() {
	//개인 정보를 보관한다.
	int class_number = 5; //반
	int student_number = 45; //번호
	
	//국어, 영어, 수학 점수를 보관한다.
	int korean_score = 90; //국어 점수
	int english_score = 100; //영어 점수
	int math_score = 80; //수학 점수

	//총점과 평균을 보관한다.
	int total_score = 270; //총점
	int average = 90; //평균

	//성적표를 출력한다.
	cout << "반 번호 국어 영어 수학 총점 평균\n";
	cout << class_number << "  " << student_number << "   " 
		<< korean_score << "   " << english_score << "  " 
		<< math_score << "   " << total_score << "  " << average << "\n";

	return 0;
}