#include<iostream>
#define n 5
using namespace std;

int a[n];
int i; 
int j;
int temp;
 
void  insertionsort()
{

    for(i=1;i<n;i++)
    {
        for(j=i-1;j<=n-1;j++)    
        
        {
            if(a[i]<a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }

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
    printf("enter the elemnt\n");
    for(i=0;i<n;i++)
    { 
        scanf("%d ",&a[i]);
    }

    printf("running insertion sort\n");

    insertionsort();

    display();



    return 0;
}
