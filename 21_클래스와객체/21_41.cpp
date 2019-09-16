#include <iostream>
#include <string>
using namespace std;

//�л� Ŭ����
class Student {
public:
	string name; //�̸�
	int sNo; //�й�

	void Print();
private:
	//������
	Student(const string& name_arg, int stdNumber);
public:
	//���� ���
	//���� ��� ������ �Լ����� �л� ��ü�� ������ �� �й��� �ڵ����� �ο�. 
	static int studentNumber;
	static Student* CreateStudent(const string& name_arg);
};

int Student::studentNumber = 0;

//���� ��� �Լ� ����.
Student* Student::CreateStudent(const string& name_arg) {
	//�л� ��ü�� �����Ѵ�.
	Student* p = new Student(name_arg, studentNumber++);

	//���� ������ �л� ��ü ��ȯ
	return p;
}

Student::Student(const string& name_arg, int stdNumber) {
	name = name_arg;
	sNo = stdNumber;
}

void Student::Print() {
	cout << "{name = " << name << ", Std. Num. = " << sNo << "}\n";
}

int main() {
	//�л� ��ü�� �� �� �����Ѵ�.
	Student* p1, *p2, *p3;
	//��ü�� �����ϱ� ���� ���� ��� �Լ��� ȣ���Ѵ�. �׸��� �ּҰ��� ��ȯ�Ѵ�.
	p1 = Student::CreateStudent("�̰���");
	p2 = Student::CreateStudent("������");
	p3 = Student::CreateStudent("������");

	//������ �л��� ������ ����Ѵ�.
	p1->Print();
	p2->Print();
	p3->Print();

	//��ü���� �������� ���������Ƿ� ����.
	delete p1;
	delete p2;
	delete p3;
	p1 = p2 = p3 = 0;

	return 0;
}