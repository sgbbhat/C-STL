//============================================================================
// Name        : DoubleLinkedList.cpp
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
	node * prev;
};

class DLinkList
{
private:
	node * headPtr;
	node * tailPtr;
	node * currPtr;
	node * tempPtr;

public:
	DLinkList();
	void AddNode(int Key);
	void DeleteNode(int Key);
	void PrintForward();
	void PrintReverse();
};

DLinkList::DLinkList()
{
	headPtr = NULL;
	tailPtr = NULL;
	currPtr = NULL;
	tempPtr = NULL;
}


void DLinkList::AddNode(int Key)
{

}


int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
