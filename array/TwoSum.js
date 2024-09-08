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


/*cpp code */

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>arr;

        arr[nums[0]]=0;

        for(int i=1;i<nums.size();i++){
            int targetValue= target-nums[i];

            if(arr.find(targetValue)!=arr.end()){
                return {arr[targetValue],i};
            }
            arr[nums[i]]=i;
        }
        return {};
    }
};
