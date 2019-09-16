#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H

#include <string>
#include <exception> //��� �ޱ� ����
using namespace std;

//�� ������Ʈ ����� ����
class MyException : public exception {
public:
	//������
	//msg:���ܸ� �����ϴ� ���ڿ�
	//���ܸ� ������ ���ڿ��� ���ڷ� �޾� ��� ���� _Str�� �����Ѵ�.
	MyException(const string& msg) : _Str(msg) {

	}

	//�Ҹ���
	virtual ~MyException() {

	}

	//���� ���� ���ڿ��� ��ȯ�Ѵ�.
	//��ȯ �� : ���ڿ�
	//what()�Լ��� �������̵��Ѵ�. ���ܿ� ���� ���� ���ڿ��� ��ȯ�ϴ� �Լ�.
	//�����ڿ��� �Է� ���� ���ڿ��� ��ȯ�Ѵ�.
	virtual const char *what() const {
		return _Str.c_str();
	}

protected:
	string _Str;
};

#endif