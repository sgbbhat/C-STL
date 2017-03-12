//============================================================================
// Name        : Queue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct node
{
	int Key;
	node * next;
};

class Queue
{
private:
	node * front;
	node * rear;
	node * curr;

public:
	Queue();
	void Enqueue(int key);
	void Dequeue();
	void PrintQueue();
};

Queue::Queue()
{
	front = NULL;
	rear = NULL;
	curr = NULL;
}

void Queue::Enqueue(int key)
{
	node * n = new node();
	n->Key = key;
	n->next = NULL;

	if(front == NULL)
	{
		front = n ;
		rear = n ;
	}
	else
	{
		curr = front;

		while(curr->next != NULL)
		{
			curr = curr->next;
		}

		curr->next = n;
		rear = n;
	}

	cout<<"Key "<<key<<" added to the queue"<<endl;
}

void Queue::Dequeue()
{
	node * delPtr = new node();
	int key;
	if(front == NULL)
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		delPtr = front;
		key = front->Key;
		front = front->next;
	}
	cout<<"Key "<<key<<" removed from the queue"<<endl;
	delete delPtr;
}

void Queue::PrintQueue()
{
	curr = front;

	while(curr != NULL)
	{
		cout<<curr->Key<<endl;
		curr = curr->next;
	}
}

int main() {
	Queue Sch1;

	cout<<"Testing Enqueue"<<endl;
	Sch1.Enqueue(25);
	Sch1.Enqueue(35);
	Sch1.Enqueue(45);
	Sch1.Enqueue(55);

	cout<<"Testing Print"<<endl;
	Sch1.PrintQueue();

	cout<<"Testing Dequeue"<<endl;
	Sch1.Dequeue();

	cout<<"Testing Print"<<endl;
	Sch1.PrintQueue();

	cout<<"Testing Dequeue"<<endl;
	Sch1.Dequeue();

	cout<<"Testing Print"<<endl;
	Sch1.PrintQueue();

	cout<<"Testing Enqueue"<<endl;
	Sch1.Enqueue(25);
	Sch1.Enqueue(35);

	cout<<"Testing Print"<<endl;
	Sch1.PrintQueue();

	cout<<"Testing Dequeue"<<endl;
	Sch1.Dequeue();

	cout<<"Testing Print"<<endl;
	Sch1.PrintQueue();

	return 0;
}
