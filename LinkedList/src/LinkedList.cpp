//============================================================================
// Name        : LinkedList.cpp
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

class LinkedList
{
private:
	node * headPtr;
	node * currPtr;
	node * tempPtr;

public:
	LinkedList();
	void AddNode(int Key);
	void DeleteNode(int Key);
	void PrintList();
};

LinkedList::LinkedList()
{
	headPtr = NULL;
	currPtr = NULL;
	tempPtr = NULL;
}

void LinkedList::AddNode(int Key)
{
	node * n = new node();
	n->Key = Key;
	n->next = NULL;

	currPtr = headPtr;

	if(headPtr == NULL)
	{
		headPtr = n;
	}
	else
	{
		while(currPtr->next != NULL)
		{
			currPtr = currPtr->next;
		}

		currPtr->next = n;
	}
}

void LinkedList::DeleteNode(int key)
{
	node * delPtr = new node();
	delPtr->next = NULL;

	currPtr = headPtr;

	if(headPtr == NULL)
	{
		cout<<"List is empty"<<endl;
	}
	else
	{
		while(currPtr != NULL && currPtr->Key != key)
		{
			tempPtr = currPtr;
			currPtr = currPtr->next;
		}

		if(currPtr == NULL)
		{
			cout<<"Key not in the list"<<endl;
		}
		else
		{
			if(currPtr == headPtr)
			{
				delPtr = currPtr;
				headPtr = headPtr->next;
			}
			else
			{
				delPtr = currPtr;
				currPtr = currPtr->next;
				tempPtr->next = currPtr;
			}
		}
		delete delPtr;
	}
}

void LinkedList::PrintList()
{
	currPtr = headPtr;

	while(currPtr != NULL)
	{
		cout<<currPtr->Key<<endl;
		currPtr = currPtr->next;
	}
}

int main() {
	LinkedList List;

	cout<<"Testing add node"<<endl;
	List.AddNode(20);
	List.AddNode(30);
	List.AddNode(40);
	List.AddNode(50);

	cout<<"Printing List"<<endl;
	List.PrintList();

	cout<<"Deleting List"<<endl;
	List.DeleteNode(30);

	cout<<"Printing List"<<endl;
	List.PrintList();

	cout<<"Deleting List"<<endl;
	List.DeleteNode(20);

	cout<<"Printing List"<<endl;
	List.PrintList();

	cout<<"Testing add node"<<endl;
	List.AddNode(60);
	List.AddNode(70);

	cout<<"Printing List"<<endl;
	List.PrintList();

	cout<<"Deleting List"<<endl;
	List.DeleteNode(40);

	cout<<"Printing List"<<endl;
	List.PrintList();

	return 0;
}
