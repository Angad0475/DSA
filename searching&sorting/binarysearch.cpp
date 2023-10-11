#include<iostream>
#define n 5
using namespace std;
int a[n];
int s;
int e;
int element;
int i;

void printarray()
{
    for(i=0;i<n;i++)
    {
        cout << a[i]<<endl;
    }
}

void binarysearch()
{
    s=0;//s=start
    e=n; //e=end

    

    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid] == element)
        {
            cout << "the element is at indxe  "<<mid<<endl;
            break;
            
        }
        else if(element > a[mid])  
        {
            s = mid + 1;
        }
        else if(element < a[mid])
        {
            e = mid - 1;
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

    cout << "enter the element to find "<<endl;

    cin >> element;

    cout << "running binary search"<<endl;

    binarysearch();


    return 0;
}
            
    
        