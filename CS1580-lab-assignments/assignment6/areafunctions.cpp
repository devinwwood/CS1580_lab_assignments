// Programmer:  Devin Wood
// MST Username: dwwdtv
// Instructor:  Ayan
// Section:     301
// Date:        09/29/2020
// File:        areafunctions.cpp
// Description: This program prompts the user for certain parameters of geometric shapes,
// and calls their respective area functions via function overloading on area() to calculate 
// their areas. Each respective function also calls another function printArea() to output 
// this calculation to the screen via pass-by-value from within the area() funtion.

#include <iostream>
using namespace std;


// Description: The printArea() will take in pass-by-values from within the geometric shapes
// respective function and output a message including the shape name and it's calculated area.
// Pre: None
// Post: Outputs area calculation and shape name to screen.


void printArea(float area, string shape_name)
{
  cout << "The area of the " << shape_name << "  with the given radius is: " << area << endl << endl;
  return;
}


// Description: The area(float) will calculate the area of the
// circle with the given radius and call the printArea function to output
// the value of area to the screen.
// Pre: None
// Post: Calls printArea() to output area calculation to screen. Returns nothing.


void area(float radius)
{
  const float PI = 3.14;
  float area_circ;
  string circle = "Circle";

  area_circ = PI * radius * radius; // calculation for area
  printArea(area_circ, circle);

  return;
}


// Description: The area(float, float) will calculate the area of the
// trapezium with the given parameters base and tri_height and call the printArea function to output
// the value of area to the screen.
// Pre: None
// Post: Calls printArea() to output area calculation to screen. Returns nothing.


void area(float base, float tri_height)
{
  float area_tri;
  string triangle = "Triangle";

  area_tri = 0.5 * base * tri_height;
  printArea(area_tri, triangle);
 
  return;
}


// Description: The area(float, float, float) will calculate the area of the 
// trapezium with the given parameters side1, side2, and trap_height and call the 
// printArea function to output the value of area to the screen.
// Pre: None
// Post: Calls printArea() to output area calculation to screen. Returns nothing.

 
void area(float side1, float side2, float trap_height)
{
  float area_trap;
  string trapezium = "Trapezium";

  area_trap = 0.5 * ((side1 + side2) * trap_height);
  printArea(area_trap, trapezium);

  return;
}


int main ()
{
  float radius, base, tri_height, side1, side2, trap_height;

  cout << "Welcome to the Area Calculator" << endl << endl; // welcomes user

  // prompts user for parameters of three geometric shapes
 
  cout << "Enter the radius of the circle:  "; 
  cin >> radius;
  area(radius); // calls respective function
  
  cout << "Enter the base of the triangle:  "; 
  cin >> base;
  cout << "Enter the height of the triangle:  ";
  cin >> tri_height;
  area(base, tri_height); // calls respective function


  cout << "Enter one side  of the trapezium:  ";
  cin >> side1;
  cout << "Enter the other side of the trapezium:  ";
  cin >> side2;
  cout << "Enter the height of the trapezium:  ";
  cin >> trap_height;
  area(side1, side2, trap_height); // calls respective function

  cout << "Goodbye." << endl; // bids the user adieu 

  return 0;
}

