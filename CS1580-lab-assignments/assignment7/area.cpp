// Programmer:  Devin Wood
// MST Username: dwwdtv
// Instructor:  Ayan
// Section:     301
// Date:        10/06/2020
// File:        area.cpp
// Description: This file contains the function definitions for the area program.


#include <iostream>
#include "area.h"

using namespace std;

// Description: The printArea() function will pass in the value of area that is
//              returned by the calculateArea() template function and output
//              a message containing the area of the circle of the given radius.
// Pre: The value of area must be greater than 0.
// Post: Outputs area calculation in a message telling the user the calculation
//       result.

void printArea(float area)
{
  cout << "The area of the circle with the given radius is: " << area << endl << endl;

  return;
}



