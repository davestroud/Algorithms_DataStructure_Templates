/*
 * Driver.cpp - Sample program to test the BST API:
 * found in  Drozdek (2005).
 *
 * Author: Dr. Jack Davault, Troy University.
 *
 * Ref:
 * Drozdek, A. (2005). Data Structures and Algorithms in C++.
 * Thomson Course Technology.
 *
 * NOTE: If you're recieving a compiler error in "genBST.h" at
 *       references to the lines  "top()" and "front()" include
 *       the following compiler option:
 *
 *         -fpermissive
 */

#include <stdio.h>  // For the C getchar() function
#include <iostream>
#include <string>

#include "genBST.h"

using namespace std;  // For cout and string

void integerNodes();
void floatNodes();
void stringNodes();

int main()
{
	integerNodes();
	floatNodes();
	stringNodes();
	cout << "Done" << endl;

	return 0;
}

void integerNodes()
{
	cout << "Adding integers to a Binary Tree" << endl;
	BST <int>bst;
	bst.insert(1);
	bst.insert(5);
	bst.insert(6);
	bst.insert(2);
	bst.insert(3);
	bst.insert(4);

	cout << "The preorder of the list is: ";
	bst.preorder();
	cout << endl;

	cout << "The inorder of the list is: ";
	bst.inorder();
	cout << endl;

	cout << "The postorder of the list is: ";
	bst.postorder();
	cout << endl << endl;

	cout << "Press any key to continue..." << endl;
	getchar();
}

void floatNodes()
{
	cout << "Adding floats to a Binary Tree" << endl;
	BST <float>bst;
	bst.insert(1.1);
	bst.insert(3.2);
	bst.insert(2.1);
	bst.insert(3.4);
	bst.insert(4.7);
	bst.insert(5.67);

	cout << "The preorder of the list is: ";
	bst.preorder();
	cout << endl;

	cout << "The inorder of the list is: ";
	bst.inorder();
	cout << endl;

	cout << "The postorder of the list is: ";
	bst.postorder();
	cout << endl << endl;

	cout << "Press any key to continue..." << endl;
	getchar();
}

void stringNodes()
{
	cout << "Adding strings to a Binary Tree" << endl;
	BST <string>bst;
	bst.insert("the");
	bst.insert("quick");
	bst.insert("brown");
	bst.insert("fox");
	bst.insert("jumped");
	bst.insert("over");
	bst.insert("the");
	bst.insert("lazy");
	bst.insert("dog");

	cout << "The preorder of the list is: ";
	bst.preorder();
	cout << endl;

	cout << "The inorder of the list is: ";
	bst.inorder();
	cout << endl;

	cout << "The postorder of the list is: ";
	bst.postorder();
	cout << endl << endl;

	cout << "Press any key to continue..." << endl;
	getchar();
}
