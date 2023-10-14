class Solution
{
    public:
    
 
    void selectionSort(int arr[], int n)
    {
       int i;
       int j;
       int temp;
       
       for(i=0;i<n-1;i++){
           for(j=i+1;j<n;j++){
               if(arr[j]<arr[i]){
                   temp=arr[j];
                   arr[i]=arr[j];
                   arr[i]=temp;
               }
           }
       }
    }
};
