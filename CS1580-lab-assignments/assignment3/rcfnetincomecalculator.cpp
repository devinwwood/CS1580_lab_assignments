// Programmer:  Devin Wood
// MST Username: dwwdtv
// Instructor:  Ayan
// Section:     301
// Date:        09/08/2020
// File:        rcfnetincomecalculator.cpp
// Description: Take employee id as user input and use this value to calculate
// 		their net income. The calculator will continue to take in 
// 		input and make calculations until the user inputs a choice 0 to
// 		quit.

#include <iostream>
using namespace std;


int main()
{
  string employeeID;
  float basicPay;
  short choice = 1;
  float dearnessAllowance;
  float houserentAllowance;
  float tax;
  int netIncome;


  cout <<"Welcome to Roy's Consultancy Farm Net Income (NI) Calculator!" << endl;

  // Start while loop module to initialize the calculator
  while (choice == 1)
  {
    cout << "Please enter your employee id: ";
    cin >> employeeID;
    cout << "Please enter your basic pay: ";
    cin >> basicPay;

  // Descending basic pay if statements to calculate the net income of the 
  // employee based on their income. Place continue statements inside if 
  // statements to prompt user for choice to continue and restart the loop
    if (basicPay <= 0)
    {
      cout << "Invalid Input" << endl;
      cout << "Do you wish to coninue? Enter 1 for yes. Enter 0 for no." << endl;
      cin >> choice;
      continue;
    }
  // For the following if statements, the basicPay is valid thus net income can
  // be calculated using the given equation
    if (basicPay > 5000)
    {
      dearnessAllowance = .19 * basicPay;
      houserentAllowance = .15 * basicPay;
      tax = .11 * basicPay;
      netIncome = basicPay + dearnessAllowance + houserentAllowance - tax;
      cout << "Employee: " << employeeID << " Net Income: " << netIncome << endl;
      cout << "Do you wish to coninue? Enter 1 for yes. Enter 0 for no." << endl;
      cin >> choice;
      continue;
    }

    if (basicPay > 3000)
    {
      dearnessAllowance = .17 * basicPay;
      houserentAllowance = .13 * basicPay;
      tax = .095 * basicPay;
      netIncome = basicPay + dearnessAllowance + houserentAllowance - tax;
      cout << "Employee: " << employeeID << " Net Income: " << netIncome << endl;
      cout << "Do you wish to coninue? Enter 1 for yes. Enter 0 for no." << endl;
      cin >> choice;
      continue;
    }

    if (basicPay > 2000)
    {
      dearnessAllowance = .15 * basicPay;
      houserentAllowance = .11 * basicPay;
      tax = .075 * basicPay;
      netIncome = basicPay + dearnessAllowance + houserentAllowance - tax;
      cout << "Employee: " << employeeID << " Net Income: " << netIncome << endl;
      cout << "Do you wish to coninue? Enter 1 for yes. Enter 0 for no." << endl;
      cin >> choice;
      continue;
    }

    if (basicPay < 2000)
    {
      dearnessAllowance = .10 * basicPay;
      houserentAllowance = .10 * basicPay;
      tax = .05 * basicPay;
      netIncome = basicPay + dearnessAllowance + houserentAllowance - tax;
      cout << "Employee: " << employeeID << " Net Income: " << netIncome << endl;
      cout << "Do you wish to coninue? Enter 1 for yes. Enter 0 for no." << endl;
      cin >> choice;
      continue;  
    }
  }

  // Exit the program if the user chooses to quit
  if (choice == 0)
  {
    cout << "Good Bye" << endl;
  }

  return 0;
}

