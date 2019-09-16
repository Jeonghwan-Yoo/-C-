#ifndef STUDENTS_H
#define STUDENTS_H

//25_7
//��ũ�� ����Ʈ�� ����Ѵ�.
#include "list.h"

//���� ������ �����ϴ� Ŭ����
class Students { //��ü �л��� ������
public:
	//25_14
	//ShowAll()���� ��� ������ �����ϱ� ���� ����ü
	enum FORMAT {
		CONSOLE, TEXTFILE, HTMLFILE
	};

	//������ Setup()�� Teardown()�Լ��� �����ڿ� �Ҹ��ڷ� ��ü�ߴ�.
	//���� main()�Լ����� ���α׷��� ���۰� ����� ���� ȣ������ �ʿ� ����.
	Students();
	~Students();

	bool AddStudent(bool general);
	//25_14���� ���� �߰�
	void ShowAll(FORMAT fmt);
	//void ShowAll(); 

	//�� �Լ��� �ּҸ� List��ü�� �����ڿ� �Ѱ��ַ��� ���� ��� �Լ��� �Ǿ���.
	//�Ϲ� ��� �Լ��� ����� ListŬ������ �ּҸ� �Ѱ��� �� ����.
	//�Լ��� �����Ϳ� ��� �Լ��� �����ʹ� ���� �ٸ� Ÿ��.
	static void DeleteData(void* data);

private:
	List students; //��ũ�� ����Ʈ
	float TotalAve; //��ü ���
	int NumberOfStudent; //������� �Է��� �л���
};

/*
//25_2
#include <string>
#include <iostream>
using namespace std;
//�� ���� �л��� ���� ������ ������ ����ü
struct Student {
	int sNo; //�й�
	string name; //�̸�
	int kor, eng, math; //����, ����, ���� ����
	float ave; //���

	//25_1
	~Student() {
		cout << "Student::~Student()\n";
	}
};

bool AddStudent();
void ShowAll();
void Setup();
void Teardown();
*/


#endif