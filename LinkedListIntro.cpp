#include <bits/stdc++.h>
using namespace std;


struct Node
{
	int data;
	struct Node *next; 
};

int main()
{

	Node *head, *temp, *x, *y; 

	// init Head. 
	head=new Node; 

	// taking the head input [data][next]; 
	cin >> head->data; 
	
	head->next = NULL; // [data-cin][null] 
	x=head; // x= [data-cin][null]


	// input data in temp Node then store it in x. 
	for(int i=0; i<4; i++){
		temp = new Node; 
		cin >> temp->data;
		temp->next = NULL;  
		x->next = temp;
		x=x->next; 
	} 

	y=head; // storing head to y for iterating 
	
	for(int i=0; i<5; i++){
		cout << y->data << " ";
		y=y->next; 
	}

}