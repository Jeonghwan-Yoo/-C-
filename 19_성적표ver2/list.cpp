#include "list.h"

//19_10 CreateList() 함수의 구현
//새로운 링크드 리스트를 만든다.
//반환 값:새로운 링크드 리스트의 포인터
List* CreateList() {
	//헤드 노드를 만들고 초기화한다.
	Node* head = new Node;
	head->prev = head;
	head->next = head;
	head->data = 0;

	//List 구조체를 만들고 초기화한다.
	List* list = new List;
	list->head = head;

	//List 구조체를 반환한다.
	return list;
}

//19_11 InsertNodeAfert() 함수의 구현
//새로운 노드를 추가한다.
//node:이 노드 뒤에 새 노드가 추가된다.
//data:새 노드의 데이터
void InsertNodeAfter(Node* node, void* data) {
	//삽입되려는 곳의 앞, 뒤 노드를 구해놓으면 읽기 쉬운 코드를 만들 수 있다.
	Node* before = node;
	Node* after = node->next;

	//새 노드를 만들고 초기화한다.
	Node* newNode = new Node;
	newNode->data = data;
	newNode->next = after;
	newNode->prev = before;

	//node의 뒤에 있던 노드가 새 노드를 가리키게 만든다.
	after->prev = newNode;

	//매개 변수 node가 새 노드를 가리키게 만든다.
	before->next = newNode;
}

//19_12 RemoveNode() 함수의 구현
//노드를 제거한다.
//node:제거할 노드
//deleteData:true면 노드가 가리키는 데이터도 제거한다.
void RemoveNode(Node* node, bool deleteData) {
	//node의 앞, 뒤 노드를 구해놓으면 읽기 쉬운 코드를 만들 수 있다.
	Node* before = node->prev;
	Node* after = node->next;

	//node의 이전 노드와 다음 노드를 연결해준다.
	//자연스럽게 node 노드는 리스트에서 떨어져 나오게 된다.
	before->next = after;
	after->prev = before;

	//node의 데이터와 node 자신을 제거한다.
	//deleteData의 값이 true이면 노드가 보관하는 정보도 제거한다.
	if (deleteData)
		delete node->data;
	delete node;
}

/*
//19_13 모든 학생의 이름 출력하기
void ShowNames(List* students) {
	//헤드 노드의 다음 노드부터 시작한다.
	Node* current = students->head->next; //헤드노드의 다음 노드를 가리키게.
	while (current != students->head) { //한바퀴돌아올때까지 반복.
		//현재 노드의 데이터를 꺼내온다.
		//void*타입으로 보관되어 있으므로 형변환해야 한다.
		const Student* std = (Student*)current->data;

		//해당 학생의 이름을 출력한다.
		cout << std->name << "\n";

		//다음 노드를 가리킨다.
		current = current->next;
	}
}
*/

//19_14 RemoveList() 구현
//리스트를 제거한다.
//리스트의 모든 노드와 데이터도 제거한다.
//list:리스트
//deleteData:true면 노드의 데이터도 제거한다.
void RemoveList(List* list, bool deleteData) {
	//head노드부터 마지막 노드까지 제거한다.
	Node* current = list->head; //헤드 노드부터 제거할 것이다.

	do {
		//현재 노드를 제거할 것이므로 다음 노드를 구해둔다.
		//가리키기 전에 제거하면 다음 것을 가리킬 수가 없다.
		Node* next = current->next;

		//현재 노드와 노드의 데이터를 제거한다.
		if (deleteData)
			delete current->data;
		delete current;

		//현재 노드를 갱신한다.
		current = next;
	} while (current != list->head);
	//while()문에 도달한 상태에서 list->head가 가리키는 곳의 메모리는
	//해제된 상태이지만, list->head처럼 그곳의 주소 값만 사용하는 것은 상관없다.
	//current가 헤드노드를 가리키지 않을 동안만 반복.
	//다시 헤드 노드를 가리키면 반복을 종료.

	//리스트를 제거한다.
	delete list;
}

// 마지막 노드를 구한다.
// list : 리스트
// 반환값 : 리스트의 마지막 노드
Node* GetTail(List* list)
{
	// 헤드 노드의 이전 노드를 반환한다.
	// (헤드 노드 자기 자신일 수도 있다.)
	return list->head->prev;
}

// 노드의 다음 노드를 반환한다.
// node : 이 노드의 다음 노드가 반환된다.
// 반환값 : node의 다음 노드
Node* GetNext(Node* node)
{
	return node->next;
}

// 노드의 이전 노드를 반환한다.
// node : 이 노드의 이전 노드가 반환된다.
// 반환값 : node의 이전 노드
Node* GetPrev(Node* node)
{
	return node->prev;
}

// 노드에 보관된 데이터를 반환한다.
// node : 이 노드의 데이터를 반환한다.
// 반환값 : node에 보관된 데이타
void* GetData(Node* node)
{
	return node->data;
}
