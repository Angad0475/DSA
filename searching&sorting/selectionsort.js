class Solution
{
  //Function to sort the array using selection sort algorithm.
  selectionSort(arr,n){
    var i;
    var j;
    var temp;
    
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    return arr;
  }
    
}
