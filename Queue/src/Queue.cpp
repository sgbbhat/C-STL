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
	void push(int key);
	void pop();
	void PrintQueue();
};

Queue::Queue()
{
	front = NULL;
	rear = NULL;
	curr = NULL;
}

void Queue::push(int key)
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

void Queue::pop()
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

	cout<<"Testing push"<<endl;
	Sch1.push(25);
	Sch1.push(35);
	Sch1.push(45);
	Sch1.push(55);

	cout<<"Testing Print"<<endl;
	Sch1.PrintQueue();

	cout<<"Testing pop"<<endl;
	Sch1.pop();

	cout<<"Testing Print"<<endl;
	Sch1.PrintQueue();

	cout<<"Testing pop"<<endl;
	Sch1.pop();

	cout<<"Testing Print"<<endl;
	Sch1.PrintQueue();

	cout<<"Testing push"<<endl;
	Sch1.push(25);
	Sch1.push(35);

	cout<<"Testing Print"<<endl;
	Sch1.PrintQueue();

	cout<<"Testing pop"<<endl;
	Sch1.pop();

	cout<<"Testing Print"<<endl;
	Sch1.PrintQueue();

	return 0;
}
