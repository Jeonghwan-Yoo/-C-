#include "list.h"
//25_26
#include <stdexcept>
using namespace std;

// 링크드 리스트의 생성자.
// fnDelete : 노드의 데이터 제거시 호출할 함수의 주소
// deleteData : true면 노드를 제거할 때 데이터도 제거한다.
List::List(FN_DELETE fnDelete, bool deleteData)
{
	// 인자를 보관한다.
	this->fnDel = fnDelete;
	this->deleteData = deleteData;

	// 헤드 노드를 만들고 초기화한다.
	head = new Node;
	head->prev = head;
	head->next = head;
	head->data = 0;
}

// 링크드 리스트의 소멸자
List::~List()
{
	// 모든 노드를 제거한다.
	RemoveAll();

	// 헤드 노드를 제거한다.
	delete head;
	head = 0;
}

// 리스트의 모든 노드를 제거한다. 
// 리스트의 모든 노드와 데이터도 제거한다.
void List::RemoveAll()
{
	// 헤드 노드의 다음 노드부터 지운다.
	// ( 이렇게 하면 RemoveAll() 함수를 호출한 후에도
	// List 객체를 다시 사용할 수 있다)
	Node* current = head->next;

	while (current != head)
	{
		// 현재 노드를 지울 것이므로
		// 다음 노드를 구해둔다.
		Node* next = current->next;

		// 현재 노드의 데이터를 제거한다.
		if (deleteData)
		{
			if (fnDel)
				(*fnDel)(current->data);
			else
				delete current->data;
		}

		// 현재 노드를 제거한다.
		delete current;

		// current가 다음 노드를 가리키게 한다.
		current = next;
	}

	// 헤드 노드를 초기화한다.
	head->next = head;
	head->prev = head;
}

// 첫번째 노드를 구한다.
// 반환값 : 리스트의 첫번째 노드
Node* List::GetHead() const
{
	// 헤드 노드를 반환한다.
	return head;
}

// 마지막 노드를 구한다.
// 반환값 : 리스트의 마지막 노드
Node* List::GetTail() const
{
	// 헤드 노드의 이전 노드를 반환한다.
	// (헤드 노드 자기 자신일 수도 있다.)
	return head->prev;
}

// 새로운 노드를 추가한다.
// node : 이 노드 뒤에 새 노드가 추가된다.
// data : 새 노드의 데이타
void List::InsertNodeAfter(Node* node, void* data)
{
	//25_26 예외처리
	if (NULL == node)
		throw invalid_argument("알 수 없는 오류가 있습니다.(337)");

	// 삽입되려는 곳의 앞, 뒤 노드를 구해놓으면
	// 읽기 쉬운 소스 코드를 만들 수 있다.
	Node* before = node;
	Node* after = node->next;

	// 새 노드를 만들고 초기화한다.
	Node* newNode = new Node;
	newNode->data = data;
	newNode->next = after;
	newNode->prev = before;

	// node의 뒤에 있던 노드가 새 노드를 가리키도록 만든다.
	after->prev = newNode;

	// 매개변수 node가 새 노드를 가리키도록 만든다.
	before->next = newNode;
}

// 노드를 제거한다.
// node : 제거할 노드
void List::RemoveNode(Node* node)
{
	//25_26 예외처리
	if (NULL == node)
		throw invalid_argument("알 수 없는 오류가 있습니다.(337)");

	// node의 앞, 뒤 노드를 구해놓으면
	// 읽기 쉬운 소스 코드를 만들 수 있다.
	Node* before = node->prev;
	Node* after = node->next;

	// node의 이전 노드와 다음 노드를 연결해준다.
	before->next = after;
	after->prev = before;

	// 현재 노드의 데이터를 제거한다.
	if (deleteData)
	{
		if (fnDel)
			(*fnDel)(node->data);
		else
			delete node->data;
	}

	// 현재 노드를 제거한다.
	delete node;
}

// 노드의 다음 노드를 반환한다.
// 반환값 : 다음 노드
Node* Node::GetNext() const
{
	return next;
}

// 노드의 이전 노드를 반환한다.
// 반환값 : 이전 노드
Node* Node::GetPrev() const
{
	return prev;
}

// 노드에 보관된 데이터를 반환한다.
// 반환값 : 보관된 데이타
void* Node::GetData() const
{
	return data;
}

/*
#include "list.h"
//25_2
#include "students.h"

//새로운 링크드 리스트를 만든다.
//반환 값:새로운 링크드 리스트의 포인터
//fnDelete:데이터 제거 시 호출할 함수
List* CreateList(FN_DELETE fnDelete) { //데이터 해제용 함수의 주소를 인자로.25_4.
	//헤드 노드를 만들고 초기화한다.
	Node* head = new Node;
	head->prev = head;
	head->next = head;
	head->data = 0;

	//List 구조체를 만들고 초기화한다.
	List* list = new List;
	list->head = head;

	//25_4
	//데이터 제거 함수의 주소를 보관한다.
	list->fnDel = fnDelete;

	//List 구조체를 반환한다.
	return list;
}

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

		//25_5
		//현재 노드의 데이터를 제거한다.
		if (deleteData) {
			//보관된 함수의 주소가 있는지 확인.
			//NULL이 보관되어 있는 상황에서 함수를 호출하면 프로그램이 비정상종료.
			if (list->fnDel)
				//데이터 해제 함수가 있는 경우에는 함수를 호출.
				//Node구조체의 data 멤버를 인자로 넘긴다.
				(*list->fnDel)(current->data);
			else
				delete current->data;
		}

		
		//현재 노드와 노드의 데이터를 제거한다.
		if (deleteData)
			//25_4
			//25_2
			delete current->data;
			//delete current->data;	

		//현재 노드를 제거한다.
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
*/


