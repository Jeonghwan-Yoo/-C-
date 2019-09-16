//���ø� Ŭ������ ����� ���ؼ��� templateŰ���带 ����Ѵ�.
//"��ǻ�;� �� T��ſ� int�� float�� ���� ���� ������ Ÿ�� �̸��� �� �� �ִܴ�. � Ÿ���̵� ���� T��� �θ���."
template<typename T>
class AutoArray {
public:
	AutoArray(T* ptr) { //�����ڸ� TŸ���� �迭�� �ް� �����ߴ�.
		_ptr = ptr;
	}
	~AutoArray() {
		delete[] _ptr;
	}

	//TŸ���� �迭�� �����ϰ� �����Ƿ� T&Ÿ���� ���Ҹ� ��ȯ�ϰ� �����ش�.
	T& operator[] (int index) {
		return _ptr[index];
	}
	
private:
	T* _ptr; //TŸ���� �迭�� ������ �� �ִ� ��� ������.
};

int main() {
	//����ϴ� �ʿ����� T�� � Ÿ���� ������ �������ָ鼭 ����ؾ� �Ѵ�.
	//T��ſ� float�� ���Ե� ���̴�.
	AutoArray<float> arr(new float[100]);

	arr[0] = 99.99f;

	return 0;
}