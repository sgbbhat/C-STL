//============================================================================
// Name        : IsUnique.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

bool IsUnique(string S)
{
	map<char,int> CharSet;
	map<char,int>::iterator it;
	CharSet['a'] = 0;
	CharSet['b'] = 0;
	CharSet['c'] = 0;
	CharSet['d'] = 0;
	CharSet['e'] = 0;
	CharSet['f'] = 0;
	CharSet['g'] = 0;
	CharSet['h'] = 0;
	CharSet['i'] = 0;
	CharSet['j'] = 0;
	CharSet['k'] = 0;
	CharSet['l'] = 0;
	CharSet['m'] = 0;
	CharSet['n'] = 0;
	CharSet['o'] = 0;
	CharSet['p'] = 0;
	CharSet['q'] = 0;
	CharSet['r'] = 0;
	CharSet['s'] = 0;
	CharSet['t'] = 0;
	CharSet['u'] = 0;
	CharSet['v'] = 0;
	CharSet['w'] = 0;
	CharSet['x'] = 0;
	CharSet['y'] = 0;
	CharSet['z'] = 0;

	bool unique = true ;
	for(unsigned i=0; i<S.length(); i++)
	{
		it = CharSet.find(S[i]);
		if(it->second < 1)
		{
			it->second = it->second + 1;
			cout<<it->first<<" "<<it->second<<endl;
		}
		else
		{
			it->second = it->second + 1;
			cout<<it->first<<" "<<it->second<<endl;
			unique = false;
		}

	}

	return unique;
}

int main() {
	cout<<IsUnique("abcdea");
	return 0;
}
