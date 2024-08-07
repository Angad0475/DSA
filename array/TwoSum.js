const twosum= function(nums,target){
    let map = new Map();
    for(let i=0;i< nums.length;i++){
        let targetValue=target-nums[i];
        if(map.has(targetValue)){
            return (map.get(targetValue),i);
        }
        map.set(nums[i],i);
        
    }
}
