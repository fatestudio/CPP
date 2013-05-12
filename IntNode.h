#ifndef LINK_H
#define LINK_H
#include <cstdlib>

class IntNode {
  private:
	int value;
	IntNode *next;

  public:
	IntNode(int v);
	IntNode();

	void setValue(int v);
	void setNext(IntNode *l);
	int getValue();
	IntNode *getNext();

	void printIntNode(FILE *f);
};

#endif
