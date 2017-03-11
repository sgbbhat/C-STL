//============================================================================
// Name        : STL-Vector.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> intVec(20);

	for(int i=0; i<20; i++)
	{
		intVec[i] = i;
	}

	for(unsigned i=0; i<intVec.size(); i++)
	{
		cout<<intVec.at(i) <<endl;
	}

	for(int i=0; i<5; i++)
	{
		intVec.push_back(i);
	}

	cout<<"---------------------------"<<endl;

	for(unsigned i=0; i<intVec.size(); i++)
	{
		cout<<intVec.at(i) <<endl;
	}

	cout<<"Size : "<<intVec.size()<<endl;

	cout<<"Iterator"<<endl;

	vector<int>::iterator it;

	for(it= intVec.begin(); it != intVec.end(); it++)
	{
		cout<<*it<<endl;
	}

	cout<<"Reverse Iterator"<<endl;

	vector<int>::reverse_iterator rit;

	for(rit = intVec.rbegin(); rit != intVec.rend(); rit++)
	{
		cout<<*rit<<endl;
	}

	cout<<"Insert"<<endl;

	vector<int> myVec;
	vector<int>::iterator it1 ;

	myVec.insert(it1, 1);
	it1++;
	myVec.push_back(2);
	it1++;
	myVec.push_back(3);
	it1++;

	vector<int>::iterator it2 ;

	for(it2= myVec.begin(); it2 != myVec.end(); it2++)
	{
		cout<<*it2<<endl;
	}

	cout<<"Resize vector"<<endl;
	vector<string> myString(5, "hello");
	myString.resize(8, "World");
	vector<string>::iterator sit;

	for(sit = myString.begin(); sit != myString.end(); sit++)
	{
		cout<<*sit<<endl;
	}

	cout<<"printing reverse"<<endl;

	vector<string>::reverse_iterator rsit;

	for(rsit = myString.rbegin(); rsit != myString.rend(); rsit++)
	{
		cout<<*rsit<<endl;
	}

	return 0;
}
