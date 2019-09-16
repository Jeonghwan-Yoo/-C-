class AccessControl {
public: //외부에서 접근가능
	char publicData;
	void publicFunc() {}
protected: //외부에서 접근불가
	int protectedData;
	void protectedFunc() {}
private: //외부에서 접근불가
	float privateData;
	void privateFunc() {}
};

int main() {
	//객체를 생성하고, 각 멤버에 접근해보자
	AccessControl ac;

	ac.publicData = 'A'; //성공
	ac.publicFunc(); //성공
	ac.protectedData = 100; //실패
	ac.protectedFunc(); //실패
	ac.privateData = 4.5f; //실패
	ac.privateFunc(); //실패 

	return 0;
}