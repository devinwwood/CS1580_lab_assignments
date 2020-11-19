#ifndef AREA_H
#define AREA_H


// Programmer: Devin Wood 
// Date: 10/06/20
// File: area.h
// Purpose: This file contains the prototype for the printArea() funtion,
//          the global constant PI, and the calculateArea() template 
//          functiion for the area.cpp program.



#include <iostream>
using namespace std;

const float PI = 3.14;
void printArea(float area);



// Description: The calculateArea() function is a template function that
//              calculate the area of a cirlce of a given radius of type T.
//              The function returns the resulting calculation.
// Pre: The type of the template parameter must have * operator defined for it.
// Post: Returns the value of area.

template <typename T>
float calculateArea(T & radius)
{
  float area;

  area = PI * radius * radius; // calculation for area
  return area;
}



#endif

