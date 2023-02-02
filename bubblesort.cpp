#include<iostream>
using namespace std;
int a[50];

int i;
int j;
int temp;
int n;

void bubblesort()
{
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<n;j++)
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
    cout<<"enter the size"<<endl;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    cout << "running buuble  sort" << "\n";

    bubblesort();

    display();

    return 0;

}
