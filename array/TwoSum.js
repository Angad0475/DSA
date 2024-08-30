var twoSum = function(nums, target) {
    let arr =new Map();
    arr.set(nums[0],0);

    for(let i=1;i<=nums.length;i++){
        let targetValue= target-nums[i];
        if(arr.has(targetValue)){
            return [arr.get(targetValue),i];
        }
        arr.set(nums[i],i);
    }
};
