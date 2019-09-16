//'StudentInfo'라는 이름의 구조체를 정의한다.
struct StudentInfo { //struct 키워드가 구조체 정의가 시작됨을 알린다.
	char bloodType; //혈액형
	int stdNumber; //학번
	float grade; //평점
}; //구조체 정의가 끝나면 꼭 세미콜론을 찍는다.

int main() {
	//StudentInfo 구조체 타입의 변수 2개를 선언한다.
	StudentInfo si1; //구조체 타입의 변수를 정의한다.
	StudentInfo si2;

	return 0;
}