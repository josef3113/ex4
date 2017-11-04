#ifndef QUEUE_H
#define QUEUE_H
#include <queue>

using namespace std;

class Queue
{
private:
	 Node *head; 
public:
	Queue();
	Node *gethead();
	void sethead(Node*);
	void addNode(Node&);
	//Node getNode();
	//Node topNode();
//	int isempty();
	friend void printQueue(Queue);//if printQueue(Queue&)

};

void printQueue(Queue );//printQueue(Queue&)

#endif