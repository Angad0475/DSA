const twosum= function(nums,target){
    let map = new Map();
    for(let i=0;i< nums.length;i++){
        let targetValue=target-nums[i];
        if(map.has(targetValue)){ //has check whether the key is present in the map .
            return (map.get(targetValue),i); //gets the key and return the valueof that key .
        }
        map.set(nums[i],i);
        
    }
}
