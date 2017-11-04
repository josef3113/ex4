#include <iostream>
#include <queue>
#include "Node.h"
#include "Queue.h"

using namespace std;

Queue::Queue()
{
	head=NULL;
}
Node * Queue::gethead()
{
	return head;
}

void Queue::addNode(Node &toadd)
{
	if (gethead()==NULL)
	{
		sethead(&toadd);
	}
	else
	{
		Node* temp=head;
		while(temp.next!=NULL)
	}


}
void Queue::sethead(Node * tochange)
{
	head=tochange;
}
//Node Queue::getNode()
//{
//	if (!newQ.empty())
//	{
//		Node temp;
//		temp=newQ.front();
//		newQ.pop();
//		cout<<"pop out"<<endl;
//		return temp;
//    }
//	else
//	{
//		cout<<"the queue is empty\n";
//	}
//}
//
//Node Queue::topNode()
//{
//	return (newQ.front());
//}
//
//int Queue::isempty()
//{
//	if(newQ.empty())
//		return 1;
//	else 
//		return 0;
//}

//void printQueue(Queue toprint)              //printQueue(Queue&) so in during print is delete the queue!!!!!
//{
//	if(toprint.isempty())
//	{
//		cout<<"the queue is empty\n";
//	}
//	else
//	{
//		//Queue copy=toprint;
//
//		int i=1;
//		while (!toprint.isempty())
//			{
//				cout<<i<<")";
//				printNode(toprint.getNode());
//				i++;
//			}
//	}
//}