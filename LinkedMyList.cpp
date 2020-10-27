#include <iostream>

using namespace std;

struct Node 
{
int data; 
	
	Node *link; 	
};

typedef Node* nodePtr; 

void insert(nodePtr& head, int data);

int main()
{
	nodePtr head;
    head = new Node;
       head->data = 20;
       head->link = NULL;  

       insert(head, 30);

    nodePtr tmp; 
    tmp = head; 

    while(tmp != NULL)
    {
    	cout << tmp->data << endl;
	    tmp = tmp->link;
   }
  return 0;
}

void insert(nodePtr& head, int data)
{
	nodePtr tempPtr; 
	tempPtr = new Node;
	tempPtr->data = data;
	tempPtr->link = head;
	head = tempPtr;
}
