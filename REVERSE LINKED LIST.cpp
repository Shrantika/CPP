#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
	Node(int val) : data(val),next(NULL){}
	
};

//Function to reverse linked list
Node* ReverseLinkedList(Node* head)
{
	Node* prev = NULL;
	Node* curr = head;
	Node* next = NULL;
	
	while(curr != NULL)
	{
		next = curr->next; //Store the next node
		curr->next = prev;//Reverse the link
		prev = curr;      //Move previous one step forward
		curr = next;      //Move current one step forward
	}
	return prev;
}
void PrintList(Node* head)
{
	while(head != NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<"-1"<<endl;
}
Node* createList()
{
	int val;
	cin>>val;
	if(val == -1)
	return NULL;
	
	Node* head = new Node(val);
	Node* temp = head;
	 while(true)
	{
		cin >> val;
		if (val == -1)
		break;
		temp->next=new Node(val);
		temp = temp->next;
	 	
	}
	return head;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		Node* head = createList();
		Node* reverseHead = ReverseLinkedList(head);
		PrintList(reverseHead);
		
	}
	return 0;
}
