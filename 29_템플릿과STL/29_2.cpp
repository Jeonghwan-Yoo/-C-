//템플릿 클래스를 만들기 위해서는 template키워드를 사용한다.
//"컴퓨터야 이 T대신에 int나 float등 여러 가지 종류의 타입 이름이 올 수 있단다. 어떤 타입이든 나는 T라고 부를게."
template<typename T>
class AutoArray {
public:
	AutoArray(T* ptr) { //생성자를 T타입의 배열을 받게 수정했다.
		_ptr = ptr;
	}
	~AutoArray() {
		delete[] _ptr;
	}

	//T타입의 배열을 보관하고 있으므로 T&타입의 원소를 반환하게 고쳐준다.
	T& operator[] (int index) {
		return _ptr[index];
	}
	
private:
	T* _ptr; //T타입의 배열을 보관할 수 있는 멤버 변수다.
};

int main() {
	//사용하는 쪽에서도 T가 어떤 타입이 될지를 지정해주면서 사용해야 한다.
	//T대신에 float가 대입된 것이다.
	AutoArray<float> arr(new float[100]);

	arr[0] = 99.99f;

	return 0;
}