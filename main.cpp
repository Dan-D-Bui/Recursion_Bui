/*
Dan Bui
5/2/22
Dr. T @ TCC

Solve the Tower of Hanoi and factorial calculator using recursion

Learned the basics of applying recursion
*/

// Recursion is when a function calls itself

#include <iostream>
#include "Input_Validation_Extended.h"
using namespace std;

void towerOfHanoi(int n, char rod1, char rod2, char rod3)
{
  if (n != 0)
  {
    towerOfHanoi(n - 1, rod1, rod3, rod2);
    cout << "Moving disk " << n << " from rod " << rod1 << " to rod " << rod2 << endl;
    towerOfHanoi(n - 1, rod3, rod2, rod1);
  }
  else
  {
    return;
  }
}

int factorialR(int n)
{
  if(n > 2)
  {
    return n * factorialR(n - 1);
  }
  else
  {
    return n;
  }
}

int main()
{
  int n;
  string color = "\x1b[34;1m";
  string reset = "\x1b[0m";
  cout << color << "Tower of Hanoi\n" << reset;
  towerOfHanoi(3, 'A', 'C', 'B');

  cout << color << "\nFactorial Recursion\n" << reset;
  n = validateInt(n);
  cout << n << " factorial is equal to " << factorialR(n);
  
  return 0;
}