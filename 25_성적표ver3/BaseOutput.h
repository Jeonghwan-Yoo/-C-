#ifndef BASE_OUTPUT_H
#define BASE_OUTPUT_H

#include <string>
using namespace std;

//�ҽ� �ڵ带 �����ϰ� �ϱ� ���ؼ� Ÿ���� ���� �����Ѵ�.
typedef const string& STR;

//�ܼ� ����� �����ִ� Ŭ����
class BaseOutput {
public:
	//����ǥ ����� �����Ѵٴ� �ǹ��� �Լ�.
	//�� �ڽ� Ŭ�������� �� �Լ����� �ʿ��� �غ� �۾��� �ϰ� �ȴ�.
	virtual void BeginTable(STR title) = 0;
	//����� ����ϴ� �뵵�� �Լ�.
	//���ڷδ� ���ڿ��� �迭�� �迭�� ũ�⸦ ����.
	virtual void PutHeader(string headers[], int number) = 0;
	//�л��� ������ ����ϴ� �뵵�� �Լ�.
	//���ڷδ� �� �׸��� ���� ���ڿ��� �迭�� ����.
	virtual void PutRecord(string record[]) = 0;
	//����ǥ ����� �����ٴ� �ǹ��� �Լ�.
	//�� �ڽ� Ŭ�������� �� �Լ����� �ʿ��� ������ �۾��� �ϰ� �ȴ�.
	virtual void EndTable() = 0;
	//�� ���� ���ڿ��� ����ϴ� �Լ��̴�.
	//�� �ڽ� Ŭ�������� �ڽ��� Ư¡�� �°� �� ���ڿ��� ���.
	virtual void Write(STR text) = 0;

	//�ڽ� Ŭ�������� �Ҹ��ڰ� ȣ��Ǵ� ���� �����ϱ� ���� �Ҹ��ڸ� ���� �Լ���.
	virtual ~BaseOutput() {

	}
};

#endif