#ifndef MENU_H
#define MENU_H

//메뉴의 종류
enum MENU { //ShowMenu()를 호출하는 함수라면 MENU열거체도 알아야한다.
	MENU_ADD_STUDENT, MENU_SHOW_ALL, MENU_QUIT
};

MENU ShowMenu();

#endif