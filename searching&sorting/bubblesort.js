class Solution
{
   //Function to sort the array using bubble sort algorithm.
   bubbleSort(arr,n){
    var i ,j , temp;

    
    for(i=0;i<n-1;i++){
    
        
        for(j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            
            }
        }
    }
    
        return arr;
   }
    
}
