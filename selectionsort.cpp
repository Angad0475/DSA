#include<iostream>
#define n 5
using namespace std;

int a[n];
int i;
int j;
int temp;

void displayy()
{
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void selectionsort()
{
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }


            
        }
    }


}

int main()
{
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }


    displayy();

    printf("running selection sort\n");

    selectionsort();

    displayy();



    return 0;


} 
