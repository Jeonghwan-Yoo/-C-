#include <iostream>
using namespace std;

int main() {
	//시험 점수
	int score = 1;
	
	//점수에 따른 적절한 메시지를 출력
	switch (score) {
	case 0: //0이거나 1이거나 2인경우
	case 1:
	case 2:
		cout << "열심히 하세요~\n";
		break;
	case 3:
		cout << "멋있어요~\n";
		break;
	default:
		cout << "올바르지 않은 점수입니다!!\n";
	}
	return 0;
}