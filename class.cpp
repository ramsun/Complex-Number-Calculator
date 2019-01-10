/*
Ramamurthy Sundar
student id: 00667077
netid: rsundar
CPS 272 - Machine Problem 1
9/12/2018

class.cpp

This file is the implementation of  the complex class.  

The first 6 functions are operator overloading functions.  
The next 5 functions will be important for being able to
work witth the complex number class.

*/
#include "class.h"

//friend functions
std::ostream& operator<<(std::ostream& out, const Complex& theComplex) {
	out << theComplex.real << " + " << theComplex.imag << 'i';
	return out;
}
std::istream& operator>>(std::istream& in, Complex& theComplex) {
	// read obj from stream
	in >> theComplex.real >> theComplex.imag;
	return in;
}
Complex operator+(const Complex& lhs, const Complex& rhs) {
	Complex c;
	c.real = (lhs.real + rhs.real);
	c.imag = (lhs.imag + rhs.imag);
	return c;
}
Complex operator-(const Complex& lhs, const Complex& rhs) {
	Complex c;
	c.real = (lhs.real - rhs.real);
	c.imag = (lhs.imag - rhs.imag);
	return c;
}
Complex operator*(const Complex& lhs, const Complex& rhs) {
	Complex c;
	c.real = (lhs.real*rhs.real - lhs.imag*rhs.imag);
	c.imag = (lhs.imag - rhs.imag);
	return c;
}
Complex operator/(const Complex& lhs, const Complex& rhs){
	Complex c;
	c.real = (lhs.real*rhs.real + lhs.imag*rhs.imag) / (rhs.real*rhs.real + rhs.imag*rhs.imag);
	c.imag = (lhs.imag*rhs.real - lhs.real*rhs.imag) / (rhs.real*rhs.real + rhs.imag*rhs.imag);
	return c;
}

//nonfriend functions
//returns real
double Complex::getReal(void) const {
	return real;
}

//returns imaginary
double Complex::getImaginary(void) const {
	return imag;
}

// sets the real part
void Complex::setReal(double re) {
	real = re;
}

// sets the imaginary part
void Complex::setImaginary(double im) {
	imag = im;
}

void Complex::convertStringToComplex(const std::string & complexString){
	int sz = complexString.size();
	real = atof(complexString.c_str());
	std::string imag_substring;

	for (int i = 0; i < sz; i++) {
		//parsers with selection 
		if (complexString.at(i) == '+') {
			imag_substring.assign(complexString, 4, 3); //.assign(string str, int index, int length) from string library
			imag = atof(imag_substring.c_str());
		}
	}
}



