#ifndef MENU_H
#define MENU_H

//�޴��� ����
//26_21 MENU_SHOW_ALL MENU_SAVE_TEXT MENU_SAVE_HTML�߰�
//26_10 MENU_ADD_STUDENT_ENG�߰�
enum MENU { //ShowMenu()�� ȣ���ϴ� �Լ���� MENU����ü�� �˾ƾ��Ѵ�.
	MENU_ADD_STUDENT, MENU_ADD_STUDENT_ENG, MENU_SHOW_ALL,
	MENU_SAVE_TEXT, MENU_SAVE_HTML, MENU_QUIT
};

MENU ShowMenu();

#endif