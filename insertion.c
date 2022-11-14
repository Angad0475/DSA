#include<stdio.h>
#include<stdlib.h>
#define n 5
int arr[n];
int index;
int element;
int i;

void insertion()
{
    int x;

    printf("enter the elemnt to enter \n");
    scanf("%d",&element);
    printf("enter the index in which you want to insert \n");
    scanf("%d",&index);

    i++;

    for(i=n-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=x;

    printf("the inserted elemnt is %d",arr[index]);

}

void display()
{    
    printf("elemnts in the array :\n");
    for(i=0;i<=n-1;i++)
    {
        printf("%d",arr[i]);
    }

}

int main()
{
    int choice;

    while(choice!=0)
    {
        printf("enter 1 for insertion\nenter 2 for display\n");
        scanf("%d",choice);

        switch(choice)
        {
            case 1: insertion();
            break;

            case 2: display();
        

            default: printf("invalid choice\n");
    
        }
    }

    return 0;
}



