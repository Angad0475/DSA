var sortArray = function(nums) {
    var n=nums.length;
    var temp;
    for(var i=1;i<n;i++){  // the first loop is for passes and in insertion sort the first pass starts from 1 index as it compares the previous element.
        for(var j=i;j<=n-1;j++){ //the second loop is for using the second pointer for placing the element and swapping with previous element.
            if(nums[j]<nums[i-1]){ 
                temp=nums[i-1];
                nums[i-1]=nums[j];
                nums[j]=temp;
            }
        }
    }
    return nums;
}
