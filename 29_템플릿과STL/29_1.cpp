class AutoArray {
public:
	AutoArray(int* ptr) {
		_ptr = ptr;
	}
	~AutoArray() {
		delete[] _ptr;
	}

	//AutoArray객체를 실제 배열처럼 사용할 수 있게 만들기 위해서 []연산자를 오버로딩했다.
	//int&을 이용해야 값을 대입할 수 있다.
	int& operator[] (int index) {
		return _ptr[index];
	}

private:
	int* _ptr;
};

int main() {
	//int타입의 배열을 생성해서 AutoArray의 생성자에 넘겨준다.
	//AutoArray의 소멸자에서 이 배열을 해제할 것이므로 main()함수에서는 이 배열의 해제에 대해 신경쓸 필요없다.
	AutoArray arr(new int[100]);
	//AutoArray객체 arr이 마치 배열인 것처럼 사용할 수 있다.
	arr[0] = 100;

	return 0;
}