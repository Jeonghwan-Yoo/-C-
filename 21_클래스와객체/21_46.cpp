#include <iostream>
using namespace std;

class WhoAmI {
public:
	int id;

	WhoAmI(int id);
	void ShowYourself() const;
};

//매개변수와 멤버 변수의 이름이 같다.
WhoAmI::WhoAmI(int id) {
	this->id = id; //This포인터를 사용해서 멤버를 가리킬 수 있다.
}

//This 포인터에 보관한 값을 출력해본다. This포인터의 이름은 this이다.
void WhoAmI::ShowYourself() const {
	cout << "{ID = " << id << ", this = " << this << "}\n";
}

int main() {
	//세 개의 객체를 만든다.
	WhoAmI obj1(1);
	WhoAmI obj2(2);
	WhoAmI obj3(3);

	//객체들의 정보를 출력한다.
	obj1.ShowYourself();
	obj2.ShowYourself();
	obj3.ShowYourself();

	//객체들의 주소를 출력한다.
	//This의 포인터 값과 객체의 주소가 일치하는 지 확인.
	cout << "&obj1 = " << &obj1 << "\n";
	cout << "&obj2 = " << &obj2 << "\n";
	cout << "&obj3 = " << &obj3 << "\n";

	return 0;
}