
#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST

class IntSLLNode
{
public:
	int info;
	IntSLLNode *next;
	IntSLLNode(int el, IntSLLNode *ptr = 0)
	{
	   info = el;
	   next = ptr;
	}
};

class IntSLLst
{
public:
   	IntSLLst()
   	{
		head = tail = 0;
	}
	
	~IntSLLst();
	
	int isEmpty()
	{
		return head == 0;
	}
	
	void addToHead(int);
	void addToTail(int);
	int deleteFromHead();
	int deleteFromTail();
	void deleteNode(int);
	bool isInList(int) const;
	
	// These are the new methods required for the assignment
	IntSLLNode *getHead() const;
	IntSLLNode *getNode(int node);
	void printLst();
	void printLst2(IntSLLNode *tmp);

private:
	IntSLLNode *head, *tail;
};

#endif

