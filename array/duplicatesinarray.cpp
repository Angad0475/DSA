var removeDuplicates = function(nums) {
    let n=nums.length;
    unique_element=1;
    for(let i=0;i<=n-1;i++){
        if(nums[i]!=nums[unique_element-1]){
            nums[unique_element]=nums[i];
            unique_element++;
        }
    }
     return unique_element;

};
