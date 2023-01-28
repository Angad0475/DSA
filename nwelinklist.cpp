#include<iostream>
using namespace std;

struct node {
    int data;
     node* next; 
};
node *first;
node *head;
node *second;
node *third;


void traverse()  
    {  
        
        struct node *ptr;     
        ptr = head;     
          
          cout<< "printing values"<<endl;
            while (ptr!=NULL)  
            {  
            cout << ptr->data << endl;  
                ptr = ptr -> next;  
            }  
        
    }    

void  insertAtFirst(){
    int data;
    cout << "enter the data to insert at first "<<endl;
    cin >> data;
    node *ptr;
    ptr =  (node*) malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next=head;
    head= ptr;
 
    
}

int main()
{
     head=(node*)malloc(sizeof(struct node));
     second=(node*)malloc(sizeof(struct node));
     third=(node*)malloc(sizeof(struct node));

     head->data=13;
     head->next=second;

     second->data=24;
     second->next=third;

     third->data=35;
     third->next=NULL;


     traverse();
     
    insertAtFirst();

    traverse();


     return 0;

    
}