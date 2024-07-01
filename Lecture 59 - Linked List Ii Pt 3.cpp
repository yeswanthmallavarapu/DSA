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
//		if(head==NULL)
//		{
//			head = temp;
//			return;
//		}
//		
//		temp->next = head;
//		head = temp;
//	}
//void Insertatend(node * &head , int data)
//{
//	node *temp = new node (data);
//	if(head ==NULL)
//	{
//		head = temp;
//		return;
//	}
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
//void Insertatmiddleafterwhichelement(node *& head, int location, int data)
//{
//	
//	node *temp = new node(data);
//	
//	node *var = head;
//	// Loop to check wheather location exists or not
//	while(var->data!=location)
//	{
//		var = var->next;
//		if(var==NULL)
//		{
//			cout << "The location doesnt exist, check the location again "<<endl;
//			return;
//		}
//	}
//	// Now var will have the node address of the element at which the new data is going to be inserted
//	temp->next = var->next;
//	var->next = temp;
//}
//
//void deletenodeoflinkedlist(node *&head, int data)
//{
//	if(head->data == data)
//	{
//		cout << "The head of the linked list is going to be deleted !! " << endl;
//		head = head->next;
//		return;
//	}
//	node *temp;
//	node *prev;
//	temp = head;
//	
//	while(temp->data!=data)
//	{
//		prev = temp;
//		temp = temp->next;
//	}
//	if(temp->next == NULL)
//	{
//		prev->next = NULL;
//		return;
//	}
//	
//	temp->next = temp->next->next;
//}
//
//
//int main()
//{
//	// Head is nothing but a fancy term to indicate the top or the first element of the linked list
//	
//	node * head=NULL;	
//	
//    Insertatend(head,5);	
//    Insertatend(head,7);
//    Insertatend(head,8);
//   
//    
//    Insertatstart(head,3);
//    Insertatstart(head,2);
//    Insertatend(head,9);
//    Insertatend(head,10);
//    
//    printlinkedlist(head);
//    
//    Insertatmiddleafterwhichelement(head,3,4);
//    Insertatmiddleafterwhichelement(head,5,6);
//    //Insertatmiddleafterwhichelement(head,100,101);
//
//    printlinkedlist(head);
//    
//    // Now i want to delete the elements 2,10,6
//    
//    
//    deletenodeoflinkedlist(head,2);
//    deletenodeoflinkedlist(head,10);
//    deletenodeoflinkedlist(head,6);
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
void Insertatmiddleafterwhichelement(node *& head, int location, int data)
{
	
	node *temp = new node(data);
	
	node *var = head;
	// Loop to check wheather location exists or not
	while(var->data!=location)
	{
		var = var->next;
		if(var==NULL)
		{
			cout << "The location doesnt exist, check the location again "<<endl;
			return;
		}
	}
	// Now var will have the node address of the element at which the new data is going to be inserted
	temp->next = var->next;
	var->next = temp;
}

void deletenodeoflinkedlist(node *&head, int data)
{
	if(head->data == data)
	{
		cout << "The head of the linked list is going to be deleted !! " << endl;
		head = head->next;
		return;
	}
	node *temp;
	node *prev;
	temp = head;
	
	while(temp->data!=data)
	{
		if(temp->next=NULL)
		{
			cout << "The element to be deleted dosent exist !! "<<endl;
			return;
		}
		prev = temp;
		temp = temp->next;
	}
	if(temp->next == NULL)
	{
		prev->next = NULL;
		return;
	}
	
	prev->next = prev->next->next;
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
    
    Insertatmiddleafterwhichelement(head,3,4);
    Insertatmiddleafterwhichelement(head,5,6);
    //Insertatmiddleafterwhichelement(head,100,101);

    printlinkedlist(head);
    
    // Now i want to delete the elements 2,10,6
    
    
    deletenodeoflinkedlist(head,2);
    deletenodeoflinkedlist(head,10);
    deletenodeoflinkedlist(head,6);
    deletenodeoflinkedlist(head,100);
    printlinkedlist(head);
    
	return 0;
}