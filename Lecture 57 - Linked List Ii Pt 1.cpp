//#include <iostream>
//using namespace std;
//class node
//{
//	public:
//		int data;  //Let us assume for now that the data which the linked list is sorted
//		node * next;
//		
//		node(int data_input)
//		{
//			this->data = data_input;
//			this->next = NULL;
//		}
//};
//// Helper function
//void printnode(node * & node)
//{
//	cout << "value " << node->data;
//	cout << "Address "<<node->next;
//}
//void printlinkedlist(node * & head)
//{
//	if(head==NULL)
//	{
//		cout << "The linked list is still empty! " << endl;
//		return;
//	}
//	node *temp;
//	temp = head;
//	
//	// This is called the transversing of a linked list
//	
//	while(temp!=NULL)
//	{
//		cout << temp->data<<" -->";
//		temp = temp->next;
//	}
//}
//
//int main()
//{
//	// Head is nothing but a fancy term to indicate the top or the first element of the linked list
//	
//	node * head=NULL;	
//	printlinkedlist(head);
//	node * node1 = new node (5);
//	head = node1;
//	printlinkedlist(head);
//	cout << endl;
//	node * node2 = new node (7);
//	node1->next = node2;  // The sorting address of the first node which was initially pointing to NULL willnow point to the address to the next node
//	printlinkedlist(head);
//	cout << endl;
//	node * node3 = new node (8);
//    node2->next = node3;
//    printlinkedlist(head);
//    cout << endl;
//
//	
//
////	printnode(node1);
////	printnode(node1->next);  //node 2 = node 1->next
////	printnode(node1->next->next);  // node 3 = node2->next = node1->next->next
//	
//	// inserting new elements to the linkedlist , when the head is given

//	return 0;
//}



//#include <iostream>
//using namespace std;
//class node
//{
//	public:
//		int data;  //Let us assume for now that the data which the linked list is sorted
//		node * next;
//		
//		node(int data_input)
//		{
//			this->data = data_input;
//			this->next = NULL;
//		}
//};
//// Helper function
//void printnode(node * & node)
//{
//	cout << "value " << node->data;
//	cout << "Address "<<node->next;
//}
//void printlinkedlist(node * & head)
//{
//	if(head==NULL)
//	{
//		cout << "The linked list is still empty! " << endl;
//		return;
//	}
//	node *temp;
//	temp = head;
//	
//	// This is called the transversing of a linked list
//	
//	while(temp!=NULL)
//	{
//		cout << temp->data<<" -->";
//		temp = temp->next;
//	}
//	cout << endl;
//}
//	void Insertatstart(node * &head, int data)
//	{
//		node * temp = new node(data); // where temp is the new head and now , e=we nedd to assaign the address of the old head to i
//		temp->next = head;
//		head = temp;
//	}
//void Insertatend(node * &head , int data)
//{
//	node *temp = new node (data);
//	node *end;
//	end = head;
//	
//	while(end->next!=NULL)
//	{
//		end = end->next;
//	}
//	// After this while loop is complete, we have basically reached the end element of the linked list
//	
//	end->next = temp;
//}
//
//int main()
//{
//	// Head is nothing but a fancy term to indicate the top or the first element of the linked list
//	
//	node * head=NULL;	
//	printlinkedlist(head);
//	node * node1 = new node (5);
//	head = node1;
////	printlinkedlist(head);
////    cout << endl;
//	node * node2 = new node (7);
//	node1->next = node2;  // The sorting address of the first node which was initially pointing to NULL willnow point to the address to the next node
////	printlinkedlist(head);
////	cout << endl;
//	node * node3 = new node (8);
//    node2->next = node3;
//    printlinkedlist(head);
//    cout << endl;
//
//	
//
////	printnode(node1);
////	printnode(node1->next);  //node 2 = node 1->next
////	printnode(node1->next->next);  // node 3 = node2->next = node1->next->next
//	
//	// inserting new elements to the linkedlist , when the head is given
//    // Inserting new element at the start of the linked list
//    
//    Insertatstart(head,3);
//    //printlinkedlist(head);
//    Insertatstart(head,2);
//    //printlinkedlist(head);
//    Insertatend(head,9);
//    Insertatend(head,10);
//    
//    printlinkedlist(head);
//    
//	return 0;
//}


#include <iostream>
using namespace std;
class node
{
	public:
		int data;  //Let us assume for now that the data which the linked list is sorted
		node * next;
		
		node(int data_input)
		{
			this->data = data_input;
			this->next = NULL;
		}
};
// Helper function
void printnode(node * & node)
{
	cout << "value " << node->data;
	cout << "Address "<<node->next;
}
void printlinkedlist(node * & head)
{
	if(head==NULL)
	{
		cout << "The linked list is still empty! " << endl;
		return;
	}
	node *temp;
	temp = head;
	
	// This is called the transversing of a linked list
	
	while(temp!=NULL)
	{
		cout << temp->data<<" -->";
		temp = temp->next;
	}
	cout << endl;
}
	void Insertatstart(node * &head, int data)
	{
		node * temp = new node(data); // where temp is the new head and now , e=we nedd to assaign the address of the old head to i
		if(head==NULL)
		{
			head = temp;
			return;
		}
		
		temp->next = head;
		head = temp;
	}
void Insertatend(node * &head , int data)
{
	node *temp = new node (data);
	if(head ==NULL)
	{
		head = temp;
		return;
	}
	node *end;
	end = head;
	
	while(end->next!=NULL)
	{
		end = end->next;
	}
	// After this while loop is complete, we have basically reached the end element of the linked list
	
	end->next = temp;
}

int main()
{
	// Head is nothing but a fancy term to indicate the top or the first element of the linked list
	
	node * head=NULL;	
	
    Insertatend(head,5);	
    Insertatend(head,7);
    Insertatend(head,8);
   
    
    Insertatstart(head,3);
    Insertatstart(head,2);
    Insertatend(head,9);
    Insertatend(head,10);
    
    printlinkedlist(head);
    
	return 0;
}