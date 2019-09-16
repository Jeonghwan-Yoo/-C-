#ifndef LIST_H
#define LIST_H

//하나의 데이터를 보관할 클래스
class Node { //Node 구조체를 클래스로 만들었다.
	//List 클래스에서 모든 멤버에 접근할 수 있게 만든다.
	//friend로 친구가 된 클래스는 자신의 private나 protected멤버까지도 접근할 수.
	//List클래스의 멤버 함수에서는 Node클래스의 private멤버를 접근할 수 있다.
	friend class List;

//Node클래스의 멤버 변수 값만을 얻을 수 있게 접근자를 만들었다.
public:
	Node* GetNext() const;
	Node* GetPrev() const;
	void* GetData() const;

//Node클래스의 외부에서는 이 멤버들의 값을 바꿀 수 없다.
//다만 List클래스는 Node클래스의 친구기 때문에 이 멤버들의 값을 바꿀 수 있다.
private:
	Node* prev; //이전 Node 구조체
	Node* next; //다음 Node 구조체
	void* data; //데이터에 대한 포인터
};

//전체 리스트를 관리하는 클래스
class List { //List구조체도 클래스로 만들었다.
public:
	//데이터 제거를 위한 함수의 포인터
	//List클래스와 관련된 것이므로 클래스의 정의에 포함하는 것이 좋다.
	typedef void(*FN_DELETE)(void*);

public:
	//CreateList()와 RemoveList()는 생성자와 소멸자로 대체되었다.
	List(FN_DELETE fnDelete = 0, bool deleteData = true);
	~List();

	//기존에 함수들 중에서 리스트와 관련된 것들은 멤버 함수가 되었다.
	void InsertNodeAfter(Node* node, void* data);
	void RemoveNode(Node* node);
	Node* GetHead() const;
	Node* GetTail() const;

	void RemoveAll();

//구조체에 있던 멤버들이 그대로 멤버 변수.
//deleteData는 생성자에서 true나 false로 설정, RemoveNode()나RemoveAll()에서 사용.
private:
	Node* head; //헤드(더미) 노드
	bool deleteData; //리스트, 노드 제거 시 데이터 제거 여부
	FN_DELETE fnDel; //데이터 제거 시 호출할 함수
};


/*
//25_4
//데이터 제거를 위한 함수의 포인터
//노드의 데이터 해제용 함수를 보관하기 위한 함수의 포인터 타입을 정의.
typedef void(*FN_DELETE)(void*);

// 하나의 데이타를 보관할 구조체
struct Node
{
	Node* prev; // 이전 Node 구조체
	Node* next;	// 다음 Node 구조체
	//타입에 상관없이 가리킨다.
	void* data;	// 데이타에 대한 포인터
};

// 전체 리스트를 관리하는 구조체
struct List
{
	Node* head;	// 헤드 노드
	//25_4
	FN_DELETE fnDel; //데이터 제거시 호출할 함수.
};

List* CreateList(FN_DELETE fnDelete);
void RemoveList(List* list, bool deleteData);
Node* GetTail(List* list);

void InsertNodeAfter(Node* node, void* data);
void RemoveNode(Node* node, bool deleteData);
Node* GetNext(Node* node);
Node* GetPrev(Node* node);
void* GetData(Node* node);
*/



#endif