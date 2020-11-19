// Programmer:  Devin Wood
// MST Username: dwwdtv
// Instructor:  Ayan
// Section:     301
// Date:        11/10/2020
// File:        main.cpp
// Description: The main.cpp file will take as input the real and the imaginary
// value of 3 separate complex numbers (objects of the Complex class), say c1, 
// c2 and c3, and perform test the overloaded operator functions defined for the 
// Complex class.




#include "Complex.h"

using namespace std;


int main()
{
  short realPart1, realPart2, realPart3; // real parts of Complex objects c1, c2, and c3
  short imaginaryPart1, imaginaryPart2, imaginaryPart3; // imaginary parts of Complex objects c1, c2, and c3

  cout << "Learn how to use: Operator overloading (+, -, !, ==, ! =)" << endl << endl;

  // Initialize Complex objects c1 and c2

  cout << "First complex number (c1): " << endl;
  cout << "Enter real part: ";
  cin >> realPart1;
  cout << "Enter imaginary part: ";
  cin >> imaginaryPart1;

  Complex c1(realPart1, imaginaryPart1);

  cout << "\nSecond complex number (c2): " << endl;
  cout << "Enter real part: ";
  cin >> realPart2;
  cout << "Enter imaginary part: ";
  cin >> imaginaryPart2;

  Complex c2(realPart2, imaginaryPart2);

  // initialize Complex object temp to compare to c3 by utilizing overloaded operator
  // functions defined for the Complex class

  Complex temp; // uses default constructor
  temp = -(c1 + c2); // overloaded friend function for + and - operators
  cout << "\nThird complex number created (temp) by overloading + and - operator is: " 
       << temp << endl;  
  !temp; // overloaded MEMBER function for ! operator
  cout << "Value of temp after overloading ! operator: " << temp << endl; 

  // Initialize Complex object c3 and compare to temp utilizing overloaded operator
  // functions defined for the Complex class


  cout << "\nEnter the complex number to be comparted to (c3): " << endl;
  cout << "Enter real part: ";
  cin >> realPart3;
  cout << "Enter imaginary part: ";
  cin >> imaginaryPart3;

  Complex c3(realPart3, imaginaryPart3);

  if (c3 != temp) // overloaded != operator that calls overloaded == operator within definition
  {
    cout << c3 << " is not equal to " << temp << endl;
  }
  
  else
  {
    cout << c3 << " is equal to " << temp << endl;
  }
 
  return 0;
}
