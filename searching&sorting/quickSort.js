function swap(nums, i, j){
    let temp = nums[i];
    nums[i]=nums[j];
    nums[j]=temp;
}
//Function to sort an array using quick sort algorithm.
function quickSort(arr, start, end)
{
    // code here
    if (start<end){
        let part = partition(arr,start,end);
        quickSort(arr,start,part-1);
        quickSort(arr,part+1,end);
    }
}
    
function partition (arr, start,  end)
{
   // Your code here
   let pivot = arr[end];
   let i = start-1;
   for(let j=start;j<end;j++){
       if(arr[j]<pivot){
           i++;
           swap(arr,i,j);
       }
   }
   swap(arr,i+1,end);
   return i+1;
}
