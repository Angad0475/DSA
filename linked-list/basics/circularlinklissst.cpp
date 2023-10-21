#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head;
Node *second;
Node *third;

insertionatfirst()
{
    Node *ptr;

    ptr= (Node*)malloc(sizeof(struct Node));

    cout << "enter the data"<<endl;
    cin >> ptr->data;

    Node *p= head->next;

    while(p->next != head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
}

void insertionatindex()
{
    Node *ptr= (Node*)malloc(sizeof(struct Node));
    Node *p=head;
    int index;
    int i;

    cout << "enter the index"<<endl;
    cin >> index;

    for(i=0;i<index;i++)
    {
        p=p->next;
    }
    cout << "entert he number "<<endl;
    cin >> ptr->data;

    ptr->next=p->next;

    p->next=ptr;

}    


void traversal()
{
    Node *ptr= head;

    do{
        cout << "elemnt is  "<<ptr->data<<endl;
        ptr=ptr->next; 
    }while(ptr!=head);  
}

int main()
{
    head= (Node*)malloc(sizeof(struct Node));
    second=(Node*)malloc(sizeof(struct Node));
    third=(Node*)malloc(sizeof(struct Node));

    head->next=second;
    second->next= third;
    third->next=head;

    int choice;

    do
    {
        cout <<"enter the choice"<<endl;

        cin >> choice;

        switch(choice)
        {
            case 1:
            insertionatfirst();
            break;

            case 2:
            traversal();
            break;

            case 3:
            insertionatindex();
            break;
        }
    } while(choice!=4); 
    

    

    return 0;
}