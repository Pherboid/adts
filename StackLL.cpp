#include "StackLL.h"

class Stack::Node //self-referential Node class
{
	public:
	   int data = 0;
	   Node* link = nullptr;
	   //link is a data member which is a pointer
	   //to an object of the same type (i.e. Node)

	};//end Node class definition (can only be seen by the List class)

Stack::~Stack(){
  clear();
} //d'tor

int Stack::size(){
  return num_elements;
}

void Stack::push(int val){
  int k = size();

  Node* newPtr = new Node{val};

	if(k == 1)
	{
	  newPtr->link = frontPtr;
	  frontPtr = newPtr;
	 }
	else
	 {

	  Node* tmpPtr = frontPtr;
	  int loc = 1;

	    while( loc != k-1) //get pointer to (k-1)th node
	     {
		tmpPtr = tmpPtr->link;
		loc++;
	     }

	  newPtr->link = tmpPtr->link;
	  tmpPtr->link = newPtr;
        }//end else

     num_elements++;

}

void Stack::pop(){
  int k = size();

	Node* delPtr;

	if(k == 1)
	{
	  delPtr = frontPtr;
	  frontPtr = frontPtr->link;
	 }
	 else
	 {
	    Node* tmpPtr = frontPtr;

	    int loc = 1;

            while(loc != k-1)//get pointer to (k-1)th node
	    {
	       tmpPtr = tmpPtr->link;
		loc++;
	    }

	    delPtr = tmpPtr->link;
	    tmpPtr->link = delPtr->link;
	  }

	delete delPtr;
	num_elements--;

}

int Stack::top(){
  Node* newPtr = new Node;
  int count = size();
  int k = 1;
  newPtr = frontPtr;
  while (newPtr != nullptr){
    if(count == k ){
      return newPtr->data;
    }
    newPtr = newPtr->link;
    count++;

  }

  return -1;
}

void Stack::clear(){
  while (size() > 0){
    pop();
  }
}
