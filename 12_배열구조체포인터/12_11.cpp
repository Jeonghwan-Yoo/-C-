struct IHaveAPointer {
	int x, y;
	long* pl;
};

int main() {
	//참조될 변수를 정의한다.
	long l = 300;

	//구조체 변수를 정의한다.
	IHaveAPointer ihap;

	//변수를 가리키게 만든다.
	ihap.pl = &l;

	return 0;
}