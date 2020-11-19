// Programmer:  Devin Wood
// MST Username: dwwdtv
// Instructor:  Ayan
// Section:     301
// Date:        10/20/2020
// File:        gradeCalc.cpp
// Description: This file maintains two functions. The purpose of main is to read in
//              data from the input.dat file and initialize file names. It also initializes
//              an array of structs to store student data as it is read in. The fileWrite function
//              is what calculates the student grade based on the data in struct and writes the data
//              to output.dat via ofstream fout that is passed in as a reference.


#include <fstream>
using namespace std;



struct grades
{
  string firstName; // Just include the firstname of  the student
  string lastName; // the lastname of  the student
  short mathematics;  // stores the grade in mathematics
  short physics;     // stores the grade in physics
  short computerSc ;  // stores the grade in computer science
};



// Description: The fileWrite() function is a template function that passes in
//              the ofstream fout and a struct with student data read in from the
//              input.dat file and calculates grade aggregate for the student.
// Pre: Template parameter T must be either ifstream or ofstream type.
// Post: Writes student data to the output.dat file by ofstream fout.


template <typename T>
void fileWrite (T & fout, struct grades student)
{
  char result;
  short aggregate;

  aggregate = 2 * student.mathematics + (student.physics + student.computerSc);

  if (aggregate >= 380)
    result = 'A';
  if ((aggregate < 380) && (aggregate >= 340))
    result = 'B';
  if (aggregate < 340)
    result = 'C';

  fout << "Name:  " << student.firstName << " " <<  student.lastName 
                    <<  "     " << "Result: " << result << endl;

  return;
}






int main()
{
  const short SIZE_ARRAY = 5;
  
  ifstream fin; // initialize file streams
  ofstream fout;

  grades students[SIZE_ARRAY];  

  string firstName; // the firstname of  the student
  string lastName; // the lastname of  the student
  short mathematics;  // stores the grade in mathematics
  short physics;     // stores the grade in physics
  short computerSc ;  // stores the grade in computer science

  short active_struct = 0; // loop control variable

  fin.open("input.dat");   // initialize and connect file names
  fout.open("output.dat");

  while (fin >> mathematics)  // will terminate after the fifth students data is processed and passed into fileWrite
  {
    students[active_struct].mathematics = mathematics;

    fin >> physics;
    students[active_struct].physics = physics;

    fin >> computerSc;
    students[active_struct].computerSc = computerSc;

    fin >> firstName;
    students[active_struct].firstName = firstName;

    fin >> lastName;
    students[active_struct].lastName = lastName;

    fileWrite(fout, students[active_struct]);
    active_struct++; // increment the active struct to loop through the five students
  }

  return 0;
}
    








