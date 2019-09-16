#ifndef LIST_H
#define LIST_H

/*
//19_7 노드 구조체의 구현1
struct Node {
	//앞뒤로 연결된 노드를 가리키는 포인터
	Node* prev;
	Node* next;

	//Student 변수
	Student std;
};
*/

//19_8 노드 구조체의 구현2
// 하나의 데이타를 보관할 구조체
struct Node
{
	Node* prev; // 이전 Node 구조체
	Node* next;	// 다음 Node 구조체
	//타입에 상관없이 가리킨다.
	void* data;	// 데이타에 대한 포인터
};

//19_9 링크드 리스트의 구현
// 전체 리스트를 관리하는 구조체
struct List
{
	Node* head;	// 헤드 노드
};

List* CreateList();
void RemoveList(List* list, bool deleteData);
Node* GetTail(List* list);

void InsertNodeAfter(Node* node, void* data);
void RemoveNode(Node* node, bool deleteData);
Node* GetNext(Node* node);
Node* GetPrev(Node* node);
void* GetData(Node* node);

#endif