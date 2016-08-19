
using namespace std; // For cout functions

#include <iostream>

#include "IntSLLst.h"

IntSLLst::~IntSLLst()
{
	for (IntSLLNode *p; !isEmpty(); )
	{
		p = head->next;
		delete head;
		head = p;
	}
}

void IntSLLst::addToHead(int el)
{
	head = new IntSLLNode(el, head);
	if (tail == 0)
	{
		tail = head;
	}
}

void IntSLLst::addToTail(int el)
{
	if (tail != 0)
	{
		tail->next = new IntSLLNode(el);
		tail = tail->next;
	}
	else
	{
		head = tail = new IntSLLNode(el);	
	}
}

int IntSLLst::deleteFromHead()
{
	int el = head->info;
	IntSLLNode *tmp = head;
	if (head == tail)
		head = tail = 0;
	else
		head = head->next;
	delete tmp;
	return el;
}

int IntSLLst::deleteFromTail()
{
	int el = tail->info;
	if (head == tail)
	{
		delete head;
		head = tail = 0;
	}
	else
	{
		IntSLLNode *tmp;
		for (tmp = head; tmp->next != tail; tmp = tmp->next);
		delete tail;
		tail = tmp;
		tail->next = 0;
	}
	return el;
}

void IntSLLst::deleteNode(int el)
{
	if (head != 0)
		if (head == tail && el == head->info)
		{
			delete head;
			head = tail = 0;
		}
		else if  (el == head->info)
		{
			IntSLLNode *tmp = head;
			head = head->next;
			delete tmp;
		}
		else
		{
			IntSLLNode *pred, *tmp;
			for (pred = head, tmp = head->next;
				tmp != 0 && !(tmp->info == el);
				pred = pred->next, tmp = tmp->next);
			if (tmp != 0)
			{
				pred->next = tmp->next;
				if (tmp == tail)
					tail = pred;
				delete tmp;
			}
		}
}
			
bool IntSLLst::isInList(int el) const
{
	IntSLLNode *tmp;
	for (tmp = head; tmp != 0 && !(tmp->info == el); tmp = tmp->next);
	return tmp != 0;
}

// Get a pointer to the head of the list.  We need this method
// so that we can access the head node in our second list.
IntSLLNode *IntSLLst::getHead() const
{
	return head;
}

// Gets the node associated with the given value
IntSLLNode *IntSLLst::getNode(int value)
{
	IntSLLNode *tmp = head;

	while (tmp != 0)
	{
	   if (tmp->info == value)
	     break;
		     
	   tmp = tmp->next; 
	}

	return tmp;
}

// Print all of the nodes in the current list
void IntSLLst::printLst()
{
	IntSLLNode *tmp;
	for (tmp = head; tmp != 0; tmp = tmp->next)
	{
		cout << tmp->info << " ";
	}
	cout << endl;
	
	return;
}
// Print all of the nodes in the current list
void IntSLLst::printLst2(IntSLLNode *tmp)
{
	if (tmp == 0)  // If the node equals 0, we're done!
	  return;
    
	// We will only get here if the exit condition is not true.
	cout << tmp->info << " ";
	tmp = tmp->next;
  	printLst2(tmp);  // Continue processing...
    	
	return;
}

