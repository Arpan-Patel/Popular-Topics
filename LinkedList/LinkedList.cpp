//============================================================================
// Name        : LinkedList.cpp
// Author      : Arpan
// Version     :
// Copyright   : (c) 2015 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Node.h"
#include "LinkedList.h"


int main() {
	LinkedList<int> ll;
	cout << "created an empty linked list." << endl; // prints Linked List ...
	ll.printLinkedList();

	LinkedList<float> ll2(20.0);
	ll2.printLinkedList();

	ll2.appendList(30.1);
	ll2.appendList(40.2);
	ll2.printLinkedList();

	ll2.deleteNodeWithVal(31);
	ll2.printLinkedList();

	LinkedList<string> lst("arpan");
	lst.appendList("patel");
	lst.appendList("abc");
	return 0;
}
