//////////////////////////////////////////////////////////////////////////////////////////
//Name: Allison Adams
//Course: COSC-1436-001
//Instructor: Dr. Mamta Yadav
//Class Activity #10
//Date: November 10, 2022
//Description:
//Assume that a linked list has been created and head points to the first node.
//Write code that traverses the list displaying the contents of each node's value member.
//////////////////////////////////////////////////////////////////////////////////////////
void NumberList::appendNode(double num)
{
      ListNode *newNode;    //To point to a new node
      ListNode *nodePtr;    //To move through the list

      //Allocate a new node and store num there
      newNode = new ListNode;
      newNode->value = num;
      newNode->next = nullptr;

      //If there are no nodes in the list,
      //Make newNode the first node

      if (!head)
         head = newNode;
      
      else //Otherwise, insert newNode at the end
      {
         nodePtr = head; //Initialize nodePtr to head of list

         while(nodePtr -> next) //Find the last node in the list
            nodePtr = nodePtr -> next;
        
         nodePtr ->next = newNode;  //Insert newNode as the last node
      }

}  //end of appendNode()


