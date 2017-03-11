//============================================================================
// Name        : STL-map.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string, double> marks;
	string one = "One";
	marks[one] = 1;
	marks["Two"] = 2;
	map<string, double>::iterator it;

	for(it = marks.begin(); it != marks.end(); it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}

	return 0;
}
