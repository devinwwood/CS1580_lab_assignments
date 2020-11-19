// Programmer:  Devin Wood
// MST Username: dwwdtv
// Instructor:  Ayan
// Section:     301
// Date:        09/22/2020
// File:        areaofcircle.cpp
// Description: This program calculates the area of a circle of a user inputted
// 		radius. This is achieved by maintaining four functions. The 
// 		function accept radius uses pass by reference to get the radius
// 		from the user. Then this value passed to another function
// 		call calculateArea. The returned value from calculateArea is
// 		then printed bay calling the function printArea. 



#include <iostream>
using namespace std;

// pass by reference
void acceptRadius(float & x)
{
  cout << "Enter the radius of the circle: ";
  cin >> x; // gets user input to change the value radius in main()

  return;
}

// pass by value
float calculateArea(float radius)
{
  float area;
  const float PI = 3.14;

  area = PI * radius * radius; // calculation for area
  return area;
}

// pass by value
void printArea(float area)
{
  cout << "The area of the circle with the given radius is: " << area << endl;

  return;
}

int main () 
{
  float area = 0;
  float radius = 0;

  cout << "The value of radius before acceptRadius is called: " <<  radius << endl;
  acceptRadius(radius);
  cout << "The value of radius after acceptRadius is called: " <<  radius << endl;
  area = calculateArea(radius);
  printArea(area);

  return 0;
}
