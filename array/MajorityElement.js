var majorityElement = function(nums) {
    let candidate;
    let count=0;
    for(let i=0;i<nums.length;i++){
    if(count==0){
        candidate=nums[i]
    }
    if(nums[i]==candidate){
        count++;
    }
    else{
        count--;
    }
    }
    return candidate;

};
