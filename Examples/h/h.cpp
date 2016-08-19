/**
 * h.cpp - This program implements the function h() on pg 187 in
 * Drozdek (2005).
 *
 * Course: CS3330 Data Structures and Algorithms.
 * Author: Dr. Jack Davault
 *
 * References:
 * Drozdek, A. (2005). Data Structures and Algorithms in C++.
 * Thomson Course Technology.
 */

#include <cstdio>  // For the C getchar() function
#include <iostream>

using namespace std;

int h(int n)
{
   int hval=0;

   if (n == 0)
   {
     hval = 0;
   }
   else if (n > 4)
   {
     hval = n;
   }
   else if (n <= 4)
   {
      hval = h(2 + h(2*n));
   }

   return hval;
}

/*
 *  Function: main() 
 *  Description: Test driver for the h() functoin.
 */
int main(int argc, char **argv)
{
   for (int i=0; i < 6; i++)
   {
     cout << "h(" << i << ")=" << h(i) << endl;
   }

   cout << endl << "Press any key to continue ..." << endl;
   getchar();

   return 0;
}
