#include <iostream>
#include <iomanip> //칸수 제약을 거는 setw()를 사용하기 위해서.
using namespace std;

int main() {
	//최대 3명의 성적을 보관한다.
	int S1_No, S2_No, S3_No; //학번
	int S1_Kor, S2_Kor, S3_Kor; //국어점수
	int S1_Math, S2_Math, S3_Math; //수학점수
	int S1_Eng, S2_Eng, S3_Eng; //영어점수
	float S1_Ave, S2_Ave, S3_Ave; //개인평균
	float TotalAve = 0.0f; //전체 평균
	int NumberOfStudent = 0; //현재까지 입력된 학생 수

	//계속해서 메뉴를 보여준다.
	while (1) {
		//메뉴 보여주기
		cout << "\n------- 메뉴 -------\n";
		cout << "1. 학생 성적 추가\n";
		cout << "2. 전체 성적 보기\n";
		cout << "Q. 프로그램 종료\n";
		cout << "--------------------\n\n";
		cout << "원하는 작업의 번호를 입력하세요 : ";

		//작업 입력 받기
		char select;
		cin >> select;

		//선택된 값에 따라서 처리
		switch (select) {
		case '1': {
			//학생 성적 추가
			//3명 모두 입력됐으면 무기
			if (3 == NumberOfStudent) {
				cout << "\n더 이상 입력할 수 없습니다.\n";
				break;
			}

			//국어, 영어, 수학 점수를 입력 받는다.
			int Kor, Eng, Math;

			cout << "국어, 영어, 수학 점수를 입력하세요 : ";
			cin >> Kor >> Eng >> Math;

			//평균을 계산한다.
			float Ave = float(Kor + Eng + Math) / 3.0f;

			//알맞은 변수에 입력된 값을 넣는다.
			if (0 == NumberOfStudent) { //처음
				//개인 정보
				S1_No = NumberOfStudent + 1;
				S1_Kor = Kor;
				S1_Eng = Eng;
				S1_Math = Math;
				S1_Ave = Ave;

				//전체 평균
				TotalAve = S1_Ave;
			}
			else if (1 == NumberOfStudent) {
				//개인 정보
				S2_No = NumberOfStudent + 1;
				S2_Kor = Kor;
				S2_Eng = Eng;
				S2_Math = Math;
				S2_Ave = Ave;

				//전체 평균
				TotalAve = (S1_Ave + S2_Ave) / 2;
			}
			else {
				//개인 정보
				S3_No = NumberOfStudent + 1;
				S3_Kor = Kor;
				S3_Eng = Eng;
				S3_Math = Math;
				S3_Ave = Ave;

				//전체 평균
				TotalAve = (S1_Ave + S2_Ave + S3_Ave) / 3;
			}
			//입력 받은 학생 수를 증가시킨다.
			NumberOfStudent++;

			//작업의 성공을 알린다.
			cout << "\n학생 성적이 올바르게 입력되었습니다.\n";

			break;
		}

		case '2': {
			//전체 성적 보기

			//실수 출력 시에 소수점 이하 두 자리만 표시되게 한다.
			cout.precision(2);
			cout << fixed;

			//타이틀 부분을 출력한다.
			cout << "\n      < 전체 성적 보기 >";
			cout << "\n   학번 국어 영어 수학   평균\n";

			//입력된 학생 수만큼 반복한다.
			for (int i = 0;i < NumberOfStudent;++i) {
				//알맞은 학생의 정보를 출력한다.
				//각 변수를 cout객체로 보내기 전에 setw()를 먼저 보낸다.
				//출력할 때 7칸을 사용하라는 뜻.
				if (0 == i) {
					cout << setw(7) << S1_No << setw(5) << S1_Kor << setw(5);
					cout << S1_Eng << setw(5) << S1_Math << setw(7) << S1_Ave << "\n";
				}
				else if (1 == i) {
					cout << setw(7) << S2_No << setw(5) << S2_Kor << setw(5);
					cout << S2_Eng << setw(5) << S2_Math << setw(7) << S2_Ave << "\n";
				}
				else {
					cout << setw(7) << S3_No << setw(5) << S3_Kor << setw(5);
					cout << S3_Eng << setw(5) << S3_Math << setw(7) << S3_Ave << "\n";
				}
			}

			//전체 평균을 출력한다.
			cout << "\n전체 평균 = " << TotalAve << "\n";
			break;
		}

		case 'Q':
		case 'q':
			//종료
			cout << "\n프로그램을 종료합니다.\n";
			return 0;
		default:
			//그 외의 선택
			cout << "\n올바른 값을 입력해주세요.\n";
			break;
		}
	}
	return 0;
}