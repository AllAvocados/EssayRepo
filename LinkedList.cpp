// Implementation file for the LinkedList class
#include <iostream>  
#include "LinkedList.h"
using namespace std;


//**************************************************
// constructor								       
// 										
//**************************************************
LinkedList::LinkedList()
{
	//TODO: Make sure that the head node points
	// initially at NULL

		head = nullptr;
}

//**************************************************
// appendNode appends a node containing the        *
// value pased into num, to the end of the list.   *
//**************************************************
void LinkedList::appendNode(double num)
{
   //TODO: create a node that points at the new node
	ListNode *newNode;

   //TODO: create a node that will be used to 
   // iterate through the list.
	ListNode *nodePtr;

   // TODO: Allocate the new node and store num there.
	newNode = new ListNode;
	newNode->value = num;
	newNode->next = nullptr;

   // TODO: Check if there are no nodes in the list
   // make newNode the first node.
	if (!head)
		head = newNode;
	else  // Otherwise, insert newNode at end.
	{
		nodePtr = head; //Initialize nodePtr to head of list.

		while (nodePtr->next)  // by finding the last node in the list.
		{
			nodePtr = nodePtr->next;
		}

		nodePtr->next = newNode;    // then inserting newNode as the last node.
	}
  }

//**************************************************
// The deleteNode function searches for a node     *
// with num as its value. The node, if found, is   *
// deleted from the list and from memory.          *
//**************************************************

void LinkedList::deleteNode(double num)
{
   //TODO: create a node that point at the previous node
	ListNode *previousNode;

   //TODO: create a node that will be used to 
   // iterate through the list.
	ListNode *nodePtr;

   // If the list is empty, do nothing.
	if (!head)
		return;

   // Determine if the first node is the one, remove it.
	if (head->value == num)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	// else, initialize nodePtr to head of list and skip 
   // all nodes whose value member is not equal to num.
	else
	{
		nodePtr = head;
		
		while (nodePtr != nullptr && nodePtr->value != num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		// If nodePtr is not at the end of the list, 
		// link the previous node to the node after
		// nodePtr, then delete nodePtr.

		if (nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}

	}
  }
//**************************************************
// displayList shows the value                     *
// stored in each node of the linked list          *
// pointed to by head.                             *
//**************************************************

void LinkedList::displayList() const
{
   //TODO: create a node that will be used to 
   // iterate through the list.
	ListNode *nodePtr;

   // TODO: Position nodePtr at the head of the list.
	nodePtr = head;

   // TODO: While nodePtr points to a node, traverse
   // the list and display the value in this node.
	while (nodePtr)
	{
		cout << nodePtr->value << endl;
    nodePtr = nodePtr->next; 
	}
     
   // Remember to move to the next node.
	
}

//**************************************************
// Destructor                                      *
// This function deletes every node in the list.   *
//**************************************************

LinkedList::~LinkedList()
{
   //TODO: create a node that point at the next node
	ListNode *nextNode;
   //TODO: create a node that will be used to 
   // iterate through the list.
	ListNode  *nodePtr;
   // TODO: Position nodePtr at the head of the list.
	nodePtr = head;
   // TODO: While nodePtr is not at the end of the list...
	while (nodePtr != nullptr)
	{
		// Save a pointer to the next node.
		nextNode = nodePtr->next;
		 
		// Delete the current node.
		delete nodePtr;

		// Position nodePtr at the next node.
		nodePtr->next;

	}

}