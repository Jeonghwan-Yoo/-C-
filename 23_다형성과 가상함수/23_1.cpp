#include <iostream>
using namespace std;

//일반적인 '도형'을 상징하는 클래스
//부모클래스가 된다. 자식클래스들은 멤버들을 자동 상속받는다.
class Shape {
public:
	void Move(double x, double y);
	void Draw() const;

	Shape();
	Shape(double x, double y);

protected: //자식들이 접근할 수 있다.
	//모든 도형 클래스들은 자신의 위치를 보관할 멤버 변수가 필요.
	double _x, _y;
};

Shape::Shape() {
	_x = _y = 0.0;
}

Shape::Shape(double x, double y) {
	_x = x;
	_y = y;
}

void Shape::Move(double x, double y) {
	_x = x;
	_y = y;
}

//정보를 화면에 출력한다.
void Shape::Draw() const {
	cout << "[Shape] Position = (" << _x << ", " << _y << ")\n";
}

//사각형을 상징하는 클래스
class Rectangle : public Shape { //Shape를 상속받음.
public:
	void Draw() const;
	void Resize(double width, double height);

	Rectangle();
	Rectangle(double x, double y, double width, double height);

protected:
	double _width;
	double _height;
};

Rectangle::Rectangle() {
	_width = _height = 100.0f;
}

Rectangle::Rectangle(double x, double y, double width, double height)
	:Shape(x, y) {
	Resize(width, height);
}

//새롭게 정의.
void Rectangle::Draw() const {
	cout << "[Rectangle] Position = (" << _x << ", " << _y << ") "
		"Size = (" << _width << ", " << _height << ")\n";
}

void Rectangle::Resize(double width, double height) {
	_width = width;
	_height = height;
}

//원을 상징하는 클래스
class Circle : public Shape {
public:
	void Draw() const;
	void SetRadius(double radius);
	Circle();
	Circle(double x, double y, double radius);

protected:
	double _radius;
};

Circle::Circle() {
	_radius = 100.f;
}

Circle::Circle(double x, double y, double radius)
	:Shape(x, y) {
	SetRadius(radius);
}

//새롭게 정의.
void Circle::Draw() const {
	cout << "[Circle] Position = (" << _x << ", " << _y << ") "
		"Radius = " << _radius << "\n";
}

void Circle::SetRadius(double radius) {
	_radius = radius;
}

int main() {
	//도형 객체 생성 및 그리기
	//Shape s(100, 100); 이렇게 한줄로 가능.
	Shape s;
	s.Move(100, 100);
	s.Draw();

	//사각형 객체 생성 및 그리기
	//Rectangle r(200, 100, 500, 50); 이렇게 한줄로 가능.
	Rectangle r;
	r.Move(200, 100);
	r.Resize(50, 50);
	r.Draw();

	//원 객체 생성 및 그리기
	//Circle c(300, 100, 30); 이렇게 한줄로 가능.
	Circle c;
	c.Move(300, 100);
	c.SetRadius(30);
	c.Draw();

	return 0;

}