#include<iostream>
#define n 5
using namespace std;
int a[n];

int i;
int j;
int temp;


void bubblesort()
{
    for(i=1;i<n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void display(){
    for(i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }

}

int main()
{
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    cout << "running buuble  sort" << "\n";

    bubblesort();

    display();

    return 0;

}
