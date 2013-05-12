#include "Stack.h"

using namespace std;

Stack::Stack(){
	total_num = 0;
	list = new IntLinkedList();
}

Stack::~Stack(){
	total_num = 0;
	delete(list);
}

void Stack::push(int k){
	list->addTail(k);
	total_num++;
}

int Stack::pop(){
	if(total_num > 0){
		int ret = list->removeTail();
		total_num--;
		return ret;
	}
	else{
		printf("empty!\n");
		return -1;
	}
}

int Stack::peek(){
	if(total_num > 0){
		int ret = list->peekTail();
		return ret;
	}
	else{
		printf("empty!\n");
		return -1;
	}
}

bool Stack::isEmpty(){
	if(total_num == 0)
		return true;
	else 
		return false;
}

void Stack::printStack(FILE *file){
	fprintf(file, "Stack: ");
	int element;
	int total_num2 = total_num;
	int i;
	IntLinkedList *list2 = new IntLinkedList();
	while(total_num > 0){
		element = this->pop();
		list2->addTail(element);
		if(total_num > 0){
			fprintf(file, "%d, ", element);
		}
		else{
			fprintf(file, "%d\n", element);
		}
	}
	for(i = 0; i < total_num2; i++){
		this->push(list2->removeTail());
	}	
}
