class AccessControl {
public: 
	char publicData;
	void publicFunc() {}
protected: 
	int protectedData;
	void protectedFunc() {}
private: 
	float privateData;
	void privateFunc() {}
public:
	void AccessAllMembers();
};

void AccessControl::AccessAllMembers() { //멤버함수에서 모든 멤버에 접근한다.
	publicData = 'A'; //성공
	publicFunc(); //성공
	protectedData = 100; //성공
	protectedFunc(); //성공
	privateData = 4.5f; //성공
	privateFunc(); //성공
}

int main() {
	//객체를 생성한다.
	AccessControl ac;

	//AccessAllMembers()함수 호출
	ac.AccessAllMembers();

	return 0;
}