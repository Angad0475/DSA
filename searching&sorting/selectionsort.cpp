#include<iostream>
#define n 5
using namespace std;

int i;
int j;
int a[n];
int temp;
int indexofmin;
indexofmin=a[i];

void printarray()
{
    for(i=0;i<n;i++)
    {
        cout << a[i]<<endl;
    }
}
void selectionsort()
{
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j] < a[i])//a[i] is the index of minimum value 
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
    cout << "enter the elements "<<endl;
    for(i=0;i<=n-1;i++)
    {   
        cin >> a[i];
    }

    cout << "running selection sort "<<endl;

    selectionsort();

    cout << "the sorted elemnts are "<<endl;

    printarray();


    return 0;

}