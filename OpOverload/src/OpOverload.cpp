//============================================================================
// Name        : OpOverload.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Complex
{
public:
        Complex(double re,double im)
                :real(re),imag(im)
                {};
        Complex operator+(const Complex& other);
        double getReal(){
        	return real;
        }

        double getImg(){
        	return imag;
        }
private:
        double real;
        double imag;
};

Complex Complex::operator+(const Complex&  other)
{
    double result_real = real + other.real;
    double result_imaginary = imag + other.imag;
    return Complex( result_real, result_imaginary );
}

int main() {
	Complex X1(2, 3);
	Complex X2(4, 5);
	Complex X3 = X1.operator +(X2);

	cout<<"Real Part : "<<X3.getReal()<<endl;
	cout<<"Imaginary Part : "<<X3.getImg()<<endl;
	return 0;
}
