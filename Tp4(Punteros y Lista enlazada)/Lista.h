#pragma once
#include "stdafx.h"
#include "Nodo.h"

class LinkedList {
public:
	Node *head;
	LinkedList();

	void addAtFront(Node *n);
	void addAtEnd(Node *n);
	bool isPrime(int c);
	bool isEmpty();
	Node* getLastNode();
	Node* search(int b);
	Node* deleteNode(int k);
	void printList();
};