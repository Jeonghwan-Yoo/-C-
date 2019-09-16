#include <iostream>
using namespace std;

int main() {
	//시험 점수
	int score = 5;

	//점수에 따른 적절한 메시지를 출력
	if (0 == score)
		cout << "밀려 쓰셨군요~\n";
	else if (1 == score)
		cout << "조금 더 노력하세요~\n";
	else if (2 == score)
		cout << "안타깝네요~\n";
	else if (3 == score)
		cout << "멋있어요~\n";
	else
		cout << "올바르지 않은 점수입니다!!\n";

	return 0;
}