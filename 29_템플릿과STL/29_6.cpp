#include <list> //list클래스를 사용하기 위해서는 헤더 파일을 포함해야 한다.
#include <iostream>

int main() {
	//int 타입을 담을 링크드 리스트 생성
	//STL역시 C++표준 라이브러리므로 std네임스페이스 안에 정의되어 있다.
	//템플릿 클래스므로 보관할 데이터의 타입을 지정해줄 필요가 있다.
	std::list<int> intList;

	//0~9까지 링크드 리스트에 넣는다.
	for (int i = 0;i < 10;i++)
		intList.push_back(i); //뒤쪽에 노드를 추가하는 역할을 한다.

	//5를 찾아서 제거한다.
	intList.remove(5); //5를 보관하는 노드를 제거한다.

	//링크트 리스트의 내용을 출력한다.
	//list객체에 보관한 첫번째 노드부터 마지막 노드까지 탐색하면서 노드에 보관된 값을 출력한다.
	std::list<int>::iterator it;
	for (it = intList.begin();it != intList.end();++it)
		std::cout << *it << "\n";

	return 0;
}