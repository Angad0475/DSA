#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};
    node* head;

void traversal(){
    node* p = head;

    while(p!=NULL)
    {
        cout<< "element is  "<<p->data<<endl;
        p=p->next;
    }
}
void insertatbeginning()
{
    node* ptr;        //a new operator is used to allocate memory to the pointer.5
    ptr=new node;
    if(head==NULL){
                
    cout << "enter the elemnt"<<endl;
    cin >> ptr->data;

    ptr->next=NULL;

    head=ptr;
}
else{
    cout<<"enter the elemnt" <<endl;
    cin >> ptr->data;

    ptr->next=head;

    head=ptr;
}
}
void insertinbetween()
{ 
    int i;
    int index;

    node* ptr;
    ptr=new node;

    node* p=head;


    cout<<"enter the index at which u want to insert"<<endl;
    cin >> index;
    
    for(i=0;i<index-1;i++)
    {
        p=p->next;
    }
    cout << "enter the elemnt "<<endl;
    cin >> ptr->data;

    ptr->next=p->next;
    p->next=ptr;
}

void insertatend()
{  
    node* m;
    m=head;

    node* p;
    p=new node;

    cout << "enter the elemnt "<<endl;
    cin >> p->data;

    while(m->next!=NULL)
    {
        m=m->next;
    }
    m->next=p;
    p->next=NULL;

}

void deleteatfirst()
{
    node* ptr;
    ptr=head;
    head=head->next;

    cout<< "deleted elemnt is  "<<ptr->data<<endl;
    free(ptr);
}

void deleteatindex()
{
    int index;
    int i;

    node* p=head;
    node* q=head->next;

    cout << "enter the index at which u want to delete";

    cin >> index;
    for(i=0;i<=index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    cout<<"deleted elemnt is  "<<q->data<<endl;
    free(q);


}

void deleteatend()
{
    node* p= head;
    node* q=head->next;

    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    } 
    p->next=NULL;
    cout<<"the deleted elemnt is  "<<q->data<<endl;
    free(q);

}
reverse()
{
    node *curr=head;
    node *prev=NULL;
    node *nxt=NULL;

    while(curr!=NULL)
    {
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    head=prev;
}
int main()
{
    
    int choice;

    cout<<"1 for insert at first"<<endl;
    cout<<"2 for insert at middle"<<endl;
    cout<<"3 for insert at end"<<endl;
    cout<<"4 for traversal"<<endl;
    cout <<"5 for delete at first"<<endl;
    cout <<"6 for delete at index"<<endl;
    cout<< "7 for delete at end "<<endl;
    cout << "8 for reverse the linklist"<<endl;

    do{ 
        cout<<"enter the choice"<<endl;
        cin >> choice;

        switch(choice)
        {
            case 1:
            insertatbeginning();
            break;

            case 2:
            insertinbetween();
            break;

            case 3:
            insertatend();
            break;

            case 4:
            traversal();
            break;

            case 5:
            deleteatfirst();
            break;

            case 6:
            deleteatindex();
            break;

            case 7:
            deleteatend();
            break;

            case 8:
            reverse();
            break;

            case 9:
            cout << "invalid choice"<<endl;
            break;

        }
    }while(choice!=10);

   
    return 0;
}
