#include "menu.h" //MENU ����ü�� ����ϱ� ����
#include <iostream>
using namespace std;

//�޴��� �����ְ�, ���� ���� ��ȯ�Ѵ�.
MENU ShowMenu() {
	//�ùٸ� �޴��� �� ������ �ݺ��Ѵ�.
	while (1) {
		//�޴� �����ֱ�
		cout << "\n------ �޴� ------\n";
		cout << "1. �л� ���� �߰�\n";
		cout << "2. ��ü ���� ����\n";
		cout << "Q. ���α׷� ����\n";
		cout << "------------------\n\n";
		cout << "���ϴ� �۾��� ��ȣ�� �Է��ϼ��� : ";

		//�۾� �Է� �ޱ�
		char select;
		cin >> select;

		switch (select) { //������� �Է��� MENU����ü�� �ɺ��� �ٲ㼭 ��ȯ.
		case '1':
			return MENU_ADD_STUDENT;
		case '2':
			return MENU_SHOW_ALL;
		case 'q':
		case 'Q':
			return MENU_QUIT;
		default : //�߸� �Է��� ���� ��� �ٽ� �ݺ��ϱ����� break;�� switch�� ������.
			//�� ���� ����
			cout << "\n�ùٸ� ���� �Է����ּ���.\n";
			break;
		}
	}
	//�� ������ ����� �������� �ʴ´�.
	//� ���� while����� ���������� ���ϱ� ����.
	//��ǻ�Ͱ� ���� �޽����� ����ϴ� ���� �����ϱ� ���� �ƹ����̳� ��ȯ�ϰ� �������.
	return MENU_QUIT;
}