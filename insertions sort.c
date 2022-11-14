#include<stdio.h>
#define n 5
int a[n];
int i; 
int j;
int current;
 
void  insertionsort()
{

    for(i=1;i<n;i++)
    {
        current= a[i];
        j=i-1;
        while(a[j]>current && j>=0)
        {
            a[j+1]=a[j];
            j++;
        }
        a[j+1]=current;    

    }
}

void display()
{
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    for(i=0;i<n;i++)
    { 
        printf("enter the elemnt \n");
        scanf("%d ",a[i]);
    }

    printf("running insertion sort\n");

    insertionsort();

    display();



    return 0;
}
