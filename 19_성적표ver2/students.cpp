#include "students.h"
#include "list.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//�� ���� �л��� ���� ������ ������ ����ü
struct Student {
	int sNo; //�й�
	string name; //�̸�
	int kor, eng, math; //����, ����, ���� ����
	float ave; //���
};

//19_15
//�迭 ��ſ� ��ũ�� ����Ʈ�� ����ؼ� ����ü�� �����Ѵ�.
//�л��� ���� ������ ��������.
List* students = NULL;

//100���� ������ ������ �� �ִ� �迭�� ����
//�ۿ��� ������ ������ ���α׷��� ������ �� �����ϰ�, ���α׷��� ������ �� �Ҹ��մϴ�.
//const int MAX_STUDENTS = 100;
//Student students[MAX_STUDENTS];

float TotalAve = 0.0f; //��ü ���
int NumberOfStudent = 0; //������� �Էµ� �л� ��

//�л��� �� �� �߰��Ѵ�.
//��ȯ �� : �� �̻� �Է��� �� ���� ��� false ��ȯ
bool AddStudent() {

	//100�� ��� �Էµƴ��� Ȯ��
	//if (MAX_STUDENTS == NumberOfStudent)
	//	return false;

	//�ҽ� �ڵ带 �����ϰ� �ϱ� ���ؼ� ����� ������ ���۷����� ����Ų��.
	//Student& std = students[NumberOfStudent];

	//19_16
	//��ũ�� ����Ʈ�� �ֱ� ���ؼ� Student ������ �ϳ� �������� �Ҵ��Ѵ�.
	Student* std = new Student;

	//�ش� �л��� �л���ȣ�� �ڵ����� �Է��Ѵ�.
	//std.sNo = NumberOfStudent + 1;

	//19_16
	std->sNo = NumberOfStudent + 1;

	//�ش� �л��� �̸�, ����, ����, ���� ������ �Է� �޴´�.
	cout << "�̸�(�������) ����, ����, ���� ������ �Է��ϼ��� : \n";
	//cin >> std.name >> std.kor >> std.eng >> std.math;
	//19_16
	cin >> std->name >> std->kor >> std->eng >> std->math;

	//���� ����� ����Ѵ�.
	//std.ave = float(std.kor + std.eng + std.math) / 3.0f;
	//19_16
	std->ave = float(std->kor + std->eng + std->math) / 3.0f;


	//���� ���� ����ؼ� ���ο� ��ü ����� ����Ѵ�.
	const int current = NumberOfStudent + 1; //������� �Է� ���� �л� ��
	const int prev = NumberOfStudent; //���� ������ �Է� ���� �л� ��

	//TotalAve = (TotalAve * prev / current) + (std.ave / current);
	//19_16
	TotalAve = (TotalAve * prev / current) + (std->ave / current);


	//�Է� ���� �л� ���� ������Ų��.
	NumberOfStudent++;

	//19_16
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

	//19_17
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


	////�Է��� �л� ����ŭ �ݺ��Ѵ�.
	//for (int i = 0;i < NumberOfStudent;++i) {
	//	//�ҽ� �ڵ带 �����ϰ� �ϱ� ���ؼ� ����� ������ ���۷����� ����Ų��.
	//	const Student& std = students[i];

	//	//�ش� �л��� ������ ����Ѵ�.
	//	cout << setw(7) << std.sNo << setw(7) << std.name;
	//	cout << setw(5) << std.kor << setw(5) << std.eng;
	//	cout << setw(5) << std.math << setw(7) << std.ave << "\n";
	//}

	//��ü ����� ����Ѵ�.
	cout << "\n��ü ��� = " << TotalAve << "\n";
}

//19_18
//�ʱ�ȭ�Ѵ�.
//�ٸ� �Լ��� ȣ���ϱ� ���� �ݵ�� �� �Լ��� ȣ���ؾ� �Ѵ�.
void Setup() {
	//����Ʈ�� �����Ѵ�.
	students = CreateList();
}

//����� ���ҽ��� �����Ѵ�.
//���α׷��� �����ϱ����� �ݵ�� �� �Լ��� ȣ���ؾ� �޸𸮰� �ùٸ��� ���� �ȴ�.
void Teardown() {
	//����Ʈ�� �����Ѵ�.
	RemoveList(students, true);
}