class Solution {
    binarysearch(arr, n, k) {
        let start = 0;
        let end = arr.length-1;
        while(start<=end){
            let mid = Math.floor(start+(end-start)/2);
            if (arr[mid]===k){
                return mid
            }
            else if(arr[mid]<k){   // if mid is small than k find to the left side
               start = mid + 1 
            }else{
                end = mid - 1
            }
        }
        return -1
    }
}
    
