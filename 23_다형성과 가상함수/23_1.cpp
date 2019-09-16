#include <iostream>
using namespace std;

//�Ϲ����� '����'�� ��¡�ϴ� Ŭ����
//�θ�Ŭ������ �ȴ�. �ڽ�Ŭ�������� ������� �ڵ� ��ӹ޴´�.
class Shape {
public:
	void Move(double x, double y);
	void Draw() const;

	Shape();
	Shape(double x, double y);

protected: //�ڽĵ��� ������ �� �ִ�.
	//��� ���� Ŭ�������� �ڽ��� ��ġ�� ������ ��� ������ �ʿ�.
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

//������ ȭ�鿡 ����Ѵ�.
void Shape::Draw() const {
	cout << "[Shape] Position = (" << _x << ", " << _y << ")\n";
}

//�簢���� ��¡�ϴ� Ŭ����
class Rectangle : public Shape { //Shape�� ��ӹ���.
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

//���Ӱ� ����.
void Rectangle::Draw() const {
	cout << "[Rectangle] Position = (" << _x << ", " << _y << ") "
		"Size = (" << _width << ", " << _height << ")\n";
}

void Rectangle::Resize(double width, double height) {
	_width = width;
	_height = height;
}

//���� ��¡�ϴ� Ŭ����
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

//���Ӱ� ����.
void Circle::Draw() const {
	cout << "[Circle] Position = (" << _x << ", " << _y << ") "
		"Radius = " << _radius << "\n";
}

void Circle::SetRadius(double radius) {
	_radius = radius;
}

int main() {
	//���� ��ü ���� �� �׸���
	//Shape s(100, 100); �̷��� ���ٷ� ����.
	Shape s;
	s.Move(100, 100);
	s.Draw();

	//�簢�� ��ü ���� �� �׸���
	//Rectangle r(200, 100, 500, 50); �̷��� ���ٷ� ����.
	Rectangle r;
	r.Move(200, 100);
	r.Resize(50, 50);
	r.Draw();

	//�� ��ü ���� �� �׸���
	//Circle c(300, 100, 30); �̷��� ���ٷ� ����.
	Circle c;
	c.Move(300, 100);
	c.SetRadius(30);
	c.Draw();

	return 0;

}