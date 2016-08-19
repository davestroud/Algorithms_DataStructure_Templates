/* 
 * Module: hello.cpp
 *
 * Description: This program shows an example of indirect
 *              recursion.
 *
 * Course: CS3330 Data Structures and Algorithms 
 * Author: Dr. Jack Davault
 */

#include <cstdio>  // For the C getchar() function
#include <iostream>

using namespace std;

void hello(bool stopCallingMe);
void bye();

void hello(bool stopCallingMe)
{
    cout << "hello() called ";

    if (stopCallingMe == true) 
    {
       cout << "again" << endl;
       return;
    }

    cout << endl;

    bye();
}

void bye()
{
    cout << "bye() called" << endl;    
    hello(true);  // Indirectly calls hello() again
}

int main()
{
   cout << "main() called" << endl;    
   hello(false);

   cout << endl << "Press any key to continue ..." << endl;
   getchar();

   return 0;
}
