/* 
 * Module: SimpleGraph.h
 *
 * Description: This class demonstrates the an implemenation of 
 * a simple graph data structure using a linked representation.  This
 * class uses the C++ Standard Library's "list" data structure.
 *
 * Course: CS3330 Data Structures and Algorithms 
 * Author: Dr. Jack Davault
 */

#ifndef _SIMPLEGRAPH_H_
#define _SIMPLEGRAPH_H_
 
#include <iostream>
#include <ostream>
#include <iterator>
#include <string>
#include <list>

using namespace std;

/*
 *  This class defines a node in the graph.  Each node contains data
 * and a list of its adjacent nodes.
 */
class Node
{
friend ostream& operator<<(ostream &os, const Node& n);
	
public:
  Node() { }  // Does nothing
  ~Node() { } // Does nothing
  void setData(string data);
  void insertAdjacent(string in_node);
  list <string> getAdjacencyList() const;
  bool inAdjacencyList(string data);
  string getData() const;
  void printAdjacencyList();
  void printData();
  const Node& operator=(const Node& n);
					
private:
  list <string> adjacencyList;  // Holds a list of adjacent nodes
  string data; // Holds the data for the node
};

ostream& operator<<(ostream &os, const Node &n)
{
   return os << n.getData();
}

const Node& Node::operator=(const Node& n)
{
   if (&n != this)
   {
	data = n.getData();
	adjacencyList = n.getAdjacencyList();
   }
	
   return *this;
}

void Node::setData(string data)
{
   this->data = data;
   return;
}

void Node::insertAdjacent(string node)
{
   adjacencyList.push_back(node);
   return;
}

list <string> Node::getAdjacencyList() const
{
   return adjacencyList;
}

string Node::getData() const
{
   return data;
}

bool Node::inAdjacencyList(string data)
{
   bool found = false;
	
   // Search the list for a data element
   list<string>::iterator it;
   for (it = adjacencyList.begin(); it != adjacencyList.end(); it++)
   {
	if (*it == data)
	{
  	   // We've found it so set the found flag to true 
	   // and break out of the loop.
	   found = true;
	   break;
	}
   }
	
   return found;
}

void Node::printAdjacencyList()
{
   // Print the adjacencyList...
   list<string>::iterator it;
    
   for (it = adjacencyList.begin(); it != adjacencyList.end(); it++)
   {
	cout << "   " << *it << endl;
   }
	
   return;
}

void Node::printData()
{
   cout << data << endl;
   return;
}

/*
 *  This class defines the SimpleGraph data structure.
 */
class SimpleGraph
{
public:
   SimpleGraph() { };  // Does nothing
   ~SimpleGraph() { }; // Does nothing
	
   bool adjacent(string node1, string node2);
   void updateNode(string in_node);
   void insertEdge(string node1, string node2);
   // string retrieve();  // This method is not necessary for this implementation

   // Other primative methods usually used in graphs. Implement the 
   // delete methods for your lab exercise ...
   void deleteNode(string node);
   void deleteEdge(string node1, string node2);   

   // Utility methods
   void printNodes();
	
private:
   // Each node is stored as a simple linked list.  
   list <Node> node;
};

/*
 *  The SimpleGraph Implementation
 */
 
// Predicate method reports true if two nodes are adjacent, false
// otherwise.
bool SimpleGraph::adjacent(string node1, string node2)
{
   bool found = false;
	
   list<Node>::iterator node_iter;
   for (node_iter = node.begin(); node_iter != node.end(); node_iter++)
   {
 	Node n = *node_iter;
	if (n.getData() == node1)
	{
   	   if (n.inAdjacencyList(node2))
	   {
		// We have found the node so set the found flag to
		// true and break out of the loop
		found = true;
		break;
	   }
	}
   }
		
   return found;
}

// Inserts an edge between the two given nodes
void SimpleGraph::insertEdge(string node1, string node2)
{
   list<Node> tmp;  // Work on a temporary list

   // This type of graph is bi-directional so set both
   // node rows equal to 1.
   list<Node>::iterator node_iter;
   for (node_iter = node.begin(); node_iter != node.end(); node_iter++)
   {
	Node n = *node_iter;
	
	// Does the current node match node1? If so, make node2 adjacent
	// to node2
	if (n.getData() == node1)
	   n.insertAdjacent(node2);
		
	// Does the current node match node2? If so, make node2 adjacent
	// to node1
	if (n.getData() == node2)
	   n.insertAdjacent(node1);

	tmp.push_back(n);
   }
	
   // Copy the temporary list into the real list of nodes
   node = tmp;
	
   return;
}

// Sets data the next node in the list.
void SimpleGraph::updateNode(string in_node)
{
   Node n;
   n.setData(in_node);

   // Add the node to the list of nodes
   node.push_back(n);
	
   return;
}

// Display all of the nodes in the list.
void SimpleGraph::printNodes()
{
   cout << "The nodes are: " << endl << endl;
	
   list<Node>::iterator node_iter;
   for (node_iter = node.begin(); node_iter != node.end(); node_iter++)
   {
 	// Print the nodes
	cout << *node_iter << endl;
		
	// Print each node's adjacency list
	Node n = *node_iter;
	n.printAdjacencyList();
   }
	
   cout << endl;
	
   return;
}

#endif

