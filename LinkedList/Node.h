/*
 * Node.h
 *
 *  Created on: 05-May-2015
 *      Author: arpan
 */

#ifndef NODE_H_
#define NODE_H_

#include <iostream>

template <class T>
class Node {

private:
	T value;
	Node<T> *next;

public:
	//friend class LinkedList;
	Node(void)
	: value(NULL), next(NULL) { }

	Node(T v)
	: value(v), next(NULL) { }

	Node(T v, Node *n)
	: value(v), next(n) { }

	T getValue()
	{ return value; }

	Node * getNextNode(void)
	{ return next; }

	void setNextNode(Node *n)
	{ next = n; }

};

#endif /* NODE_H_ */
