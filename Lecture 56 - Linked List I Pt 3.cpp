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
//	
//}
//int main()
//{
//	node * node1 = new node (5);
//	node * node2 = new node (7);
//	node * node3 = new node (8);
//	
//	node1->next = node2;  // The sorting address of the first node which was initially pointing to NULL willnow point to the address to the next node
//    node2->next = node3;
//
//	printnode(node1);
//	printnode(node1->next);  //node 2 = node 1->next
//	printnode(node1->next->next);  // node 3 = node2->next = node1->next->next
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
//	while(temp!=NULL)
//	{
//		cout << temp->data<<" -->";
//		temp = temp->next;
//	}
//}
//int main()
//{
//	// Head is nothing but a fancy term to indicate the top or the first element of the linked list
//	node * head;
//	printlinkedlist(head);
//	node * node1 = new node (5);
//	head = node1;
//	printlinkedlist(head);
//	node * node2 = new node (7);
//	node1->next = node2;  // The sorting address of the first node which was initially pointing to NULL willnow point to the address to the next node
//	printlinkedlist(head);
//	node * node3 = new node (8);
//    node2->next = node3;
//    printlinkedlist(head);
//
//	
//
//	printnode(node1);
//	printnode(node1->next);  //node 2 = node 1->next
//	printnode(node1->next->next);  // node 3 = node2->next = node1->next->next
//	
//	
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
//	while(temp!=NULL)
//	{
//		cout << temp->data<<" -->";
//		temp = temp->next;
//	}
//}
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
//	printnode(node1);
//	printnode(node1->next);  //node 2 = node 1->next
//	printnode(node1->next->next);  // node 3 = node2->next = node1->next->next
//	
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
}
int main()
{
	// Head is nothing but a fancy term to indicate the top or the first element of the linked list
	
	node * head=NULL;	
	printlinkedlist(head);
	node * node1 = new node (5);
	head = node1;
	printlinkedlist(head);
	cout << endl;
	node * node2 = new node (7);
	node1->next = node2;  // The sorting address of the first node which was initially pointing to NULL willnow point to the address to the next node
	printlinkedlist(head);
	cout << endl;
	node * node3 = new node (8);
    node2->next = node3;
    printlinkedlist(head);
    cout << endl;

	

	printnode(node1);
	printnode(node1->next);  //node 2 = node 1->next
	printnode(node1->next->next);  // node 3 = node2->next = node1->next->next
	
	
	return 0;
}