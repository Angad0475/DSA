#include<stdio.h>

void display()
{
    int i;
    int N=5;
    int arr[N];

    printf("the elemnts int he array-:\n ");
    for(i=0;i<=N-1;i++)
    {
        printf("%d",arr[i]);
    }
}


 void insertion()
{
    int x;
    int index;
    int N=5;
    int i;
    int arr[N];
    

    printf("enter the Element to insert \n");
    scanf("%d",&x);
    printf("at what index number you want to index\n");
    scanf("%d",&index);

    N++;

    for(i=N-1;i>index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=x;

    display();
}

void deletion()
{
    int y;
    int index1;
    int i;
    int N=5;
    int arr[N];
    printf("enter the elemnt to be deleted\n ");
    scanf("%d\n",&y);
    printf("enter the index number \n");
    scanf("%d\n",&index1);

    for(i=index1;i<N-1;i++)
    {
        arr[i]=arr[i-1];
    }

    N--;

    display();
}



int main()
{
    int choice;

    while(choice!=0)
    {
        printf("enter rhe choice\n-:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: insertion(); 
                     break;

            case 2: deletion();
                    break;

            case 3: display();
                    break;

            default: 

            printf("invalid choice");
            break;        
          }
}
return 0;

}