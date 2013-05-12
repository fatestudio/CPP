using namespace std;
#include <cstdlib>
#include <cstdio>
#include "Stack.h"

int main(int argc, char *argv[])
{
	
	Stack* slist[10];	// AWESOME!!
	Stack *s = new Stack();
	slist[3] = s;

	printf("push 5\n");
	s->push(5);
	printf("push 10\n");
	s->push(10);
	printf("Peek slist[3]: %d\n", slist[3]->peek());
	printf("push 3\n");
	s->push(3);
	printf("Peek: 3? %d\n",s->peek());
	printf("isEmpty: %d\n",s->isEmpty());
	printf("Print: 3, 10, 5? ");
	s->printStack(stdout);
	printf("Pop: 3? %d\n",s->pop());
	printf("Peek: 10? %d\n",s->peek());
	printf("isEmpty: %d\n",s->isEmpty());
	printf("Pop: 10? %d\n",s->pop());
	printf("push 7\n");
	s->push(7);
	printf("Peek: 7? %d\n",s->peek());
	printf("Pop: 7? %d\n",s->pop());
	printf("Pop: 5? %d\n",s->pop());
	printf("isEmpty: %d\n",s->isEmpty());
	printf("What do with an empty stack?  Just don't seg fault!\n");
	printf("Peek: (undefined)? %d\n",s->peek());
	printf("Pop: (undefined)? %d\n",s->pop());
}

