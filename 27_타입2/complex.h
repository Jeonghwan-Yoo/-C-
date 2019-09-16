#ifndef COMPLEX_H
#define COMPLEX_H

//���Ҽ� Ŭ����
class Complex {
	//27_4 ���� ���
	friend Complex operator+(const Complex& left, const Complex& right);

public:
	//������
	//�Ǽ��ο� ������� ���� �޾Ƽ� ��� ������ �����ϴ� ������.
	Complex(int realPart, int imaginaryPart) : real(realPart), imaginary(imaginaryPart) {

	}
	//27_9
	//intŸ���� ���ڸ� �޴� �����ڸ� �����Ѵ�.
	//intŸ���� ComplexŸ������ ����ȯ�� �ʿ䰡 ���� ���� �� �����ڰ� ȣ��ȴ�.
	//���� ���� ����ؼ� �Ǽ����� ���� �����Ѵ�.
	//����δ� �׳� 0�� �����Ѵ�.
	Complex(int i) : real(i), imaginary(0) { //intŸ���� ComplexŸ������ ����ȯ�ϴ� ����� ��ǻ�Ϳ��� �˷���.

	}

	//�����ڵ�
	//�Ǽ��ο� ������� ���� ���ų� ���� �� �ִ� �����ڵ�.
	int Real(int realPart) {
		real = realPart;
		return real;
	}
	int Imaginary(int imaginaryPart) {
		imaginary = imaginaryPart;
		return imaginary;
	}
	int Real() const {
		return real;
	}
	int Imaginary() const {
		return imaginary;
	}

	//27_4 �Ϲ��Լ��� ����� ���� �ּ�ó��
	/*
	//+�����ڸ� �����ε��ϱ� ���� ��� �Լ��� �������.
	//right�Ű� ������ +�������� ������ �ǿ�����. ���� �ǿ����ڴ� �ڱ� �ڽ� this.
	Complex operator+(const Complex& right) {
		//�Ǽ��ο� ����θ� ���� ���Ѵ�.
		//this->real�� �����ǿ�����. right.real�� �������ǿ�����.
		//ComplexŬ������ ����Լ��̹Ƿ� private�� ������ �� �ִ�.
		int real = this->real + right.real;
		int imag = this->imaginary + right.imaginary;

		//����� ������ ���Ҽ� ��ü�� ��ȯ�Ѵ�.
		//�Ǽ��ο� ����� ������ ���� �̿��ؼ� ���ο� Complex��ü�� �����.
		return Complex(real, imag);
	}
	*/

	//27_3 ��ġ ��ġ �߰�
	//++c�� ���(��ġ ����)
	//���ڰ� �ƹ��͵� ����.
	//�ڱ� �ڽ��� ���� ���� ������Ų �Ŀ� ���� ��ȯ�Ѵ�.
	Complex operator++() {
		//�Ǽ����� ���� ���� ���Ѵ�.
		this->real++;

		//���� ���� ��ȯ�Ѵ�.
		return *this;
	}

	//c++�� ���(��ġ ����)
	//intŸ���� �̸� ���� ���ڰ� �ִ�.
	//��ġ �����̹Ƿ� �����Ǳ� ���� ���� ��ȯ.
	Complex operator++(int) {
		//���� ���� ���� �����Ѵ�.
		Complex prev(this->real, this->imaginary);

		//�Ǽ����� ���� ���Ѵ�.
		this->real++;

		//������ ���� ��ȯ�Ѵ�.
		return prev;
	}

	//27_9 �����ε� ���ļ� �ּ�ó����
	//27_8
	//����ȯ �����ڸ� �����Ѵ�.
	//ComplexŸ���� intŸ������ ����ȯ�� �ʿ䰡 ���� �� ȣ���Ѵ�.
	//��ȯ ���� Ÿ���� ������� �ʾ����� intŸ�������� ����ȯ�̹Ƿ� intŸ���� ���� ��ȯ�ؾ� �Ѵ�.
	/*operator int() {
		//�Ǽ��θ� ��ȯ�Ѵ�.
		//ComplexŸ�Կ��� intŸ�������� ����ȯ ����� ��ǻ�Ϳ��� �����ϴ� �κ�.
		return this->real;
	}
	*/

private:
	int real; //�Ǽ���
	int imaginary; //�����
};

#endif