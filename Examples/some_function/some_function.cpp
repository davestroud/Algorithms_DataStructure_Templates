/* 
 * Module: some_function.cpp
 *
 * Description: This module shows an example of tail recursion.
 *
 * Course: CS3330 Data Structures and Algorithms 
 * Author: Dr. Jack Davault
 */

#include <cstdio>   // For the C getchar() function
#include <iostream>

using namespace std;

int some_function(int i);

int main(int argc, char **argv)
{

   some_function(10);

   cout << endl << "Press any key to continue ..." << endl;
   getchar();
	
   return 0;
}

int some_function(int i)
{
  if (i > 3)
  {
     cout << "i=" << i << endl;
     i--;
     some_function(i);
  }

  return 0;
}
     
