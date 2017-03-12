//============================================================================
// Name        : STL-string.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;


int main() {

	string s1 = "Hello World";
	string::iterator it;
	string::reverse_iterator rit;

	// Iterators
	for(it = s1.begin(); it != s1.end(); it++)
	{
		cout<<*it<<endl;
	}
	cout<<"----------------------------------"<<endl;
	for(rit = s1.rbegin(); rit != s1.rend(); rit++)
	{
		cout<<*rit<<endl;
	}


	return 0;
}
