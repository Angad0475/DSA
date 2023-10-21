#include<stdio.h>
#include<stdlib.h>
#define n 5
int arr[n];
int i;
int index;
int element;

void display()
{
    for(i=0;i<=n-1;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void insertion()
{   
    printf("enter the elemt to insert\n");
    scanf("%d",&element);

    printf("enter the index in which u want to insert\n");
    scanf("%d",&index);


    n++;

    for(i=n-1;i>=index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=element;


}
void deletion()
{
    printf("enter the index u want to delete\n");
    scanf("%d",&index);

    for(i=index;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    
}


int main()
{   
    int choice;

    printf("enter 1 for iserting the elemnt\n");
    printf("enter 2 for deeltion\n");
    printf("enter 3 for display\n");

    do
    {   
        printf("enter the choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            insertion();
            break;

            case 2:
            deletion();
            break;


            case 3:
            display();
            break;

            case 4:
            printf("exit");
            break;
        }

    }while(choice!=4);
    
    
    
 
    return 0;
}