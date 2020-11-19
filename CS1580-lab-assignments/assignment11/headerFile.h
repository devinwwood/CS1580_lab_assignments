#ifndef HEADERFILE_H
#define HEADERFILE_H


// Programmer: Devin Wood
// Date: 11/03/2020
// File: headerFile.h
// Purpose: This file will store the class and the function prototypes.


class Student
{
  public:
    void setCS1570(const float cs1570);
    void setCS1580(const float cs1580);
    Student & operator += (const Student & rhs); 
    friend Student operator+ (const Student & student1, const Student & student2);
    Student operator -= (const Student & student);
    const void printDiff();
    friend ostream & operator << (ostream & output, const Student & student); 
    Student(const Student & source);
    Student(const float cs1570, const float cs1580);
    Student();
 
  private:
    float cs1570;
    float cs1580;
};


#endif
