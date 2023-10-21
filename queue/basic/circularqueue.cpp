#include<iostream>
#define n 5
using namespace std;

int queue[n];
int front =-1;
int rear=-1;
int i;

void enqueue()
{
    cout << "enter the data " << endl;
    cin >> queue[i];
    if(front==-1)
    {
        front=0;
    }
    rear++;
    queue[rear]=queue[i];  

    if((rear+1)%n==front)
    {
        cout << "queue is full"<<endl;
    }
    else{
        rear=(rear+1)%n;
        queue[rear]=queue[i];
    }
}
void dequeue()
{
    if(front==-1)
    {
        cout << "queue is overflow"<<endl;
    }
    else{
        cout << "the deleted elemnt is "<< queue[front]<<endl;
        front=(front+1)%n;        
            }
}
void peek()
{
    cout << "the topmost elemnt is"<< queue[front]<<endl;
}
void display()
{
    if(front==-1)
    {
        cout << "stack is empty"<<endl;
    }
    else
    {
        for( int i=front;i<=rear;i++)
        {
            cout << "the element is "<<queue[i]<<endl;
        }
    }
}
int main()
{
    int choice;
    cout << "(1)inserting the elment in a queue"<<endl;
    cout << "(2)deleting the elemnt from the queue"<<endl;
    cout << "(3)to see the topmost element"<<endl;
    cout << "(4)to display all the elemnts of queue"<<endl;

    do{
        cout << "enter the choice"<<endl;
        cin >> choice;

        switch(choice)
        {
            case 1:
            enqueue();
            break;

            case 2:
            dequeue();
            break;

            case 3:
            peek();
            break;

            case 4:
            display();
            break;

            case 5:
            cout<<"exit"<<endl;
            break;
        }
    }while(choice!=5);

    return 0;
}