//25_21
#include "BaseOutput.h"

#include "student.h"
#include <iostream>
#include <iomanip>
//25_15
#include <sstream>
using namespace std;

//������
//sNo:�й�
Student::Student(int sNo) {
	//�й� ����
	this->sNo = sNo;

	//������ ��� �ʱ�ȭ
	kor = eng = math = 0;
	ave = 0.0f;
}

// �Ҹ���
Student::~Student() {

}

//���� ������ �Է� �޴´�.
//����ڷκ��� ���� �Է��� �޾Ƽ� ��� ������ �����ϰ� ��ձ��� ����Ѵ�.
//�ڱ� ������ �� �� �ִ� ���� �ִ��� �ڱ� ������ �ϴ� ���� �߿�.
void Student::Input() {
	while (1) {
		//�ش� �л��� �̸�, ����, ����, ���� ������ �Է� �޴´�.
		cout << "�̸�(�������) ����, ����, ���� ������ �Է��ϼ��� : \n";
		cin >> name >> kor >> eng >> math;

		//������ ���ٸ� �ݺ��� ������.
		//good()�� cin��ü�� ���¸� �����ϴ� �Լ�.
		//�ľ����¶�� false�� ��ȯ.
		if (cin.good())
			break;

		//������ �ִٸ� cin ��ü�� �ʱ�ȭ�Ѵ�.
		//�ľ����¶�� �ٽ� �������� �ǵ����� �Ѵ�.
		//clear()�� �ľ����¸� ����� ���� ���·� �����.
		cin.clear();
		//ignore()�� cin��ü�� �Է��� ������ ���������� �Լ�.
		//numeric_limits<streamsize>::max()�� ��� �Է� ���� ����� ����. <limits>
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//�ȳ� �޽����� ����Ѵ�.
		cout << "[�Է��� �߸��Ǿ����ϴ�.]\n";
	}

	//�ش� �л��� �̸�, ����, ����, ���� ������ �Է� �޴´�.
	//cout << "�̸�(�������) ����, ����, ���� ������ �Է��ϼ��� : \n";
	//cin >> name >> kor >> eng >> math;

	//���� ����� ����Ѵ�.
	ave = float(kor + eng + math) / 3.0f;
}

//25_15
// ���� ������ ȭ�鿡 ����Ѵ�.
// out : ��°�ü
void Student::Show(BaseOutput& out) const { //BaseOutput&Ÿ���� ����.
	//���� ��� �ϳ��� ���ڿ��� �����.
	//���ڿ��� �迭�� �����ϱⰡ ����������.
	stringstream ss;
	ss.precision(2);
	ss << fixed;
	ss << sNo << " " << name << " " << kor << " ";
	ss << eng << " " << math << " - " << ave;

	//7���� ���ڿ��� ���� �迭�� ����� �ʱ�ȭ�Ѵ�.
	//�տ��� ���� �� ���ڿ��� �ɰ��� ���ڿ��� �迭�� �����.
	string record[7];
	for (int i = 0; i < 7;i++)
		ss >> record[i];

	//�л��� ������ ��� ��ü�� ������.
	//�л� ������ ��� ���ڿ��� �迭�� ��� ��ü�� �����ϸ� ��ü Ÿ���� �������� ���.
	out.PutRecord(record);
}

/*
//���� ������ ȭ�鿡 ����Ѵ�.
//��� ������ ���� ������ ȭ�鿡 ���.
void Student::Show() const {
	//26_9
	cout << setw(7) << sNo << setw(7) << name;
	cout << setw(5) << kor << setw(5) << eng;
	cout << setw(5) << math << setw(9) << "-";
	cout << setw(7) << ave << "\n";
	
	cout << setw(7) << sNo << setw(7) << name;
	cout << setw(5) << kor << setw(5) << eng;
	cout << setw(5) << math << setw(7) << ave << "\n";
}
*/


//�����ڵ�
int Student::GetStdNumber() const {
	return sNo;
}
string Student::GetName() const {
	return name;
}
int Student::GetKor() const {
	return kor;
}
int Student::GetEng() const {
	return eng;
}
int Student::GetMath() const {
	return math;
}
float Student::GetAverage() const {
	return ave;
}

//25_9
//������
//�θ��� �����ڸ� ȣ���ؼ� StudentŬ�������� ��� ���� �κ��� �ʱ�ȭ�Ѵ�.
EngStudent::EngStudent(int sNo) : Student(sNo) {
	//EngStudent���� �ִ� ����� �ʱ�ȭ�Ѵ�.
	hi_eng = 0;
}
//������ �Է� �޴´�.
void EngStudent::Input() {
	//25_29 cin ���� ó��
	//���� �Է��� ���� �ݺ�
	while (1) {
		//�ش� �л��� �̸�, ����, ����, ����, ��� ���� ������ �Է� �޴´�.
		cout << "�̸�(�������) ����, ����, ����, ��޿��� ������ �Է��ϼ��� : \n";
		cin >> name >> kor >> eng >> math >> hi_eng;

		//������ ���ٸ� �ݺ��� ������.
		//good()�� cin��ü�� ���¸� �����ϴ� �Լ�.
		//�ľ����¶�� false�� ��ȯ.
		if (cin.good())
			break;

		//������ �ִٸ� cin ��ü�� �ʱ�ȭ�Ѵ�.
		//�ľ����¶�� �ٽ� �������� �ǵ����� �Ѵ�.
		//clear()�� �ľ����¸� ����� ���� ���·� �����.
		cin.clear();
		//ignore()�� cin��ü�� �Է��� ������ ���������� �Լ�.
		//numeric_limits<streamsize>::max()�� ��� �Է� ���� ����� ����. <limits>
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//�ȳ� �޽����� ����Ѵ�.
		cout << "[�Է��� �߸��Ǿ����ϴ�.]\n";
	}
	
	//�ش� �л��� �̸�, ����, ����, ����, ��� ���� ������ �Է� �޴´�.
	//cout << "�̸�(�������) ����, ����, ����, ��޿��� ������ �Է��ϼ��� : \n";
	//cin >> name >> kor >> eng >> math >> hi_eng;

	//���� ����� ����Ѵ�.
	ave = float(kor + eng + math + hi_eng) / 4.0f;
}

//25_15
void EngStudent::Show(BaseOutput& out) const {
	//���� ��� �ϳ��� ���ڿ��� �����.
	stringstream ss;
	ss.precision(2);
	ss << fixed;
	ss << sNo << " " << name << " " << kor << " ";
	ss << eng << " " << math << " " << hi_eng << " " << ave;

	//7���� ���ڿ��� ���� �迭�� ����� �ʱ�ȭ�Ѵ�.
	string record[7];
	for (int i = 0; i < 7;i++)
		ss >> record[i];

	//��� ��ü�� ������.
	out.PutRecord(record);
}

/*
void EngStudent::Show() const {
	cout << setw(7) << sNo << setw(7) << name;
	cout << setw(5) << kor << setw(5) << eng;
	cout << setw(5) << math << setw(9) << hi_eng;
	cout << setw(7) << ave << "\n";
}
*/
