enum {
	JOB_DWARF, JOB_WARRIOR, JOB_SORCERER //���� 0, 1, 2�� �ǹ��ϰ� �ȴ�.
};

struct Character {
	int jobType;
};

int main() {
	Character c;

	//c�� �������� ���
	if (JOB_SORCERER == c.jobType) { //2��� ���� ��ſ� �ɺ��� ���.
		//�ʿ��� ��
	}

	return 0;
}