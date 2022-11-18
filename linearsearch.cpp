#include<iostream>
#define n 5
using namespace std;

int a[n];
int i;
int key;

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
        if(a[i]==key)
        {
            printf("the %d is at index %d",key ,i);
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
    scanf("%d",&key);

    linearsearch();

}