#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};
node* head;
node* second;
node* third;

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
    node* ptr;
    ptr=(node*)malloc(sizeof(struct node));

    cout << "enter the elemnt"<<endl;
    cin >> ptr->data;

    ptr->next=head;

    head=ptr;

}
void insertinbetween()
{
    int i;
    int index;

    node* ptr;
    ptr=(node*)malloc(sizeof(struct node));

    node* p=head;


    cout<<"enter the index at which u want to insert"<<endl;
    cin >> index;
    
    for(i=0;i<=index-1;i++)
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

    node* ptr;
    ptr=(node*)malloc(sizeof(struct node));

    cout << "enter the elemnt "<<endl;
    cin >> ptr->data;

    while(m!=NULL)
    {
        m=m->next;
    }
    m->next=ptr;
    ptr->next=NULL;

}
int main()
{
    head=(node*)malloc(sizeof(struct node));
    second=(node*)malloc(sizeof(struct node));
    third=(node*)malloc(sizeof(struct node));


    head->next=second;

    second->next=third;

    third->next=NULL;

    int choice;

    cout<<"1 for insert at first"<<endl;
    cout<<"2 for insert at middle"<<endl;
    cout<<"3 for insert at end"<<endl;
    cout<<"4 for traversal"<<endl;

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
            cout <<"invalid"<<endl;
            break;

        }
    }while(choice!=5);

    return 0;
}
