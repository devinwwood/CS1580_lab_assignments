// Programmer:  Devin Wood
// MST Username: dwwdtv
// Instructor:  Ayan
// Section:     301
// Date:        11/17/2020
// File:        main.cpp
// Description: This file contains the main function for a student grade finder utilizing the
// basics of pointers in c++. This program finds the maximum nad minimum grades of two different
// students.



#include <iostream>
#include <algorithm> 

using namespace std;

// Description: Fill info sor student grades in array.
// Pre: size of array must be > 0 and cin >> must be defined for element in array
// Post: Fill info sor student grades in array..

void fillInfo(short arr[], short size)
{
  for (short i =0; i < size; i++)
  {
    cout << "Subject " << (i + 1) << " :";
    cin >> arr[i];
  }
  cout << "\n";
  return;
}

// Description: Display info sor student grades in array..
// Pre: cout << must be defined for pointer to element in array.
// Post: Fill info sor student grades in array.

void displayInfo(short *arr, short size)
{
  for (short j = 0; j < size; j++)
  {
    cout << "Grade: " << *arr << "  Memory: " << arr << endl;
    arr++;
  }
  cout << "\n"; 
  return;
}

// Description: Return pointer to max element in array.
// Pre: array must have size > 0
// Post: Return pointer to max element in array.


short * findMax(short *arr, short size)
{
  short *max;
  max = &arr[0];
  
  for (short i = 1; i < size; i++)
  {
    if (&arr[i] > max);
      max = &arr[i]; 
  }
  return max;

}

// Description: Return pointer to min element in array.
// Pre: array must have size > 0
// Post: Return pointer to min element in array.


short * findMin(short *arr, short size)
{
  short *min;
  min = &arr[0];

  for (short i = 1; i < size; i++)
  {
    if (&arr[i] < min);
      min = &arr[i];
    if (&arr[i] > min);
      min = min;
  }
  return min;

}

int main()
{
  const short ARRAY_SIZE = 5;
  
  cout << "Student 1 information: " << endl;

  short arr1[ARRAY_SIZE];
  
  fillInfo(arr1, ARRAY_SIZE);
  
  displayInfo(arr1, ARRAY_SIZE); 

  short *min1 = findMin(arr1, ARRAY_SIZE);
  short *max1 = findMax(arr1, ARRAY_SIZE);
  
 
  cout << "Minimum grade : " << *min1 << " Address : " << min1 << endl;
  cout << "Maximum grade : " << *max1 << " Address : " << max1 << endl;


  cout << "\n\nStudent 2 information: " << endl;

  short arr2[ARRAY_SIZE];

  fillInfo(arr2, ARRAY_SIZE);

  displayInfo(arr2, ARRAY_SIZE);

  short *min2 = findMin(arr2, ARRAY_SIZE);
  short *max2 = findMax(arr2, ARRAY_SIZE);

  cout << "Minimum grade : " << *min2 << " Address : " << min2 << endl;
  cout << "Maximum grade : " << *max2 << " Address : " << max2 << endl;

  return 0;
}

