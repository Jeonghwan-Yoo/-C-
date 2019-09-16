#include "list.h"
//25_26
#include <stdexcept>
using namespace std;

// ��ũ�� ����Ʈ�� ������.
// fnDelete : ����� ������ ���Ž� ȣ���� �Լ��� �ּ�
// deleteData : true�� ��带 ������ �� �����͵� �����Ѵ�.
List::List(FN_DELETE fnDelete, bool deleteData)
{
	// ���ڸ� �����Ѵ�.
	this->fnDel = fnDelete;
	this->deleteData = deleteData;

	// ��� ��带 ����� �ʱ�ȭ�Ѵ�.
	head = new Node;
	head->prev = head;
	head->next = head;
	head->data = 0;
}

// ��ũ�� ����Ʈ�� �Ҹ���
List::~List()
{
	// ��� ��带 �����Ѵ�.
	RemoveAll();

	// ��� ��带 �����Ѵ�.
	delete head;
	head = 0;
}

// ����Ʈ�� ��� ��带 �����Ѵ�. 
// ����Ʈ�� ��� ���� �����͵� �����Ѵ�.
void List::RemoveAll()
{
	// ��� ����� ���� ������ �����.
	// ( �̷��� �ϸ� RemoveAll() �Լ��� ȣ���� �Ŀ���
	// List ��ü�� �ٽ� ����� �� �ִ�)
	Node* current = head->next;

	while (current != head)
	{
		// ���� ��带 ���� ���̹Ƿ�
		// ���� ��带 ���صд�.
		Node* next = current->next;

		// ���� ����� �����͸� �����Ѵ�.
		if (deleteData)
		{
			if (fnDel)
				(*fnDel)(current->data);
			else
				delete current->data;
		}

		// ���� ��带 �����Ѵ�.
		delete current;

		// current�� ���� ��带 ����Ű�� �Ѵ�.
		current = next;
	}

	// ��� ��带 �ʱ�ȭ�Ѵ�.
	head->next = head;
	head->prev = head;
}

// ù��° ��带 ���Ѵ�.
// ��ȯ�� : ����Ʈ�� ù��° ���
Node* List::GetHead() const
{
	// ��� ��带 ��ȯ�Ѵ�.
	return head;
}

// ������ ��带 ���Ѵ�.
// ��ȯ�� : ����Ʈ�� ������ ���
Node* List::GetTail() const
{
	// ��� ����� ���� ��带 ��ȯ�Ѵ�.
	// (��� ��� �ڱ� �ڽ��� ���� �ִ�.)
	return head->prev;
}

// ���ο� ��带 �߰��Ѵ�.
// node : �� ��� �ڿ� �� ��尡 �߰��ȴ�.
// data : �� ����� ����Ÿ
void List::InsertNodeAfter(Node* node, void* data)
{
	//25_26 ����ó��
	if (NULL == node)
		throw invalid_argument("�� �� ���� ������ �ֽ��ϴ�.(337)");

	// ���ԵǷ��� ���� ��, �� ��带 ���س�����
	// �б� ���� �ҽ� �ڵ带 ���� �� �ִ�.
	Node* before = node;
	Node* after = node->next;

	// �� ��带 ����� �ʱ�ȭ�Ѵ�.
	Node* newNode = new Node;
	newNode->data = data;
	newNode->next = after;
	newNode->prev = before;

	// node�� �ڿ� �ִ� ��尡 �� ��带 ����Ű���� �����.
	after->prev = newNode;

	// �Ű����� node�� �� ��带 ����Ű���� �����.
	before->next = newNode;
}

// ��带 �����Ѵ�.
// node : ������ ���
void List::RemoveNode(Node* node)
{
	//25_26 ����ó��
	if (NULL == node)
		throw invalid_argument("�� �� ���� ������ �ֽ��ϴ�.(337)");

	// node�� ��, �� ��带 ���س�����
	// �б� ���� �ҽ� �ڵ带 ���� �� �ִ�.
	Node* before = node->prev;
	Node* after = node->next;

	// node�� ���� ���� ���� ��带 �������ش�.
	before->next = after;
	after->prev = before;

	// ���� ����� �����͸� �����Ѵ�.
	if (deleteData)
	{
		if (fnDel)
			(*fnDel)(node->data);
		else
			delete node->data;
	}

	// ���� ��带 �����Ѵ�.
	delete node;
}

// ����� ���� ��带 ��ȯ�Ѵ�.
// ��ȯ�� : ���� ���
Node* Node::GetNext() const
{
	return next;
}

// ����� ���� ��带 ��ȯ�Ѵ�.
// ��ȯ�� : ���� ���
Node* Node::GetPrev() const
{
	return prev;
}

// ��忡 ������ �����͸� ��ȯ�Ѵ�.
// ��ȯ�� : ������ ����Ÿ
void* Node::GetData() const
{
	return data;
}

/*
#include "list.h"
//25_2
#include "students.h"

//���ο� ��ũ�� ����Ʈ�� �����.
//��ȯ ��:���ο� ��ũ�� ����Ʈ�� ������
//fnDelete:������ ���� �� ȣ���� �Լ�
List* CreateList(FN_DELETE fnDelete) { //������ ������ �Լ��� �ּҸ� ���ڷ�.25_4.
	//��� ��带 ����� �ʱ�ȭ�Ѵ�.
	Node* head = new Node;
	head->prev = head;
	head->next = head;
	head->data = 0;

	//List ����ü�� ����� �ʱ�ȭ�Ѵ�.
	List* list = new List;
	list->head = head;

	//25_4
	//������ ���� �Լ��� �ּҸ� �����Ѵ�.
	list->fnDel = fnDelete;

	//List ����ü�� ��ȯ�Ѵ�.
	return list;
}

//���ο� ��带 �߰��Ѵ�.
//node:�� ��� �ڿ� �� ��尡 �߰��ȴ�.
//data:�� ����� ������
void InsertNodeAfter(Node* node, void* data) {
	//���ԵǷ��� ���� ��, �� ��带 ���س����� �б� ���� �ڵ带 ���� �� �ִ�.
	Node* before = node;
	Node* after = node->next;

	//�� ��带 ����� �ʱ�ȭ�Ѵ�.
	Node* newNode = new Node;
	newNode->data = data;
	newNode->next = after;
	newNode->prev = before;

	//node�� �ڿ� �ִ� ��尡 �� ��带 ����Ű�� �����.
	after->prev = newNode;

	//�Ű� ���� node�� �� ��带 ����Ű�� �����.
	before->next = newNode;
}

//��带 �����Ѵ�.
//node:������ ���
//deleteData:true�� ��尡 ����Ű�� �����͵� �����Ѵ�.
void RemoveNode(Node* node, bool deleteData) {
	//node�� ��, �� ��带 ���س����� �б� ���� �ڵ带 ���� �� �ִ�.
	Node* before = node->prev;
	Node* after = node->next;

	//node�� ���� ���� ���� ��带 �������ش�.
	//�ڿ������� node ���� ����Ʈ���� ������ ������ �ȴ�.
	before->next = after;
	after->prev = before;

	//node�� �����Ϳ� node �ڽ��� �����Ѵ�.
	//deleteData�� ���� true�̸� ��尡 �����ϴ� ������ �����Ѵ�.
	if (deleteData)
		delete node->data;
	delete node;
}

//����Ʈ�� �����Ѵ�.
//����Ʈ�� ��� ���� �����͵� �����Ѵ�.
//list:����Ʈ
//deleteData:true�� ����� �����͵� �����Ѵ�.
void RemoveList(List* list, bool deleteData) {
	//head������ ������ ������ �����Ѵ�.
	Node* current = list->head; //��� ������ ������ ���̴�.

	do {
		//���� ��带 ������ ���̹Ƿ� ���� ��带 ���صд�.
		//����Ű�� ���� �����ϸ� ���� ���� ����ų ���� ����.
		Node* next = current->next;

		//25_5
		//���� ����� �����͸� �����Ѵ�.
		if (deleteData) {
			//������ �Լ��� �ּҰ� �ִ��� Ȯ��.
			//NULL�� �����Ǿ� �ִ� ��Ȳ���� �Լ��� ȣ���ϸ� ���α׷��� ����������.
			if (list->fnDel)
				//������ ���� �Լ��� �ִ� ��쿡�� �Լ��� ȣ��.
				//Node����ü�� data ����� ���ڷ� �ѱ��.
				(*list->fnDel)(current->data);
			else
				delete current->data;
		}

		
		//���� ���� ����� �����͸� �����Ѵ�.
		if (deleteData)
			//25_4
			//25_2
			delete current->data;
			//delete current->data;	

		//���� ��带 �����Ѵ�.
		delete current;

		//���� ��带 �����Ѵ�.
		current = next;
	} while (current != list->head);
	//while()���� ������ ���¿��� list->head�� ����Ű�� ���� �޸𸮴�
	//������ ����������, list->headó�� �װ��� �ּ� ���� ����ϴ� ���� �������.
	//current�� ����带 ����Ű�� ���� ���ȸ� �ݺ�.
	//�ٽ� ��� ��带 ����Ű�� �ݺ��� ����.

	//����Ʈ�� �����Ѵ�.
	delete list;
}

// ������ ��带 ���Ѵ�.
// list : ����Ʈ
// ��ȯ�� : ����Ʈ�� ������ ���
Node* GetTail(List* list)
{
	// ��� ����� ���� ��带 ��ȯ�Ѵ�.
	// (��� ��� �ڱ� �ڽ��� ���� �ִ�.)
	return list->head->prev;
}

// ����� ���� ��带 ��ȯ�Ѵ�.
// node : �� ����� ���� ��尡 ��ȯ�ȴ�.
// ��ȯ�� : node�� ���� ���
Node* GetNext(Node* node)
{
	return node->next;
}

// ����� ���� ��带 ��ȯ�Ѵ�.
// node : �� ����� ���� ��尡 ��ȯ�ȴ�.
// ��ȯ�� : node�� ���� ���
Node* GetPrev(Node* node)
{
	return node->prev;
}

// ��忡 ������ �����͸� ��ȯ�Ѵ�.
// node : �� ����� �����͸� ��ȯ�Ѵ�.
// ��ȯ�� : node�� ������ ����Ÿ
void* GetData(Node* node)
{
	return node->data;
}
*/


