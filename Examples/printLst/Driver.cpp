/*
 * Driver.cpp - Sample program to test the IntSLLst API:
 * Figure 3.2 found on  pp. 79-81 in Drozdek (2005).
 *
 * Author: Dr. Jack Davault, Troy University.
 *
 * Ref:
 * Drozdek, A. (2005). Data Structures and Algorithms in C++.
 * Thomson Course Technology.
 *
 */
 

#include <cstdio>     // For the C getchar() function
#include <iostream>
#include <string>

#include "IntSLLst.h"

using namespace std;  // For cout and string

int main(int argc, char **argv)
{
	// Create a list and add some nodes to it.
	IntSLLst *list = new IntSLLst();

	list->addToHead(100);
	list->addToTail(101);
	list->addToTail(102);

	// Print the list using loops ...
        cout << "printLst(): ";
	list->printLst();

	// Print the list using the recursive function ...
        cout << "printLst2(): ";
	list->printLst2(list->getHead());

	cout << endl << "Press any key to continue..." << endl;
	getchar();

	return 0;
}
