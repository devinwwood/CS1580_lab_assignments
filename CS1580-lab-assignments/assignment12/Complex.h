// Programmer: Devin Wood
// Date: 11/10/2020
// File: Complex.h
// Purpose: This file will store the class definition and the function prototypes.



#ifndef COMPLEX_H
#define COMPLEX_H


#include <string>
#include <fstream>
#include <iostream>

class Complex
{
  private:
    short m_real;
    short m_imaginary;

    void setReal(const short realPart);
    void setImaginary(const short imaginaryPart);
    

  public:
    Complex(const short realPart, const short imaginaryPart) {setReal(realPart); setImaginary(imaginaryPart);}
    Complex() : m_real(0), m_imaginary(0) {}

    void operator ! ();
  
    friend std::ostream & operator << (std::ostream & out, const Complex & c);
    friend bool operator == (const Complex & c1, const Complex & c2);
    friend bool operator != (const Complex & c1, const Complex & c2);
    friend Complex operator + (const Complex & c1, const Complex & c2);
    friend Complex operator - (const Complex & c);
};
























#endif
