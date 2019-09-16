class AutoArray {
public:
	AutoArray(int* ptr) {
		_ptr = ptr;
	}
	~AutoArray() {
		delete[] _ptr;
	}

	//AutoArray��ü�� ���� �迭ó�� ����� �� �ְ� ����� ���ؼ� []�����ڸ� �����ε��ߴ�.
	//int&�� �̿��ؾ� ���� ������ �� �ִ�.
	int& operator[] (int index) {
		return _ptr[index];
	}

private:
	int* _ptr;
};

int main() {
	//intŸ���� �迭�� �����ؼ� AutoArray�� �����ڿ� �Ѱ��ش�.
	//AutoArray�� �Ҹ��ڿ��� �� �迭�� ������ ���̹Ƿ� main()�Լ������� �� �迭�� ������ ���� �Ű澵 �ʿ����.
	AutoArray arr(new int[100]);
	//AutoArray��ü arr�� ��ġ �迭�� ��ó�� ����� �� �ִ�.
	arr[0] = 100;

	return 0;
}