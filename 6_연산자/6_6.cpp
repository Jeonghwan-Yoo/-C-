int main() {
	//키와 시력을 보관할 변수를 정의한다.
	int height;
	float eyesight;

	//height, eyesight값을 입력받는다.
	height = 175;
	eyesight = 0.8f;

	//조건을 만족하는지 검사한다.
	bool ok; //자격을 갖춘 사람인가?
	ok = height >= 160 && height <= 180 || eyesight >= 1.0f && eyesight <= 2.0f;
	
	return 0;
}