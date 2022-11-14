#include<stdio.h>
#include<stdlib.h>
#define Size 5
int queue[Size];
int rear = -1;
int front = -1;

void enqueue()
{
    int x;

    if(front==-1 )
    {
        front==0;
        rear=rear+1;
        queue[rear]=x;       
    }
    else if(((rear+1)%Size)==front)
    {
        printf("queue is full");
    }

    else
    {
        rear=(rear+1)%Size;
        queue[rear]=x;
    }
}
void dequeue()
{

    if(front==-1)
    {
        printf("queue is underflow\n");
    }

    else
    {
      printf("the number deleted is %d",queue[Size]);  
      front=(front+1)%Size;
    }

}

void display()
{
    int i;
    if(front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else
    {
        while (i != rear)
            {
                printf("%d",queue[i]);
                i=(i+1)%Size;
            }

    }

}

int main()
{
    int choice;

    while(choice!=0)  
    {
        printf("1 for insert\n2 for deletion\n 3 for display");

        switch(choice)
        {
            case 1: enqueue();
                    break;

            case 2: dequeue();
                    break;

            case 3: display();
                    break;

            case 0: printf("invalid choice\n");
                    break;                
        }
    }

    return 0;
}