//============================================================================
// Name        : OpOveload2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class complex
{
private:
	double real;
	double img;

public:
	complex(double Real, double Img);
	complex operator+(const complex & X);
};

complex::complex(double Real, double Img)
{
	real = Real;
	img = Img;
}

complex complex::operator+(const complex & X)
{
	return complex(X.real + real , X.img + img);
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
