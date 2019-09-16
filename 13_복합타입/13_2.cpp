enum {
	JOB_DWARF, JOB_WARRIOR, JOB_SORCERER //각각 0, 1, 2를 의미하게 된다.
};

struct Character {
	int jobType;
};

int main() {
	Character c;

	//c가 마법사인 경우
	if (JOB_SORCERER == c.jobType) { //2라는 숫자 대신에 심볼을 사용.
		//필요한 일
	}

	return 0;
}