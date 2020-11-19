// Programmer:  Devin Wood
// MST Username: dwwdtv
// Instructor:  Ayan
// Section:     301
// Date:        11/03/2020
// File:        main.cpp
// Description: This program will  accept  the  information  of  the  students anc call member functions to
//              output the desired values to the terminal.


#include <iostream>
#include "headerFile.h"

using namespace std;


int main()
{
  float cs1570, cs1580, avg1, avg2;

  cout << "Welcome to student average calculator: " << endl;



  cout << "Student 1 information:" << endl << endl;
  
  cout << "Enter the marks in cs 1570; ";
  cin >> cs1570;

  cout << "Enter the marks in cs 1580; ";
  cin >> cs1580;

  Student student1(cs1570, cs1580);



  cout << "Student 2 information:" << endl << endl;

  cout << "Enter the marks in cs 1570; ";
  cin >> cs1570;

  cout << "Enter the marks in cs 1580; ";
  cin >> cs1580;

  Student student2(cs1570, cs1580);

  Student student3;

  student3 = student1 + student2; 

  student3.printDiff(); 
  



  return 0;
}


 
