#ifndef LIST_H
#define LIST_H

/*
//19_7 ��� ����ü�� ����1
struct Node {
	//�յڷ� ����� ��带 ����Ű�� ������
	Node* prev;
	Node* next;

	//Student ����
	Student std;
};
*/

//19_8 ��� ����ü�� ����2
// �ϳ��� ����Ÿ�� ������ ����ü
struct Node
{
	Node* prev; // ���� Node ����ü
	Node* next;	// ���� Node ����ü
	//Ÿ�Կ� ������� ����Ų��.
	void* data;	// ����Ÿ�� ���� ������
};

//19_9 ��ũ�� ����Ʈ�� ����
// ��ü ����Ʈ�� �����ϴ� ����ü
struct List
{
	Node* head;	// ��� ���
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