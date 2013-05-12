#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <cstdlib>
#include "IntNode.h"

class IntLinkedList {
  private:
	IntNode *head;

  public:
	IntLinkedList();

	void addHead(int v);
	void addTail(int v);
	int removeHead();
	int removeTail();
	int peekHead();
	int peekTail();

	void printList(FILE *f);
};

#endif
