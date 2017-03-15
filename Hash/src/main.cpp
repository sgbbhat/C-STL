//============================================================================
// Name        : Hash.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "hash.h"
using namespace std;

int main() {
	HashTable phonebook;
	int array[3]{1,2,3};
	phonebook.AddItems("Andy", 11);
	phonebook.AddItems("Mark", 22);
	phonebook.AddItems("Mike", 33);
	phonebook.AddItems("Shaun", 44);
	phonebook.AddItems("Debra", 55);
	phonebook.AddItems("Steve", 66);
	phonebook.AddItems("John", 77);
	phonebook.AddItems("Micheal", 88);
	phonebook.AddItems("Daniel", 99);
	phonebook.AddItems("Michelle", 111);

	phonebook.RemoveItem("John");
	phonebook.RemoveItem("Steve");
	phonebook.PrintTable();

	// cout<<phonebook.FindContact("Andy")<<endl;
	// cout<<phonebook.FindContact("Shreeganesh")<<endl;

	return 0;
}
