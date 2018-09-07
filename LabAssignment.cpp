#include<iostream>
using namespace std;


/* 
CSE1034.1 Lab Report 

Submission To: 
Md. Siyam Sajeeb Khan
Lecturer and Coordinator
Dept of CSE, Southeast University 

Submitted By: 
Name: Anik Kumar Chakrabortty
ID: 2017000000037
*/ 


struct Node
{
    int data;
    struct Node *next;
};

int main ()
{
    struct Node *head, *temp, *x, *y;
    int choice, n, i;
    while(1)
    {
        cout<<"Menu\n"<<endl;
        cout<<"1. Create a list\n2. Insert a node at the end\n3. Insert at the beginning\n";
        cout<<"4. Insert after a specific node\n5. Insert before a specific node\n6. Show the list\n7. Search in the list\n8. Exit\n";

        cout<<"Enter your choice"<<endl;
        cin>>choice;

        if(choice == 1)
        {
            cout<<"Welcome to linked list creation!"<<endl;
            cout<<"Let's create the head first"<<endl;
            head = new Node;
            cout<<"Enter head->data"<<endl;
            cin>>head->data;
            head->next = NULL;
            cout<<"Head is created"<<endl;

            cout<<"How many nodes you want to create?"<<endl; 
            cin>>n;
            x = head;
            for(i=0; i<n; i++)
            {
                temp = new Node;
                cout<<"Enter node data: "<<endl;
                cin>>temp->data;
                temp->next = NULL;

                x->next = temp;
                x = x->next;
            }

            cout<<"Congrats! Your list is created!"<<endl;

        }
        else if(choice == 2)
        {
            cout<<"Insert at the end option"<<endl;
            cout << "Enter data for end node: "; 
            Node *newNode; 
         	newNode = new Node;
         	cin >> newNode->data;
         	newNode->next=NULL;  
            
            y = head;
            // traversing the list to reach last element. 
            while(y->next!=NULL){
            	y=y->next; 
            }

            y->next=newNode; 
            cout << "Successfully added " << newNode->data << " at the end" << endl; 

            ++n; // increasing list size
        }

        // Inserting node in the beginning 
        else if(choice == 3)
        {
            cout<<"Insert at the begining option"<<endl;
         	Node *newNode; 
         	newNode = new Node; 
            cout << "Enter new Node data: ";
            cin >> newNode->data; // storing new data;  
            newNode->next=head; // referencing head to newNode
            head = newNode;  // replacing head to newNode
            cout << "Success! The new head->data is: " << head->data << endl; 

            ++n; // increasing the node count to show the list later
        }


        // Insert after a specific node; 
        else if(choice == 4)
        {
           
           Node *newNode; 
           newNode = new Node; 

           y=head; 
           cout << "Insert after which data: (must be present in list) " << endl; 
           int query; cin >> query; 
           cout << "Enter new data to insert after -" << query << ": ";
           cin >> newNode->data;

           bool success=false;  
           for(i=0; i<n+1; i++)
           {
           		if(success)
           			break; // stopping iteration in case its already done!

                if(y->data==query){
                	 temp=y->next;
                	 newNode->next=temp; 
                	 y->next=newNode;  
                	 success=true; 
                }else{
                y = y->next;
            	}
           }
           if(success){
           	cout << "Insertion successful!" << endl;

           	++n; // adjusting list size! bad practice though :( 
           	} 
           else
           	cout << "Invalid query!" << endl; 
        }



        else if(choice == 5)
        {
          
          // Demo code demonstrates singly LinkedList. 
          // Can't perform this operation 
          // only having just node->next 
          // need node->prev also or a doubly linkedlist.  
          
        }

        // Showing the List Data
        else if(choice == 6)
        {
            cout<<"Now the list will be shown"<<endl;
            y = head;
            for(i=0; i<n+1; i++)
            {
                cout<<y->data<<" ";
                y = y->next;
            }

            cout<<endl;
        }

        // Searching List 
        else if(choice == 7)
        {

        	cout << "Enter Search query: " << endl; 
        	int query; 
        	cin >> query; 

        	y = head;
        	bool found=false; 
            for(i=0; i<n+1; i++)
            {
                if(y->data==query){
                	found=true; 
                }
                y = y->next;
            }

            if(found)
            {
            	cout << "Data is present on LinkedList!" << endl; 
            }else{
            	cout << "Not found!" << endl; 
            }


            cout<<endl;
        }

        // Exiting the program
        else if(choice == 8)
        {
            return 0;
        }

        else
        {
            cout<<"Sorry! Invalid option!"<<endl;
        }
    }
    return 0;
}
