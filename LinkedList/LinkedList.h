/*
 * LinkedList.h
 *
 *  Created on: 05-May-2015
 *      Author: arpan
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <iostream>
#include "Node.h"

template <class K>
class LinkedList {

private:
	Node<K> *head;
	Node<K> *tail;

public:
	//friend template class Node;
	LinkedList(void);
	LinkedList(K);
	~LinkedList(void);

	void printLinkedList(void);
	void appendList(K);
	void deleteNodeWithVal(K v);

	void removeDups();
};

template <class K>
LinkedList<K>::LinkedList(void)
{
	head = NULL;
	tail = NULL;
}

template <class K>
LinkedList<K>::LinkedList(K val)
{
	head = new Node<K>(val);
	tail = head;
}

template <class K>
LinkedList<K>::~LinkedList(void)
{
//Todo: delete the linked list
}

template <class K>
void LinkedList<K>::printLinkedList(void)
{
	Node<K> *run = head;
	if (run == NULL) {
		cout << "LinkedList empty." << endl;
		return;
	}
	cout << "LinkedList:" << endl;
	while (run != NULL) {
		std::cout << run->getValue() << " ";
		run = run->getNextNode();
	}
	cout << endl;
}

template <class K>
void LinkedList<K>::appendList(K v)
{
	Node<K> *new_node = new Node<K>(v);
	if (tail != NULL) {
		tail->setNextNode(new_node);
		tail = new_node;
	}
}

template <class K>
void LinkedList<K>::deleteNodeWithVal(K v)
{
	Node<K> *run = head;
	Node<K> *prev = head;
	if (run == NULL) {
		cout << "LinkedList empty." << endl;
		return;
	}
	
	cout << "v.value : " << v << endl;
	while (run != NULL) {
		if (run->getValue() == v) {
			if (run == head) {
				free(head);
			} else {
				prev->setNextNode(run->getNextNode());
			}
			cout << "Node deleted" << endl;
			return;
		}
		prev = run;
		run = run->getNextNode();
	}

	cout << "Couldn't find node to delete" << endl;
}

template <class K>
void LinkedList<K>::removeDups(void)
{
	Node<K> *run = head;
	Node<K> *prev = head;
	Node<K> *cursor = head;

	if (run == NULL) {
		cout << "LinkedList empty." << endl;
		return;
	}
	
	run = run->getNextNode();	
	while (cursor != run) {
		
		if (cursor->getValue() == run->getValue()) {
			
		}

	}
}

#endif /* LINKEDLIST_H_ */
