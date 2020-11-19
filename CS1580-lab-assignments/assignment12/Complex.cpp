// Programmer: Devin Wood
// Date: 11/10/2020
// File: Complex.cpp
// Description;  This file stores member function and friend function defintions for the Complex class.



#include "Complex.h"

// Description: Mutator function for real part of object of Complex class.
// Pre: = operator must be defined for m_real.
// Post: Sets value of member variable m_real for object of Complex class.

void Complex::setReal(const short realPart)
{
  m_real = realPart;
  return;
}

// Description: Mutator function for imaginary part of object of Complex class.
// Pre: = operator must be defined for m_imaginary.
// Post: Sets value of member variable m_imaginary for object of Complex class.

void Complex::setImaginary(const short imaginaryPart)
{
  m_imaginary = imaginaryPart;
  return;
}

// Description: An overloaded insertion operator to output the object in a single line:
// e.g. x + yi where x is the real part and y is the imaginary part of the object of the Complex class.  
// Pre: Insertion operator must be defined for member variables m_imaginary and m_real.
// Post: Outputs the Complex object in the described form above (e.g.).

std::ostream & operator << (std::ostream & out, const Complex & c)
{
    out << c.m_real << "+" << c.m_imaginary << "i";
    return out;
}

// Description: An overloaded isEquals operator to compare the equality of of two objects
// of the Complex class.  
// Pre: == operator must be defined for member variables m_real and m_imaginary.
// Post: Returns true is objects are equal otherwise returns false.


bool operator == (const Complex & c1, const Complex & c2)
{
  return (c1.m_real == c2.m_real && c1.m_imaginary == c2.m_imaginary);
}

// Description: An overloaded isNotEquals operator to compare the equality of of two objects
// of the Complex class.
// Pre: == operator must be defined for objects of Complex class.
// Post: Returns true is objects are not equal otherwise returns false.

bool operator != (const Complex & c1, const Complex & c2)
{
  return !(c1 == c2);
}

// Description: An overloaded addition operator to add corresponding member variables of two objects
// of the Complex class. (e.g. c1 = a + bi, c2 = c + di , c1 + c2 = (a + c) + (b + d)i
// Pre: Addition operator must be defined for member variables m_real and m_imaginary..
// Post: Returns object with member variables assigned as defined above (e.g.).

Complex operator + (const Complex & c1, const Complex & c2)
{
  short realPart, imaginaryPart;

  realPart = c1.m_real + c2.m_real;
  imaginaryPart = c1.m_imaginary + c2.m_imaginary;
  Complex temp(realPart, imaginaryPart);
  return temp;
}

// Description: An overloaded negation operator to negate values of member variables m_real and m_imaginary.
// Pre: Negation operator must be defined for member variables m_imaginary and m_real.
// Post: Returns object with member variables assigned as defined above (e.g.).

Complex operator - (const Complex & c)
{
  Complex temp;
  temp.m_real = -(c.m_real);
  temp.m_imaginary = -(c.m_imaginary);
  return temp;
}

// Description: An overloaded not operator to switch values of member variables m_real and m_imaginary.
// Pre: Assignment operator must be defined for member variables m_imaginary and m_real.
// Post: Returns nothing and switches member variable values as defined above in the description of this function.

void Complex::operator ! ()
{
  short temp = m_real;
  m_real = m_imaginary;
  m_imaginary = temp;
  return;
}
