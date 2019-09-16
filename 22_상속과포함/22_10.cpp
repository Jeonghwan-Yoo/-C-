#include <string>
using namespace std;

//학부생 클래스
class UnderGradStudent {
public:
	string name; //이름
	string department; //학부
	//학새 경고
	void Warn() {

	}
};

//기숙사생 클래스
class DormStudent {
public:
	string building; //기숙사 명
	int roomNumber; //방번호
	//벌점 부여
	void Warn() {

	}
};

//기숙사생이면서 학부생인 경우
//두 개의 부모 클래스를 갖는다.
//부모 클래스의 이름은 콤마(,)로 구분한다.
class UnderGrad_DormStudent
	:public UnderGradStudent, public DormStudent {
public:

};

int main() {
	//기숙사생이면서 학부생인 사람의 정보 생성
	UnderGrad_DormStudent std;
	std.name = "Hyun C. Lee";
	std.department = "Info & Computer Engineering";
	std.building = "NamJeKwan";
	std.roomNumber = 1529;

	//학사 경고!!
	std.Warn(); //둘중에 뭘호출할지 몰라서 에러.

	return 0;
}