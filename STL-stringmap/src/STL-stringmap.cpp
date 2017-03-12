//============================================================================
// Name        : STL-stringmap.cpp
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
	string array[] { "Gary", "Steve", "Breton", "Mark", "Scott" , "Roger", "Steve"};

	map<string, int> stList;
	for(int i=0; i <7; i++)
	{
		stList[array[i]] = 0;
	}

	for(int i=0; i <7; i++)
	{
		if(stList.find(array[i]) != stList.end())
		{
			stList[array[i]] = stList[array[i]]+1;
		}
	}

	map<string, int>::iterator it;
	for(it = stList.begin(); it != stList.end(); it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}

	int max = 0;
	string maxstring ;

	map<string, int>::iterator it1;

	for(it1 = stList.begin(); it1 != stList.end(); it1++)
	{
		if(it1->second > max)
		{
			max = it1->second;
			maxstring = it1->first;
		}
	}

	cout<<"String with max repetition : "<<maxstring<<" "<<max<<" times"<<endl;
	return 0;
}
