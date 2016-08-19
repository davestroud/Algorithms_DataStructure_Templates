/* 
 * Module: Fib.cpp
 *
 * Description: This module uses recursion to calculate the
 *              Fibonacci number for a provided number.
 *
 * Course: CS3330 Data Structures and Algorithms 
 * Author: Dr. Jack Davault
 */

#include <cstdio>  // For the C getchar() function
#include <iostream>

using namespace std;

int Fib(int n);

int main(int argc, char **argv)
{
   cout << "The first 15 Fibonacci numbers are: " << endl;

   for (int i=0; i < 15; i++)
   {
      cout << Fib(i) << ", ";
   }
   cout << "..." << endl; 
	
   cout << endl << "Press any key to continue ..." << endl;
   getchar();
	
   return 0;
}

int Fib(int n)
{
  int value = 0;

  if (n < 2)
  {
      value = n;
  }
  else
  {
      value = Fib(n-2) + Fib(n-1); 
  }

  return value;
}

