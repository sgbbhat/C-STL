//============================================================================
// Name        : STL-map.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string,int> quiz;
	quiz["Paul"] = 20;
	quiz["Alex"] = 30;
	quiz["Steve"] = 40;
	quiz["Max"] = 50;
	quiz["Paul"] = 30;
	quiz["Paul"] = 40;

	map<string, int>::iterator it;
	for(it = quiz.begin(); it != quiz.end(); it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	cout<<"Size : "<< quiz.size() <<endl;
	quiz.erase("Paul");

	cout<<"--------------------"<<endl;

	for(it = quiz.begin(); it != quiz.end(); it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}

	cout<<"Size : "<< quiz.size() <<endl;
	cout<<"Checking if empty"<<endl;
	quiz.empty() ? cout<<"empty"<<endl : cout<<"Not empty"<<endl;

	quiz.find("Max") != quiz.end() ? cout<<"Key found" : cout<<"Key Not found";

	string array[] { "Gary", "Steve", "Peter", "Mark", "Steve" , "Roger", "Steve"};

	map<string, int> stList;

	for(int i=0; i <7; i++)
	{
		if(stList.find(array[i]) != stList.end())
		{
			stList[array[i]] = stList[array[i]]+1;
		}
	}

	return 0;
}
