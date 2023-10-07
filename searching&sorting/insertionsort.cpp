#include<iostream>
using namespace std;
#define n 5
int arr[n];

void insertionSort()
{
    int i;
    int j;
    int temp;
    for(i=0;i<=n-1;i++)
    {
        for(j=1;j<=n-1;j++)
        {
            if(arr[j]<arr[j-1])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
}

void display()
{
    int i;
    for(i=0;i<=n-1;i++)
    {
        cout<<"the elments are  "<<arr[i]<<endl;
    }
}

int main()

{
    cout <<"enter the elemnts"<<endl;

    for(int i=0;i<=n-1;i++)
    {
        cin >> arr[i];
    }
 
    cout <<"running selection sort"<<endl;
    insertionSort();

    display();

    return 0;
}