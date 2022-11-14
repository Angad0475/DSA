#include<stdio.h>

void display( int arr[],int n)
    {
        for( int i=0;i<n; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
        printf("\n");
    }

int indDeletion(int arr[], int size, int index)
{
    for(int i = index;i < size-1;i++)
    {
        arr[i]=arr[i+1];
    }
}

int main()
{
    int arr[100]={7,4,6,1,2};
    int size=5;
    int index=4;
    display(arr,size);
    indDeletion(arr,5,0);
    size-=1;
    display(arr,size);

    return 0;
}