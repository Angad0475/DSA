class Solution
{
  //Function to sort the array using insertion sort algorithm.
  insertionSort(arr,n){
    var i;
    var j;
    var temp;
    
    for(i=1;i<=n-1;i++){
        for(j=i;j<=n-1;j++){
            if(arr[j]<arr[i-1]){
                temp=arr[i-1];
                arr[i-1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr;
    
  }
    
}
