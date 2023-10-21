#include <iostream>  
using namespace std; 
#define n 5 

int arr[n];
int i;
int j=n-1;   
int temp;
  
int main ()  
{  
      
    for (i=0; i <= n-1; i++)  
    {  
        cin >> arr[i];  
    }  
      
    for ( i = 0,j=n-1;i<=n/2;i++,j--)  
    {     
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
    }  
    cout << "\n Reverse all elements of the array: " << endl;  
    for ( i = 0; i <= n-1; i++)  
    {  
        cout << arr[i] << " ";  
    }  
    return 0;  
}  