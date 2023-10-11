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
        cout << " " << a[i];
    }
}
void linearsearch()
{
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==key)
        {
            cout << "the " << key << " is at index " << i;
        }             
    }
 
}

int main()

{
    printf("enter the elemnts:\n");

    for(i=0;i<=n-1;i++)
    {
        cin >> a[i];
    }
    display();

    cout << "enter the elemnts: ";
    
    cin >> a[i];

    linearsearch();

}