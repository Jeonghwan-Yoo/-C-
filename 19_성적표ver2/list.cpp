#include "list.h"

//19_10 CreateList() �Լ��� ����
//���ο� ��ũ�� ����Ʈ�� �����.
//��ȯ ��:���ο� ��ũ�� ����Ʈ�� ������
List* CreateList() {
	//��� ��带 ����� �ʱ�ȭ�Ѵ�.
	Node* head = new Node;
	head->prev = head;
	head->next = head;
	head->data = 0;

	//List ����ü�� ����� �ʱ�ȭ�Ѵ�.
	List* list = new List;
	list->head = head;

	//List ����ü�� ��ȯ�Ѵ�.
	return list;
}

//19_11 InsertNodeAfert() �Լ��� ����
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

//19_12 RemoveNode() �Լ��� ����
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

/*
//19_13 ��� �л��� �̸� ����ϱ�
void ShowNames(List* students) {
	//��� ����� ���� ������ �����Ѵ�.
	Node* current = students->head->next; //������� ���� ��带 ����Ű��.
	while (current != students->head) { //�ѹ������ƿö����� �ݺ�.
		//���� ����� �����͸� �����´�.
		//void*Ÿ������ �����Ǿ� �����Ƿ� ����ȯ�ؾ� �Ѵ�.
		const Student* std = (Student*)current->data;

		//�ش� �л��� �̸��� ����Ѵ�.
		cout << std->name << "\n";

		//���� ��带 ����Ų��.
		current = current->next;
	}
}
*/

//19_14 RemoveList() ����
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

		//���� ���� ����� �����͸� �����Ѵ�.
		if (deleteData)
			delete current->data;
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
