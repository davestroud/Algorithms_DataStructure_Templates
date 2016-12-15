/* 
 * Module: Driver.cpp
 *
 * Description: This file provides a main function to test the 
 * SimpleGraph data structure. 
 *
 * Course: CS3330 Data Structures and Algorithms 
 * Author: Dr. Jack Davault
 */

#include <iostream>

#include "SimpleGraph.h"

// Driver to test the class...
int main(int argc, char **argv)
{
   SimpleGraph sg;

   // Set the nodes in the graph
   sg.updateNode("Riverland Terrace");
   sg.updateNode("Ochille");
   sg.updateNode("Eelbeck");
   sg.updateNode("McDaniel Manor");
   sg.updateNode("Ft. Benning");

   // Define the edges
   sg.insertEdge("Riverland Terrace", "Ochille");
   sg.insertEdge("Ochille", "Eelbeck");
   sg.insertEdge("Ochille", "Ft. Benning");
   sg.insertEdge("McDaniel Manor", "Ft. Benning");
    
   // Print the nodes and their adjacency lists
   sg.printNodes();

   // Check a couple of nodes to see if they are connected
   if (sg.adjacent("Riverland Terrace", "Ochille")) 
     cout << "Riverland Terrace is connected to Ochille" << endl;
   else 
     cout << "Riverland Terrace is not connected to Ochille" << endl;

   // Check a few more ...
   if (sg.adjacent("McDaniel Manor", "Eelbeck")) 
     cout << "McDaniel Manor is connected to Eelbeck" << endl;
   else 
     cout << "McDaniel Manor is not connected to Eelbeck" << endl;
	
   cout << "\n** Press any key to continue **\n" << endl;
   char ch = getchar();

   return 0;
}
