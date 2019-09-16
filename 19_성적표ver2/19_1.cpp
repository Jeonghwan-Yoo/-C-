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

int main() {
	//100명의 정보를 보관할 수 있는 배열 정의
	//이렇게 하는 것이 이해하기 보다 쉽다.
	const int MAX_STUDENTS = 100;
	Student students[MAX_STUDENTS];

	float TotalAve = 0.0f; //전체 평균
	int NumberOfStudent = 0; //현재까지 입력된 학생 수

	// 계속해서 메뉴를 보여준다.
	while (1)
	{
		// 메뉴 보여주기
		cout << "\n------ 메뉴 ------\n";
		cout << "1. 학생 성적 추가\n";
		cout << "2. 전체 성적 보기\n";
		cout << "Q. 프로그램 종료\n";
		cout << "------------------\n\n";
		cout << "원하는 작업의 번호를 입력하세요 : ";

		// 작업 입력받기
		char select;
		cin >> select;

		// 선택된 값에 따라서 처리
		switch (select)
		{
		case '1':
			// 학생 성적 추가
		{
			// 100명 모두 입력됐으면 무시
			if (MAX_STUDENTS == NumberOfStudent)
			{
				cout << "\n더 이상 입력할 수 없습니다.\n";
				break;
			}

			// 소스 코드를 간결하게 하기 위해서 사용할 변수를 레퍼런스로 가리킨다.
			Student& std = students[NumberOfStudent];

			// 해당 학생의 학생번호를 자동으로 입력한다.
			std.sNo = NumberOfStudent + 1;

			// 해당 학생의 이름, 국영수 점수를 입력받는다.
			cout << "이름(공백없이) 국어, 영어, 수학 점수를 입력하세요 : \n";
			cin >> std.name >> std.kor >> std.eng >> std.math;

			// 개인 평균을 계산한다.
			std.ave = float(std.kor + std.eng + std.math) / 3.0f;

			// 기존값을 사용해서 새로운 전체 평균을 계산한다.
			const int current = NumberOfStudent + 1;// 현재까지 입력받은 학생 수
			const int prev = NumberOfStudent;		// 조금 전까지 입력받은 학생 수

			TotalAve = (TotalAve * prev / current) + (std.ave / current);

			// 입력받은 학생 수를 증가시킨다.
			NumberOfStudent++;

			// 작업의 성공을 알린다.
			cout << "\n학생 성적이 올바르게 입력되었습니다.\n";

			break;
		}
		case '2':
			// 전체 성적 보기
		{
			// 실수 출력시에 소수점 이하 두 자리만 표시되도록 한다.
			cout.precision(2);
			cout << fixed;

			// 타이틀 부분을 출력한다.
			cout << "\n           < 전체 성적 보기 >";
			cout << "\n   학번  이름  국어 영어 수학   평균\n";

			// 입력된 학생 수만큼 반복한다.
			for (int i = 0; i < NumberOfStudent; ++i)
			{
				// 소스 코드를 간결하게 하기 위해서 사용할 변수를 레퍼런스로 가리킨다.
				// 값을 읽기만 할거이므로 const이용.
				const Student& std = students[i];

				// 해당 학생의 정보를 출력한다.
				cout << setw(7) << std.sNo << setw(7) << std.name;
				cout << setw(5) << std.kor << setw(5) << std.eng;
				cout << setw(5) << std.math << setw(7) << std.ave << "\n";
			}

			// 전체 평균을 출력한다.
			cout << "\n전체 평균 = " << TotalAve << "\n";

			break;
		}
		case 'Q':
		case 'q':
			// 종료
			cout << "\n프로그램을 종료합니다.\n";
			return 0;
		default:
			// 그 외의 선택
			cout << "\n올바른 값을 입력해주세요.\n";
			break;
		}

	}

	return 0;
}