#include "stdafx.h"
#include "Nodo.h"
#include "Lista.h"

LinkedList::LinkedList() {
	head = NULL;
}

void LinkedList::addAtFront(Node *n) {
	n->next = head;
	head = n;
}

void LinkedList::addAtEnd(Node *n) {
	if (head == NULL) {
		head = n;
		n->next = NULL;
	}
	else {
		Node *n2 = getLastNode();
		n2->next = n;
	}
}

bool isPrime(int c) {
	return 1;
}

bool LinkedList::isEmpty() {
	if (head == NULL) { return 1; }
	else { return 0; }
}

Node* LinkedList::getLastNode() {
	Node* ptr = head;
	while (ptr->next != NULL) {
		ptr = ptr->next;
	}
	return ptr;
}

Node* LinkedList::search(int b) {
	Node *ptr = head;
	while (ptr != NULL && ptr->data != b) {
		ptr = ptr->next;
	}
	return ptr;
}

Node* LinkedList::deleteNode(int k) {
	Node *n = search(k);
	Node *ptr = head;
	if (ptr == n) {
		ptr->next = n->next;
		return n;
	}
	else {
		while (ptr->next != n)
		{
			ptr = ptr->next;
		}
		ptr->next = n->next;
		return n;
	}
}

void LinkedList::printList() {
	Node* ptr = head;
	while (ptr != NULL)
	{
		std::cout << ptr->data << "-> " << std::endl;
		ptr = ptr->next;
	}
}