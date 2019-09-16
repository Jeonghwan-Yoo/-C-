#include "students.h" //함수들의 원형을 포함하고 있다.
#include "menu.h"
#include <iostream>
using namespace std;

int main() {

	// 초기화한다.
	//Setup();

	//26_10
	//Students 객체를 만든다.
	Students s;

	//프로그램이 종료할 때까지 메뉴를 보여주고 작업을 처리한다.
	while (1) {
		//25_25 예외 처리
		try {
			//메뉴를 보여준다.
			MENU select;
			select = ShowMenu(); //보여주고 사용자로부터 입력을 받는다. 열거체를 사용.

			//선택한 값에 따라서 처리
			switch (select) {
			case MENU_ADD_STUDENT:
				//26_10
			case MENU_ADD_STUDENT_ENG: {
				//학생 성적 추가
				//학생 성적 추가 함수를 호출한다.
				//26_10
				//일반 학생이라면 true를 인자로 넘긴다.
				bool succeeded;
				//bool 타입의 인자를 넘겨주게 수정.
				//true는 일반 학생의 추가, false는 고급 학생의 추가.
				succeeded = s.AddStudent((MENU_ADD_STUDENT == select ? true : false));
				//succeeded = AddStudent(); //학생의 정보를 입력받아 보관한다. 성공여부 반환.

				//결과를 알린다.
				if (succeeded)
					cout << "\n학생 성적이 올바르게 입력되었습니다.\n";
				else
					cout << "\n더 이상 입력할 수 없습니다.\n";

				break;
			}
			case MENU_SHOW_ALL: {
				//25_21 인자추가
				//25_10
				//전체 성적 보기 함수를 호출한다.
				s.ShowAll(Students::CONSOLE);

				//전체 성적 보기
				//전체 성적 보기 함수를 호출한다.
				//ShowAll();

				break;
			}
								//25_21 TEXT, HTML추가.
			case MENU_SAVE_TEXT:
				// 텍스트 파일로 전체 성적 저장
			{
				// 전체 성적 보기 함수를 호출한다.
				s.ShowAll(Students::TEXTFILE);

				cout << "\n텍스트 파일이 저장되었습니다.\n";
				break;
			}
			case MENU_SAVE_HTML:
				// HTML 파일로 전체 성적 저장
			{
				// 전체 성적 보기 함수를 호출한다.
				s.ShowAll(Students::HTMLFILE);

				cout << "\nHTML 파일이 저장되었습니다.\n";
				break;
			}
			case MENU_QUIT:
				//종료

				//25_10이후로 정리할 필요 없어짐.
				//사용한 리소스를 정리한다.
				//Teardown();

				cout << "\n프로그램을 종료합니다.\n";
				return 0;
			}
		}
		catch (exception& e) { //exception + MyException.
			//예외 내용을 출력하고 계속 진행한다.
			cout << "\n[ 다음과 같은 문제가 발생했습니다 ]\n";
			cout << "=> " << e.what() << "\n\n";
		}
	}
	return 0;
}