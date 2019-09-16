#include "students.h" //�Լ����� ������ �����ϰ� �ִ�.
#include "menu.h"
#include <iostream>
using namespace std;

int main() {

	// �ʱ�ȭ�Ѵ�.
	//Setup();

	//26_10
	//Students ��ü�� �����.
	Students s;

	//���α׷��� ������ ������ �޴��� �����ְ� �۾��� ó���Ѵ�.
	while (1) {
		//25_25 ���� ó��
		try {
			//�޴��� �����ش�.
			MENU select;
			select = ShowMenu(); //�����ְ� ����ڷκ��� �Է��� �޴´�. ����ü�� ���.

			//������ ���� ���� ó��
			switch (select) {
			case MENU_ADD_STUDENT:
				//26_10
			case MENU_ADD_STUDENT_ENG: {
				//�л� ���� �߰�
				//�л� ���� �߰� �Լ��� ȣ���Ѵ�.
				//26_10
				//�Ϲ� �л��̶�� true�� ���ڷ� �ѱ��.
				bool succeeded;
				//bool Ÿ���� ���ڸ� �Ѱ��ְ� ����.
				//true�� �Ϲ� �л��� �߰�, false�� ��� �л��� �߰�.
				succeeded = s.AddStudent((MENU_ADD_STUDENT == select ? true : false));
				//succeeded = AddStudent(); //�л��� ������ �Է¹޾� �����Ѵ�. �������� ��ȯ.

				//����� �˸���.
				if (succeeded)
					cout << "\n�л� ������ �ùٸ��� �ԷµǾ����ϴ�.\n";
				else
					cout << "\n�� �̻� �Է��� �� �����ϴ�.\n";

				break;
			}
			case MENU_SHOW_ALL: {
				//25_21 �����߰�
				//25_10
				//��ü ���� ���� �Լ��� ȣ���Ѵ�.
				s.ShowAll(Students::CONSOLE);

				//��ü ���� ����
				//��ü ���� ���� �Լ��� ȣ���Ѵ�.
				//ShowAll();

				break;
			}
								//25_21 TEXT, HTML�߰�.
			case MENU_SAVE_TEXT:
				// �ؽ�Ʈ ���Ϸ� ��ü ���� ����
			{
				// ��ü ���� ���� �Լ��� ȣ���Ѵ�.
				s.ShowAll(Students::TEXTFILE);

				cout << "\n�ؽ�Ʈ ������ ����Ǿ����ϴ�.\n";
				break;
			}
			case MENU_SAVE_HTML:
				// HTML ���Ϸ� ��ü ���� ����
			{
				// ��ü ���� ���� �Լ��� ȣ���Ѵ�.
				s.ShowAll(Students::HTMLFILE);

				cout << "\nHTML ������ ����Ǿ����ϴ�.\n";
				break;
			}
			case MENU_QUIT:
				//����

				//25_10���ķ� ������ �ʿ� ������.
				//����� ���ҽ��� �����Ѵ�.
				//Teardown();

				cout << "\n���α׷��� �����մϴ�.\n";
				return 0;
			}
		}
		catch (exception& e) { //exception + MyException.
			//���� ������ ����ϰ� ��� �����Ѵ�.
			cout << "\n[ ������ ���� ������ �߻��߽��ϴ� ]\n";
			cout << "=> " << e.what() << "\n\n";
		}
	}
	return 0;
}