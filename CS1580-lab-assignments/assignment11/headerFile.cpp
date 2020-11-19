#include "headerFile.h"
#include <iostream>

// Programmer: Devin Wood
// Date: 10/27/2020
// File: headerFile.cpp
// Description;  This file stores member function defintions for Student the constructor.


#include <iostream>

using namespace std;

Student::Student(const float cs1570, const float cs1580) : cs1570(cs1570), cs1580(cs1580) {}

Student::Student() : cs1570(0), cs1580(0) {}

Student::Student(const Student & source)
{
  setCS1570(source.cs1580);
  setCS1580(source.cs1570);
}

// Description: mutator function for cs1570
// Pre: = None.
// Post: sets value of cs1570
  

void Student::setCS1570(const float num)
{
    cs1570 = num;
    return;
}
// Description: mutator function for cs1580
// Pre: = None.
// Post: sets value of cs1580

void Student::setCS1580(const float num)
{
    cs1580 = num;
    return;
}

// Description: printDiff function to output the difference betweene student average and marks
// Pre: = << must be defined for member variable type
// Post: outputs member variables of Student

const void Student::printDiff()
{
  cout << cs1570;
  cout << cs1580;
  return;
}

// Description: overload operator += operator for Studnet
// Pre: = += defined for member variable types
// Post: returns calling object

Student& Student::operator += (const Student & rhs)
{
    cs1570+=rhs.cs1570;
    cs1580+=rhs.cs1580;
    return (*this);                   // return a reference to the calling object so that
}                                     // chaining the operator works

// Description: overload operator+ for Student
// Pre: = None.
// Post: calls copy constructor and then calls += operator defined above

Student operator+ (const Student & student1, const Student & student2)
{
  Student student3(student1);
  return (student3 += student2);
}


 
