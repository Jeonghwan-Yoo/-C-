class AccessControl {
public: //�ܺο��� ���ٰ���
	char publicData;
	void publicFunc() {}
protected: //�ܺο��� ���ٺҰ�
	int protectedData;
	void protectedFunc() {}
private: //�ܺο��� ���ٺҰ�
	float privateData;
	void privateFunc() {}
};

int main() {
	//��ü�� �����ϰ�, �� ����� �����غ���
	AccessControl ac;

	ac.publicData = 'A'; //����
	ac.publicFunc(); //����
	ac.protectedData = 100; //����
	ac.protectedFunc(); //����
	ac.privateData = 4.5f; //����
	ac.privateFunc(); //���� 

	return 0;
}