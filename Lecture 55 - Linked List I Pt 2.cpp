//#include <iostream>
//using namespace std;
//class node
//{
//	public:
//		int data;  //Let us assume for now that the data which the linked list is sorted
//		char name;
//		bool temp;
//		node * next;
//		
//		node(int data_input)
//		{
//			this->data = data_input;
//			this->next = NULL;
//		}
//};
//int main()
//{
//	node * node1 = new node (3);
//	cout << node1->data;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//class node
//{
//	public:
//		int data;  //Let us assume for now that the data which the linked list is sorted
//		char name;
//		bool temp;
//		node * next;
//		
//		node(int data_input)
//		{
//			this->data = data_input;
//			this->next = NULL;
//		}
//};
//// Helper function
//void printnode(node * &node)
//{
//	cout << "value " << node->data;
//	cout << "Address "<<node->next;
//}
//int main()
//{
//	node * node1 = new node (5);
//	node * node2 = new node (7);
//	node * node3 = new node (8);
//
//
//	printnode(node1);
//	printnode(node2);
//	printnode(node3);
//	return 0;
//}



//#include <iostream>
//using namespace std;
//class node
//{
//	public:
//		int data;  //Let us assume for now that the data which the linked list is sorted
//		char name;
//		bool temp;
//		node * next;
//		
//		node(int data_input)
//		{
//			this->data = data_input;
//			this->next = NULL;
//		}
//};
//// Helper function
//void printnode(node * &node)
//{
//	cout << "value " << node->data;
//	cout << "Address "<<node->next;
//}
//int main()
//{
//	node * node1 = new node (5);
//	node * node2 = new node (7);
//	node * node3 = new node (8);
//	
//	printnode(node1);
//	printnode(node2);
//	printnode(node3);
//	
//	node1->next = node2;
//    node2->next = node3;
//
//	printnode(node1);
//	printnode(node2);
//	printnode(node3);
//	return 0;
//}


#include <iostream>
using namespace std;
class node
{
	public:
		int data;  //Let us assume for now that the data which the linked list is sorted
		char name;
		bool temp;
		node * next;
		
		node(int data_input)
		{
			this->data = data_input;
			this->next = NULL;
		}
};
// Helper function
void printnode(node * &node)
{
	cout << "value " << node->data;
	cout << "Address "<<node->next;
}
int main()
{
	node * node1 = new node (5);
	node * node2 = new node (7);
	node * node3 = new node (8);
	
	node1->next = node2;  // The sorting address of the first node which was initially pointing to NULL willnow point to the address to the next node
    node2->next = node3;

	printnode(node1);
	cout << endl << node2;
	printnode(node2);
	cout << endl << node2;
	printnode(node3);
	return 0;
}