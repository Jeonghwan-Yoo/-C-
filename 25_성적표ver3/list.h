#ifndef LIST_H
#define LIST_H

//�ϳ��� �����͸� ������ Ŭ����
class Node { //Node ����ü�� Ŭ������ �������.
	//List Ŭ�������� ��� ����� ������ �� �ְ� �����.
	//friend�� ģ���� �� Ŭ������ �ڽ��� private�� protected��������� ������ ��.
	//ListŬ������ ��� �Լ������� NodeŬ������ private����� ������ �� �ִ�.
	friend class List;

//NodeŬ������ ��� ���� ������ ���� �� �ְ� �����ڸ� �������.
public:
	Node* GetNext() const;
	Node* GetPrev() const;
	void* GetData() const;

//NodeŬ������ �ܺο����� �� ������� ���� �ٲ� �� ����.
//�ٸ� ListŬ������ NodeŬ������ ģ���� ������ �� ������� ���� �ٲ� �� �ִ�.
private:
	Node* prev; //���� Node ����ü
	Node* next; //���� Node ����ü
	void* data; //�����Ϳ� ���� ������
};

//��ü ����Ʈ�� �����ϴ� Ŭ����
class List { //List����ü�� Ŭ������ �������.
public:
	//������ ���Ÿ� ���� �Լ��� ������
	//ListŬ������ ���õ� ���̹Ƿ� Ŭ������ ���ǿ� �����ϴ� ���� ����.
	typedef void(*FN_DELETE)(void*);

public:
	//CreateList()�� RemoveList()�� �����ڿ� �Ҹ��ڷ� ��ü�Ǿ���.
	List(FN_DELETE fnDelete = 0, bool deleteData = true);
	~List();

	//������ �Լ��� �߿��� ����Ʈ�� ���õ� �͵��� ��� �Լ��� �Ǿ���.
	void InsertNodeAfter(Node* node, void* data);
	void RemoveNode(Node* node);
	Node* GetHead() const;
	Node* GetTail() const;

	void RemoveAll();

//����ü�� �ִ� ������� �״�� ��� ����.
//deleteData�� �����ڿ��� true�� false�� ����, RemoveNode()��RemoveAll()���� ���.
private:
	Node* head; //���(����) ���
	bool deleteData; //����Ʈ, ��� ���� �� ������ ���� ����
	FN_DELETE fnDel; //������ ���� �� ȣ���� �Լ�
};


/*
//25_4
//������ ���Ÿ� ���� �Լ��� ������
//����� ������ ������ �Լ��� �����ϱ� ���� �Լ��� ������ Ÿ���� ����.
typedef void(*FN_DELETE)(void*);

// �ϳ��� ����Ÿ�� ������ ����ü
struct Node
{
	Node* prev; // ���� Node ����ü
	Node* next;	// ���� Node ����ü
	//Ÿ�Կ� ������� ����Ų��.
	void* data;	// ����Ÿ�� ���� ������
};

// ��ü ����Ʈ�� �����ϴ� ����ü
struct List
{
	Node* head;	// ��� ���
	//25_4
	FN_DELETE fnDel; //������ ���Ž� ȣ���� �Լ�.
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