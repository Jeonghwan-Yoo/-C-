#ifndef STUDENT_H
#define STUDENT_H

//25_15
//#include "BaseOutput.h"

#include <string>
using namespace std;

//25_16
// ConsoleOutput Ŭ������
// �ִٴ� ����� �˷��ش�.
class BaseOutput;

//�� ���� �л��� ���� ������ ������ Ŭ����
class Student { //Student����ü�� Ŭ������ �������.
public:
	Student(int sNo);
	//25_9 virtual
	//�ϳ� �̻��� ���� �Լ��� ������ �ִ� Ŭ������ �ݵ�� ���� �Լ��� �Ҹ����ʿ�.
	//�׷��� delete�����ڸ� ����� ��ü�� ������ ���� �˸��� �Ҹ��ڰ� ȣ��.
	virtual ~Student();
	virtual void Input();
	//25_15
	virtual void Show(BaseOutput& out) const;
	//virtual void Show() const;

	//�����ڵ�
	int GetStdNumber() const;
	string GetName() const;
	int GetKor() const;
	int GetEng() const;
	int GetMath() const;
	float GetAverage() const;

protected:
	int sNo; //�й�
	string name; //�̸�
	int kor, eng, math; //����, ����, ���� ����
	float ave; //���
};

//25_9
//��� ��� ��� �л��� ���� ������ ������ Ŭ����
class EngStudent : public Student{ //StudentŬ������ ��� ����.
public:
	EngStudent(int sNo);
	//�������̵�.
	virtual void Input();
	//25_15
	virtual void Show(BaseOutput& out) const;
	//virtual void Show() const;

protected:
	int hi_eng; //��� ���� ������ ������ ��� ����.
};

#endif