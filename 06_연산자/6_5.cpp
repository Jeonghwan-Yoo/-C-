int main() {
	//정보를 보관할 변수 정의
	int age; //나이
	bool male; //남성인가?

	//age, male 값을 입력 받는다고 치자.
	age = 20; //20세
	male = true; //남성

	//조건을 만족하는지 검사한다.
	bool ok; //자격을 갖춘 사람인가?
	ok = age > 19 && male == true; //성인이면서 남성인지 여부를 ok변수에 담는다.

	return 0;
}