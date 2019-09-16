//25_21
#include "ConsoleOutput.h"
#include "TextOutput.h"
#include "HTMLOutput.h"
//25_14
#include "BaseOutput.h"
#include <sstream>
//25_7
#include "student.h"
#include "students.h"
#include <iostream>
using namespace std;

//25_28
// ����Ʈ �����̸�
const char* DEFAULT_TEXT_FILENAME = "report.txt";
const char* DEFAULT_HTML_FILENAME = "report.html";


//������
//List�� �����ڵ� ȣ���Ѵ�.
//students�� ListŬ���� Ÿ���� �������. ��� ������ �����ڸ� ȣ���ϰ� �ִ�.
//List��ü�� �����ڿ� ������ ���� �Լ��� �ּҸ� �Ѱ��ִ� �κ��̴�.
Students::Students() : students(&Students::DeleteData) {
	//�ʱ�ȭ
	TotalAve = 0.0f;
	NumberOfStudent = 0;
}

//�Ҹ���
Students::~Students() {
	//���� ���� ���� ����.
}

//�л��� �� �� �߰��Ѵ�.
//��ȯ ��:�� �̻� �Է��� �� ���� ��� false ��ȯ
bool Students::AddStudent(bool general) { //26_11���� ���ڰ� �߰���.
	//25_27 ����ó��
	Student* std = NULL; //catch���� �����Ϸ��� �ۿ� �����ؾ� �Ѵ�.
	try {
		//�ο� ������ �˻��ϴ� �ڵ尡 ��������.
		//��ũ�� ����Ʈ�� �����ϴ� �ڵ尡 ��������.

		//26_11
		//�л� ������ �´� ��ü�� �����Ѵ�.
		//Student* std;
		if (general)
			std = new Student(NumberOfStudent + 1);
		else
			std = new EngStudent(NumberOfStudent + 1);

		//��ũ�� ����Ʈ�� �ֱ� ���� Student���� �ϳ��� �������� �Ҵ��Ѵ�.
		//Student* std = new Student(NumberOfStudent + 1);

		//���� ������ �Է� �޴´�.
		//����ڷκ��� �ܼ� â���� �л��� ������ �Է� �޴� �ڵ�� Input()���� �̵�.
		std->Input();

		//���� ���� ����ؼ� ���ο� ��ü ����� ����Ѵ�.
		const int current = NumberOfStudent + 1; //������� �Է� ���� �л� ��
		const int prev = NumberOfStudent; //���� ������ �Է� ���� �л� ��

		TotalAve = (TotalAve * prev / current) + (std->GetAverage() / current);

		//�Է� ���� �л� ���� ������Ų��.
		NumberOfStudent++;

		//students����Ʈ�� �� ��带 �߰��Ѵ�.
		students.InsertNodeAfter(students.GetTail(), std);
	}
	catch (...) { //Ÿ�Կ� ������� ��� ���ܸ� �޴´�.
		//���ܰ� �߻��ϸ� �л� ��ü�� �����ϰ� ���ܸ� �ٽ� ����.
		delete std;
		std = NULL;

		throw;
	}

	return true;
}

//25_14 ���ο� ShowAll
void Students::ShowAll(FORMAT fmt) {
	//25_28 ����Ʈ�����͸� Ȱ���� ���ܸ� ���
	//���ܸ� ����ؼ� ����Ʈ �����͸� ����Ѵ�.
	//�ҽ��� �����ϰ� �ϱ� ���� Ÿ���� ���� ����.
	//�Ź� auto_ptr<BaseOutput>�̶�� ���� ���������� �� �ִ�.
	typedef auto_ptr<BaseOutput> POUT;
	POUT out;
	
	//��� ���Ŀ� �´� ��ü�� �����Ѵ�.
	//out �����Ͱ� �� Ŭ���� �� �� Ŭ������ ��ü�� ����Ų��.
	//BaseOutput* out;
	
	//25_28 (POUT)�߰� �� FILENAME ����
	//fmt������ ���� ���� ��ü�� �����ϰ� out������ �� �ּҸ� ��´�.
	//�� �� POUTŸ������ ������� ����ȯ�� ���� �ʿ䰡 �ִ�.
	if (TEXTFILE == fmt)
		out = (POUT)new TextOutput(DEFAULT_TEXT_FILENAME);
	else if (HTMLFILE == fmt)
		out = (POUT)new HTMLOutput(DEFAULT_HTML_FILENAME);
	else
		out = (POUT)new ConsoleOutput;

	//����ǥ�� ����� �����Ѵ�.
	out->BeginTable("< ��ü ���� ���� >");

	//��� �κ��� ����Ѵ�.
	string header[7] = { "�й�", "�̸�", "����", "����", "����", "��޿���", 
		"���" };
	out->PutHeader(header, 7);

	//����Ʈ�� �ִ� ��� �л��� ������ ����Ѵ�.
	Node* current = students.GetHead()->GetNext();
	while (current != students.GetHead()) {
		//���� ����� �����͸� �����´�.
		const Student* std = (Student*)current->GetData();

		//���� ���� ������ ����Ѵ�.
		//��� ��ü�� ���ڷ� �ѱ��.
		//Student::Show()�� EngStudent::Show()�� ���� BaseOutput&Ÿ�� ����.
		std->Show(*out);

		//���� ��带 ����Ų��.
		current = current->GetNext();
	}

	//����ǥ�� ����� ��ģ��.
	out->EndTable(); //��� ��ü�� ����ǥ ����� ���� �˸���.

	//��ü ��� ������ �ϳ��� ���ڿ��� �����.
	stringstream ss;
	ss.precision(2);
	ss << fixed;
	ss << "��ü ��� = " << TotalAve;

	//��� ��ü�� ���ڿ��� ������.
	out->Write(ss.str());

	//25_28
	// ����Ʈ �����͸� ��������Ƿ�
	// out ��ü�� ���� �������� �ʿ� ����.

	//��� ��ü�� �����Ѵ�.
	//BaseOutputŬ������ �Ҹ��ڰ� �����Լ��� ������ ��� ��ü�� Ÿ�Կ� �´� �Ҹ���.
	//delete out;
	//out = NULL;

}

/*
//��ü ������ �����ش�.
void Students::ShowAll() {
	//�Ǽ� ��� �ÿ� �Ҽ��� ���� �� �ڸ��� ǥ���ϰ� �Ѵ�.
	cout.precision(2);
	cout << fixed;

	//Ÿ��Ʋ �κ��� ����Ѵ�.
	cout << "\n           < ��ü ���� ���� >";
	//25_12 ��޿��� �߰�
	cout << "\n   �й�  �̸�  ���� ���� ���� ��޿���   ���\n";
	//cout << "\n   �й�  �̸�  ���� ���� ����   ���\n";

	//����Ʈ�� �ִ� ��� �л��� ������ ����Ѵ�.
	Node* current = students.GetHead()->GetNext();
	while (current != students.GetHead()) {
		//���� ����� �����͸� �����´�.
		const Student* std = (Student*)current->GetData();

		//���� ���� ������ ����Ѵ�.
		//ȭ�鿡 �л��� ������ ����ϴ� �κ��� �ڵ尡 Show()�� �̵�.
		std->Show(); //�������� ���� ��ü�� Ÿ�Կ� �´� Show()�Լ��� ȣ��.

		//���� ��带 ����Ų��.
		current = current->GetNext();
	}

	//��ü ����� ����Ѵ�.
	cout << "\n��ü ��� = " << TotalAve << "\n";
}
*/


//��ũ�� ����Ʈ�� ������ ���ſ� �Լ�
//��ũ�� ����Ʈ�� ����� �����͸� ������ �� �� �Լ��� ȣ���Ѵ�.
void Students::DeleteData(void* data) {
	//Student ����ü�� �ٲ㼭 �����Ѵ�.
	delete (Student*)data;
}

/*
#include "students.h"
#include "list.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//25_3
//�� ���� �л��� ���� ������ ������ ����ü
struct Student {
	int sNo; //�й�
	string name; //�̸�
	int kor, eng, math; //����, ����, ���� ����
	float ave; //���
};

//�迭 ��ſ� ��ũ�� ����Ʈ�� ����ؼ� ����ü�� �����Ѵ�.
//�л��� ���� ������ ��������.
List* students = NULL;

float TotalAve = 0.0f; //��ü ���
int NumberOfStudent = 0; //������� �Էµ� �л� ��

//�л��� �� �� �߰��Ѵ�.
//��ȯ �� : �� �̻� �Է��� �� ���� ��� false ��ȯ
bool AddStudent() {

	//��ũ�� ����Ʈ�� �ֱ� ���ؼ� Student ������ �ϳ� �������� �Ҵ��Ѵ�.
	Student* std = new Student;

	std->sNo = NumberOfStudent + 1;

	//�ش� �л��� �̸�, ����, ����, ���� ������ �Է� �޴´�.
	cout << "�̸�(�������) ����, ����, ���� ������ �Է��ϼ��� : \n";

	cin >> std->name >> std->kor >> std->eng >> std->math;

	//���� ����� ����Ѵ�.
	std->ave = float(std->kor + std->eng + std->math) / 3.0f;


	//���� ���� ����ؼ� ���ο� ��ü ����� ����Ѵ�.
	const int current = NumberOfStudent + 1; //������� �Է� ���� �л� ��
	const int prev = NumberOfStudent; //���� ������ �Է� ���� �л� ��

	TotalAve = (TotalAve * prev / current) + (std->ave / current);


	//�Է� ���� �л� ���� ������Ų��.
	NumberOfStudent++;

	//students����Ʈ�� �� ��带 �߰��Ѵ�.
	//����Ʈ�� ���� �߰��Ѵ�.
	//GetTail()�� ��� ����� prev����� ���� ��ȯ�ϴ� ������ �Լ�.
	InsertNodeAfter(GetTail(students), std);

	return true;
}

//��ü ������ �����ش�.
void ShowAll() {
	//�Ǽ� ��� �ÿ� �Ҽ��� ���� �� �ڸ��� ǥ�õǰ� �Ѵ�.
	cout.precision(2);
	cout << fixed;

	//Ÿ��Ʋ �κ��� ����Ѵ�.
	cout << "\n           < ��ü ���� ���� >";
	cout << "\n   �й�  �̸�  ���� ���� ����   ���\n";

	//����Ʈ�� �ִ� ��� �л��� ������ ����Ѵ�.
	Node* current = students->head->next; //��� ����� ���������� Ž���� ����.
	while (current != students->head) { //���� ��尡 ��� ��尡 �ƴ� ���� �ݺ�.
		//���� ����� �����͸� �����´�.
		//GetData()�� �Է��� ����� data����� ���� ��ȯ���ִ� ������ �Լ�.
		const Student* std = (Student*)GetData(current);

		//�ش� �л��� ������ ����Ѵ�.
		cout << setw(7) << std->sNo << setw(7) << std->name;
		cout << setw(5) << std->kor << setw(5) << std->eng;
		cout << setw(5) << std->math << setw(7) << std->ave << "\n";

		//���� ��带 ����Ų��.
		//GetNext()�� �Է��� ����� next����� ���� ��ȯ���ִ� ������ �Լ�.
		current = GetNext(current);
	}

	//��ü ����� ����Ѵ�.
	cout << "\n��ü ��� = " << TotalAve << "\n";
}

//25_3
//��ũ�� ����Ʈ�� ������ ���ſ� �Լ�
//��ũ�� ����Ʈ�� ����� �����͸� ������ �� �� �Լ��� ȣ���Ѵ�.
void DeleteData(void* data) {
	//Student ����ü�� �ٲ㼭 �����Ѵ�.
	//�츮�� ���� data�� Student����ü ������ �ּҰ� ����ִٴ� ����� �ȴ�.
	delete (Student*)data;
}

//�ʱ�ȭ�Ѵ�.
//�ٸ� �Լ��� ȣ���ϱ� ���� �ݵ�� �� �Լ��� ȣ���ؾ� �Ѵ�.
//main()�Լ��� ���� ���α׷��� ���۵� �� ȣ��.
void Setup() {
	//25_3
	//����Ʈ�� �����Ѵ�.
	//������ ���� �Լ��� ���ڷ� �Ѱ��ش�.
	//��ũ�� ����Ʈ�� ������ �� �տ� ���� DeleteData()�Լ� �ּҸ� �Ѱ��ش�.
	//��ũ�� ����Ʈ�� �Լ��� �����͸� ����ؼ� �� �ּҸ� �����ص� ���̴�.
	students = CreateList(&DeleteData);

	//����Ʈ�� �����Ѵ�.
	//students = CreateList();
}

//����� ���ҽ��� �����Ѵ�.
//���α׷��� �����ϱ����� �ݵ�� �� �Լ��� ȣ���ؾ� �޸𸮰� �ùٸ��� ���� �ȴ�.
void Teardown() {
	//����Ʈ�� �����Ѵ�.
	RemoveList(students, true);
}

*/


