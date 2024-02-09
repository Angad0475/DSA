class Solution {
    binarysearch(arr, n, k) {
        let start = 0;
        let end = arr.length-1;
        while(start<=end){
            let mid = Math.floor(start+(end-start)/2);
            if (arr[mid]===k){
                return mid
            }
            else if(arr[mid]<k){   // if mid is smaller than key value then we will shift the start towards right. 
                
               start = mid + 1; 
            }else{// if key value is smaller than mid then we will shift the end towards left.
                end = mid - 1;
            }
        }
        return -1;
    }
}
    
