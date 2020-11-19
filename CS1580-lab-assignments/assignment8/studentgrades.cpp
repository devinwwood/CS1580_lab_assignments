// Programmer:  Devin Wood
// MST Username: dwwdtv
// Instructor:  Ayan
// Section:     301
// Date:        10/13/2020
// File:        studentgrades.cpp
// Description:  This program uses arrays of structs to store information both inputted by
//               user and calculated by specific functions regarding student grades and prints
//               this information to the screen.  

#include <iostream>
using namespace std;


struct grades
{
  string name; // Just include the firstname of  the student
  short mathematics;  // stores the grade in mathematics
  short physics;     // stores the grade in physics
  short computerSc ;  // stores the grade in computer science 
  char result;  // stores the result based on the aggregate calculated   
};

void printInfo(struct grades student1,  // printInfo function declaration
               struct grades student2,
               struct grades student3);

char calculateResult(struct grades students);  // calculateResult function declaration




// Description: The calculateResult() passes in array of struct and calculates
//              the aggregate reult based on the formula given on the assignment. 
// Pre: None
// Post: Returns char of the resulting aggregate based on given conditions.

char calculateResult(struct grades students)
{
  char result;
  short aggregate;
  
  aggregate = 2 * students.mathematics + (students.physics + students.computerSc);
  
  if (aggregate >= 380)
    result = 'A';
  if ((aggregate < 380) && (aggregate >= 340))
    result = 'B';
  if (aggregate < 340)
    result = 'C';

  return result;
}

// Description: The printInfo() passes in three array of structs and prints the
//              name of the student and their respective result given by the
//              previous input and funtion call of calculateResult().
// Pre: None
// Post: Prints student name and reult to the screen.


void printInfo(struct grades student1,
               struct grades student2,
               struct grades student3)
{

  cout << "Printing the student information" << endl << endl;

  cout << "Student Name         Result" << endl;

  cout << student1.name << "     " << student1.result << endl;
  cout << student2.name << "     " << student2.result << endl;
  cout << student3.name << "     " <<  student3.result << endl;
  return;
}


int main ()
{
  short const SIZE_ARRAY = 3;
  grades students[SIZE_ARRAY]; 
 
  cout << "Welcome to the Student Grade Calculator" << endl << endl; // welcomes user

  // prompts user for parameters of three geometric shapes
  cout << "Enter the required information below:" << endl << endl;

 
  // prompts user for input for three students and calls calculateResult() to assign
  // value to result in the defined struct in the header

  cout << "\nName of student:  ";
  cin >> students[0].name;
  
  cout << "Marks in mathematics:  ";
  cin >> students[0].mathematics;
 
  cout << "Marks in physics:  ";
  cin >> students[0].physics;

  cout << "Marks in computer science:  ";
  cin >> students[0].computerSc;

  students[0].result = calculateResult(students[0]);



  cout << "\nName of student:  ";
  cin >> students[1].name;

  cout << "Marks in mathematics:  ";
  cin >> students[1].mathematics;

  cout << "Marks in physics:  ";
  cin >> students[1].physics;

  cout << "Marks in computer science:  ";
  cin >> students[1].computerSc;

  students[1].result = calculateResult(students[1]);




  cout << "\nName of student:  ";
  cin >> students[2].name;

  cout << "Marks in mathematics:  ";
  cin >> students[2].mathematics;

  cout << "Marks in physics:  ";
  cin >> students[2].physics;

  cout << "Marks in computer science:  ";
  cin >> students[2].computerSc;

  students[2].result = calculateResult(students[2]);





  printInfo(students[0], students[1], students[2]); // passes in the arrays of structs
                                                    // to print information given and calculated


  cout << "Goodbye." << endl; // bids the user adieu

  return 0;
}

