/*
Ramamurthy Sundar
9/12/2018

class.h

This file includes the declarations of the Complex class 
member functions and friend functions.
*/

#pragma once
#include <iostream>
#include <string>

class Complex {
	friend std::ostream& operator<<(std::ostream& out, const Complex& theComplex);
	friend std::istream& operator>>(std::istream& in, Complex& theComplex);
	friend Complex operator+(const Complex& lhs, const Complex& rhs);
	friend Complex operator-(const Complex& lhs, const Complex& rhs);
	friend Complex operator*(const Complex& lhs, const Complex& rhs);
	friend Complex operator/(const Complex& lhs, const Complex& rhs);
public:
	Complex(double re = 0.0, double im = 0.0) {};
	double getReal(void) const;            // return real part
	double getImaginary(void) const;        // return imaginary part
	void setReal(double re);            // sets the real part
	void setImaginary(double im);        // sets the imaginary part
	void convertStringToComplex(const std::string& complexString);
private:
	double real;
	double imag;
};















