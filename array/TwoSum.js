var twoSum = function(nums, target) {
    var arr=new Map();
    for(let i=0;i<=nums.length-1;i++){
        let targetValue=target-nums[i];

        if(arr.has(targetValue)){
            return([arr.get(targetValue),i]);
        }
        arr.set(nums[i],i);
    }
};
