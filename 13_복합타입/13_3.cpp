enum JOB_KINDS { //이 열거체는 JOB_KINDS라는 하나의 타입
	JOB_DRAWF, JOB_WARRIOR, JOB_SORCERER
};

struct Character {
	JOB_KINDS jobType; //int타입이던 jobType을 JOB_KINDS로 변경.
};

int main() {
	Character c;

	//c가 마법사인 경우
	if (JOB_SORCERER == c.jobType) {
		//필요한 일
	}

	return 0;
}