#include <iostream>
#include <string>
using namespace std;

//�л� Ŭ����
class Student {
public:
	string name; //�̸�
	int sNo; //�й�

	//������, �Ҹ���
	Student(const string& name_arg, int stdNumber);
	~Student();
public:
	//���� �����
	//student_count�� ��ü�� ���� �����ȴ�.
	static int student_count;
	static void PrintStdCount();
};

//���� ��� ������ ������ ��� �����ʹ� �޸� ������ Ŭ���� �ܺο��� �����ؾ� ��.
//���� ��� ������ ���� �ϳ��� �����Ǳ� ������ ������ �������ִ� ��.
//���� ��� ����
int Student::student_count = 0;

//���� ��� �Լ�
void Student::PrintStdCount() {
	cout << "Student ��ü �� = " << student_count << "\n";
}

//������
Student::Student(const string& name_arg, int stdNumber) {
	//�л� ��ü�� ���� ������Ų��.
	student_count++;

	name = name_arg;
	sNo = stdNumber;
}

Student::~Student() {
	//�л� ��ü�� ���� ���ҽ�Ų��.
	student_count--;
}

//��ü�� �����ϰ� �Ҹ��� ������ student_count���� �����ֱ� ���� �Լ�.
void Func() {
	//��ü ����
	Student std1("Bill", 342);
	Student std2("James", 214);

	Student::PrintStdCount();
}

//��ü�� �����ϰ� �Ҹ��ϴ� ���̻��̿� ���� ��� �Լ��� ȣ���� ��ü�� ���� ���.
//��� �� ��ü�� ������ �ƴϰ� Ŭ������ ����.
int main() {
	Student::PrintStdCount();

	//��ü ����
	Student std("Jeffrey", 123);

	Student::PrintStdCount();

	//Func() �Լ� ȣ��
	Func();

	Student::PrintStdCount();

	return 0;
}