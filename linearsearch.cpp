#include<iostream>
#define n 5
using namespace std;

int a[n];
int i;
int element;

void display()
{
    for(i=0;i<=n-1;i++)
    {
        printf("%d ",a[i]);
    }
}
void linearsearch()
{
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==element)
        {
            printf("the %d is at index %d",element ,i);
        }             
    }
 
}

int main()

{
    printf("enter the elemnts:\n");

    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    display();

    printf("enter the elemnt:\n ");
    scanf("%d",&element);

    linearsearch();

}
