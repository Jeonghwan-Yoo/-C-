#ifndef COMPLEX_H
#define COMPLEX_H

//복소수 클래스
class Complex {
	//27_4 접근 허용
	friend Complex operator+(const Complex& left, const Complex& right);

public:
	//생성자
	//실수부와 허수부의 값을 받아서 멤버 변수에 보관하는 생성자.
	Complex(int realPart, int imaginaryPart) : real(realPart), imaginary(imaginaryPart) {

	}
	//27_9
	//int타입의 인자를 받는 생성자를 정의한다.
	//int타입을 Complex타입으로 형변환할 필요가 있을 때는 이 생성자가 호출된다.
	//인자 값을 사용해서 실수부의 값을 대입한다.
	//허수부는 그냥 0을 대입한다.
	Complex(int i) : real(i), imaginary(0) { //int타입을 Complex타입으로 형변환하는 방법을 컴퓨터에게 알려줌.

	}

	//접근자들
	//실수부와 허수부의 값을 쓰거나 읽을 수 있는 접근자들.
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

	//27_4 일반함수로 만들기 위해 주석처리
	/*
	//+연산자를 오버로딩하기 위해 멤버 함수를 만들었다.
	//right매개 변수는 +연산자의 오른쪽 피연산자. 왼쪽 피연산자는 자기 자신 this.
	Complex operator+(const Complex& right) {
		//실수부와 허수부를 각각 더한다.
		//this->real은 왼쪽피연산자. right.real은 오른쪽피연산자.
		//Complex클래스의 멤버함수이므로 private에 접근할 수 있다.
		int real = this->real + right.real;
		int imag = this->imaginary + right.imaginary;

		//결과를 보관한 복소수 객체를 반환한다.
		//실수부와 허수부 각각의 합을 이용해서 새로운 Complex객체를 만든다.
		return Complex(real, imag);
	}
	*/

	//27_3 전치 후치 추가
	//++c의 경우(전치 연산)
	//인자가 아무것도 없다.
	//자기 자신의 값을 먼저 증가시킨 후에 값을 반환한다.
	Complex operator++() {
		//실수부의 값을 먼저 더한다.
		this->real++;

		//현재 값을 반환한다.
		return *this;
	}

	//c++의 경우(후치 연산)
	//int타입의 이름 없는 인자가 있다.
	//후치 연산이므로 증가되기 전의 값을 반환.
	Complex operator++(int) {
		//현재 값을 먼저 보관한다.
		Complex prev(this->real, this->imaginary);

		//실수부의 값을 더한다.
		this->real++;

		//보관한 값을 반환한다.
		return prev;
	}

	//27_9 오버로딩 겹쳐서 주석처리함
	//27_8
	//형변환 연산자를 정의한다.
	//Complex타입을 int타입으로 형변환할 필요가 있을 때 호출한다.
	//반환 값의 타입을 명시하지 않았지만 int타입으로의 형변환이므로 int타입의 값을 반환해야 한다.
	/*operator int() {
		//실수부를 반환한다.
		//Complex타입에서 int타입으로의 형변환 방법을 컴퓨터에게 제공하는 부분.
		return this->real;
	}
	*/

private:
	int real; //실수부
	int imaginary; //허수부
};

#endif