/*
Ramamurthy Sundar
student id: 00667077
netid: rsundar
CPS 272 - Machine Problem 1
9/12/2018

main.cpp

This is a complex number calculator.  The source file will ask you to enter 2 complex numbers,
and will perform 4 basic arithmetic operations on those complex numbers.  These basic
operations are addition, subtraction, multiplication, and division.

The calculations will be performed by a class called Complex.

*/

#include "class.h"
#include <fstream>

using namespace std;

int main () 
{
	//initialize complex variables
	Complex c1; string complexString1; 
	Complex c2; string complexString2;
	
	//stream for user input
	cout << "Enter First Complex Number: ";
	cin >> complexString1;
	cout << "Enter Second Complex Number: ";
	cin >> complexString2;

	//convert string intputs to Complex class objects.
	c1.convertStringToComplex(complexString1);
	c2.convertStringToComplex(complexString2);

	//write output to text file
	ofstream outfile;
	outfile.open("output.txt");
	outfile << "Here are all of the operations: " << "\r\n";
	outfile << '(' << c1 << ')' << " + " << '(' << c2 << ')' << " = " << (c1 + c2) << "\r\n";
	outfile << '(' << c1 << ')' << " - " << '(' << c2 << ')' << " = " << (c1 - c2) << "\r\n";
	outfile << '(' << c1 << ')' << " * " << '(' << c2 << ')' << " = " << (c1 * c2) << "\r\n";
	outfile << '(' << c1 << ')' << " / " << '(' << c2 << ')' << " = " << (c1 / c2) << "\r\n";

	outfile.close();



	return 0;
}