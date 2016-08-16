/**
 * palindrome.cpp - This program implements a recursive predicate function
 *                  called validPalindrome();
 *
 * TODO: John David Stroud CS3330 Data Structure and Algorithms
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

bool validPalindrome(string s);

int main(int argc, char **argv)
{
   cout << "civic=" << validPalindrome("civic") << endl;
   cout << "stacks=" << validPalindrome("stacks") << endl;
   cout << "hannah=" << validPalindrome("hannah") << endl;
   cout << "noel sees leon=" << validPalindrome("noel sees leon") << endl;
   cout << "tree=" << validPalindrome("tree") << endl;
   cout << "kayak=" << validPalindrome("kayak") << endl;
   cout << "graph=" << validPalindrome("graph") << endl;
   cout << "alula=" << validPalindrome("alula") << endl;

   cout << endl << "Press any key to continue." << endl;
   getchar();

   return 0;
}

bool validPalindrome(string s)
{
    // TODO: Based on the mathematical definition in the
    // handout, implement the details of the recursive
    // isPalindrome function.

    return false;
}
  
