/**
 * List.cpp - This program implements and tests the getIntersection
 *            and getUnion functions.
 *
 *        John 'David Stroud'
 *        CS 3330 Data Structures and Algorithms
 *        Term 2 2016: October 17 - December 18
 */

#include <iostream>
#include <cstdio>
#include <list>

using namespace std;

template <class Object>
void printList(list<Object> list1);

template <class Object>
list<Object> getElements(list<Object> L, list<int> P);

int main(int argc, char **argv)
{
   // Declare list variables
   list<string> list1;
   list<int> list2;

   // Add data to list 1
   list1.push_back("the");
   list1.push_back("quick");
   list1.push_back("brown");
   list1.push_back("fox");
   list1.push_back("jumped");
   list1.push_back("over");
   list1.push_back("the");
   list1.push_back("lazy");
   list1.push_back("dog");

   // Add data to list 2
   list2.push_back(4);
   list2.push_back(3);
   list2.push_back(9);
   list2.push_back(6);
   list2.push_back(7);

   // Print out the lists
   cout << "List 1: " << endl;
   printList(list1);

   cout << "List 2: " << endl;
   printList(list2);

   cout << endl;

   cout << "Results of getElements():" << endl;
   printList(getElements(list1, list2));

   cout << "\n** Press any key to continue **\n";
   getchar();

   return 0;
}

template <class Object>
void printList(list<Object> list1)
{
   cout << "  ";

   // Use an iterator to walk the list. Print the value of
   // for each node.
   typename list<Object>::iterator itr;
   for (itr = list1.begin(); itr != list1.end(); itr++)
   {
      // Get the contents of each node
      Object value = (*itr);

      // Print the value of the node
      cout << " " << value;
   }

   cout << endl;

   return;
}

template <class Object>
list<Object> getElements(list<Object> L, list<int> P)
{
   //A result list to return to the caller
   list<Object> resultList;

   // TODO: Implement the details for the function.


   return resultList;
}
