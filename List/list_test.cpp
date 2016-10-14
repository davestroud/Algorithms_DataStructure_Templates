/**
 * List.cpp - This program implements and tests the getIntersection
 *            and getUnion functions.
 *
 * TODO: Include your name and course number here.
 */

#include <iostream>
#include <cstdio>
#include <list>

using namespace std;

template <class Object>
void printList(list<Object> list1);

template <class Object>
list<Object> getIntersection(list<Object> list1, list<Object> list2);

template <class Object>
list<Object> getUnion(list<Object> list1, list<Object> list2);

int main(int argc, char **argv)
{
   // Declare list variables
   list<int> list1;
   list<int> list2;
   list<int> list3;

   // Add data to list 1
   list1.push_back(384);
   list1.push_back(425);
   list1.push_back(214);
   list1.push_back(172);
   list1.push_back(166);
   list1.push_back(386);
   list1.push_back(486);
   list1.push_back(24);
   list1.push_back(283);
   list1.push_back(361);

   // Add data to list 2
   list2.push_back(384);
   list2.push_back(56);
   list2.push_back(214);
   list2.push_back(268);
   list2.push_back(156);
   list2.push_back(386);
   list2.push_back(120);
   list2.push_back(24);
   list2.push_back(399);
   list2.push_back(361);

   // Add data to list 3
   list3.push_back(384);
   list3.push_back(56);
   list3.push_back(109);
   list3.push_back(172);
   list3.push_back(166);
   list3.push_back(386);
   list3.push_back(120);
   list3.push_back(469);
   list3.push_back(283);
   list3.push_back(362);

   // Print out the lists
   cout << "List 1: " << endl;
   printList(list1);

   cout << "List 2: " << endl;
   printList(list2);

   cout << "List 3: " << endl;
   printList(list3);

   cout << endl;

   cout << "The intersection of list1 and list1: " << endl;
   printList(getIntersection(list1, list1));

   cout << "The intersection of list1 and list2: " << endl;
   printList(getIntersection(list1, list2));

   cout << "The intersection of list2 and list1: " << endl;
   printList(getIntersection(list2, list1));

   cout << "The intersection of list1 and list3: " << endl;
   printList(getIntersection(list1, list3));

   cout << "The intersection of list2 and list3: " << endl;
   printList(getIntersection(list2, list3));

   cout << "The union of list1 and list2: " << endl;
   printList(getUnion(list1, list2));

   cout << "The union of list2 and list3: " << endl;
   printList(getUnion(list2, list3));

   cout << "The union of list1 and list3: " << endl;
   printList(getUnion(list1, list3));

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
list<Object> getIntersection(list<Object> list1, list<Object> list2)
{
   // Declare a result list to return to the caller
   list<Object> resultList;

   // TODO: Implement the details of the getIntersection function
   // here.
   typename list<Object>::iterator itr;
     for (itr = list1.begin(); itr != list1.end(); itr++)
     {
       // Get the contents of each node
       Object value = (*itr);

       // Print the value of the node
       cout << " " << value;
     }

   return resultList;
}

template <class Object>
list<Object> getUnion(list<Object> list1, list<Object> list2)
{
   // Declare a result list to return to the caller
   list<Object> resultList;

   // TODO: Implement the details of the function
   // here.

   return resultList;
}
