//�۸��̿� ���õ� �͵�
namespace Dog {
	//�۸��� �Ѹ��� ����
	struct Info {
		char name[20];
		int age;
	};

	Info dogs[20]; //�۸��� ����Ʈ
	int count; //��ü �۸��̵��� ��

	void CreateAll(); //��� �۸��� ���� �Լ�
} //namespace������ ;�����ݷ��� ���� �ʴ´�.

//����̿� ���õ� �͵�
namespace Cat {
	//�߿��� �Ѹ��� ����
	class Info {
	public:
		void Meow();
	protected:
		char name[20];
	};

	Info cats[20]; //�߿��� ����Ʈ
	int count; //��ü �߿��̵��� ��

	void CreateAll(); //��� �߿��� ���� �Լ�
}
//�� ���� ���ӽ����̽��� ���� ������ ���� count��� �̸��� ������ �� �� �����ߴ�.

//��ü �۸��̿� �߿��̵��� ��
int count;

int main()
{
	return 0;
}
