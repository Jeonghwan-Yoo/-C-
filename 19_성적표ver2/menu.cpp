#include "menu.h" //MENU 열거체를 사용하기 위해
#include <iostream>
using namespace std;

//메뉴를 보여주고, 선택 값을 반환한다.
MENU ShowMenu() {
	//올바른 메뉴를 고를 때까지 반복한다.
	while (1) {
		//메뉴 보여주기
		cout << "\n------ 메뉴 ------\n";
		cout << "1. 학생 성적 추가\n";
		cout << "2. 전체 성적 보기\n";
		cout << "Q. 프로그램 종료\n";
		cout << "------------------\n\n";
		cout << "원하는 작업의 번호를 입력하세요 : ";

		//작업 입력 받기
		char select;
		cin >> select;

		switch (select) { //사용자의 입력을 MENU열거체의 심볼로 바꿔서 반환.
		case '1':
			return MENU_ADD_STUDENT;
		case '2':
			return MENU_SHOW_ALL;
		case 'q':
		case 'Q':
			return MENU_QUIT;
		default : //잘못 입력이 들어온 경우 다시 반복하기위해 break;로 switch를 나간다.
			//그 외의 선택
			cout << "\n올바른 값을 입력해주세요.\n";
			break;
		}
	}
	//이 문장은 절대로 실행하지 않는다.
	//어떤 경우라도 while명령을 빠져나오지 못하기 때문.
	//컴퓨터가 오류 메시지를 출력하는 것을 방지하기 위해 아무값이나 반환하게 만들었다.
	return MENU_QUIT;
}