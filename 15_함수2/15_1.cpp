bool SetFramesPerSec(int fps = 10) { //디폴트 값을 10으로 지정.
	return true;
}

int main() {
	SetFramesPerSec(); //인자를 요구하지만 인자없이 호출했다. 디폴트가지므로 문제없다.
	return 0;
}