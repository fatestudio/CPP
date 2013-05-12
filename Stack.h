#ifndef STACK_H
#define STACK_H
#include <cstdio>
#include "IntLinkedList.h"

class Stack {
  private:
	// fill in the two private instance variables here!
	int total_num;
	IntLinkedList *list;
  public:
	Stack();
	~Stack();

	void push(int);
	int pop();
	int peek();
	bool isEmpty();

	void printStack(FILE *);
};

#endif

