struct Point {
	int x, y;
};

double Distance(const Point& pt1, const Point& pt2) {
	//이 함수의 내용은 생략한다.
	return 0.0f;
}

int main() {
	//두 점을 만든다.
	Point a = { 100,100 };
	Point b = { 200,200 };

	//함수를 호출한다.
	double dist;
	dist = Distance(a, b);

	return 0;
}