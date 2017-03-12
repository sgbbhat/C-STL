//============================================================================
// Name        : Stack.cpp
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

class Stack
{
private:
	node * front;
	node * rear;
	node * curr;

public:
	Stack();
	void push(int key);
	void pop();
	void PrintStack();
};

Stack::Stack()
{
	front = NULL;
	rear = NULL;
	curr = NULL;
}

void Stack::push(int key)
{
	node * n = new node();
	n->Key = key;

	if(front == NULL)
	{
		front = n;
		rear = n;
		cout<<"Key "<<key<<" pushed"<<endl;
		n->next = NULL;
	}
	else
	{
		n->next = front;
		front = n;
		cout<<"Key "<<key<<" pushed"<<endl;
	}
}

void Stack::pop()
{
	node * delPtr = new node();
	int key;

	if(front == NULL)
	{
		cout<<"Stack is Empty"<<endl;
	}
	else
	{
		key = front->Key;
		delPtr = front;
		front = front->next;
		cout<<"Key "<<key<<" popped"<<endl;
	}
	delete delPtr;
}

void Stack::PrintStack()
{
	curr = front;

	while(curr != NULL)
	{
		cout<<curr->Key<<endl;
		curr = curr->next;
	}
}

int main() {
	Stack S1;

	cout<<"Testing PUSH"<<endl;
	S1.push(5);
	S1.push(10);
	S1.push(15);
	S1.push(20);

	cout<<"Testing PRINT"<<endl;
	S1.PrintStack();

	cout<<"Testing POP"<<endl;
	S1.pop();
	S1.pop();

	cout<<"Testing PRINT"<<endl;
	S1.PrintStack();

	cout<<"Testing POP"<<endl;
	S1.pop();

	cout<<"Testing PUSH"<<endl;
	S1.push(35);
	S1.push(40);

	cout<<"Testing PRINT"<<endl;
	S1.PrintStack();

	return 0;
}
