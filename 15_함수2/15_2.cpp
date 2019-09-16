void RecursiveCall() {
	RecursiveCall(); //자기 자신을 호출하고 있다.
}
int main() {
	//함수를 호출
	RecursiveCall(); 
	return 0;
}