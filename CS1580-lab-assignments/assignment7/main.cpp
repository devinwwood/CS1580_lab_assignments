// Programmer:  Devin Wood
// MST Username: dwwdtv
// Instructor:  Ayan
// Section:     301
// Date:        10/06/2020
// File:        main.cpp
// Description: This file imports the header file area.h and accepts user inpu
//              of three different radii of types int, float, and double. Then
//              the template function in the header file is called with the
//              given radius and calculates the area. Finally the printArea 
//              function is called with a pass-by-value of area to print the 
//              calculation result to the terminal.

#include <iostream>
#include "area.h"

using namespace std;


int main ()
{
  int intRadius;
  float floatRadius, area;
  double doubleRadius;

  cout << "Welcome to the Area Calculator" << endl << endl; // welcomes user

  // prompts the user for three different types of radii and calls the appropriate
  // functions.

  cout << "Enter the integer type radius:  ";
  cin >> intRadius;
  
  area = calculateArea(intRadius); // assigns return value of the template 
                                   // function to variable named area

  printArea(area);                 // calls printArea function by passing
                                   // value of area in as a parameter

  cout << "Enter the float type radius:  ";
  cin >> floatRadius;

  area = calculateArea(floatRadius);
  printArea(area);

  cout << "Enter the double type radius:  ";
  cin >> doubleRadius;
  
  area = calculateArea(doubleRadius);
  printArea(area);


  cout << "Goodbye." << endl; // bids the user adieu

  return 0;
}

