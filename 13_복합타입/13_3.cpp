enum JOB_KINDS { //�� ����ü�� JOB_KINDS��� �ϳ��� Ÿ��
	JOB_DRAWF, JOB_WARRIOR, JOB_SORCERER
};

struct Character {
	JOB_KINDS jobType; //intŸ���̴� jobType�� JOB_KINDS�� ����.
};

int main() {
	Character c;

	//c�� �������� ���
	if (JOB_SORCERER == c.jobType) {
		//�ʿ��� ��
	}

	return 0;
}