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
	//�������� ���� �迭�� �غ��Ѵ�.
	Shape* shapes[5] = { NULL };

	//�� Ÿ���� ��ü�� �����ؼ� �迭�� �����Ѵ�.
	//���� ���� Ÿ���� ��ü�� �������� ������ �ڿ� ��ȯ�Ǵ� �����͸� �迭�� ����.
	shapes[0] = new Circle(100, 100, 50);
	shapes[1] = new Rectangle(300, 300, 100, 100);
	shapes[2] = new Rectangle(200, 100, 50, 150);
	shapes[3] = new Circle(100, 300, 150);
	shapes[4] = new Rectangle(200, 200, 200, 200);

	//�迭�� ������ ��� ��ü�� �׸���.
	for (int i = 0; i < 5;++i)
		shapes[i]->Draw();

	//�迭�� ������ ��� ��ü�� �Ҹ��Ų��.
	for (int i = 0;i < 5;++i) {
		delete shapes[i];
		shapes[i] = NULL;
	}

	return 0;
}