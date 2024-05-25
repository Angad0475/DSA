var majorityElement = function(nums) {
     let elm = nums[0];
        let  ctr = 1;
        let n = nums.length;
        for(let i=1;i<n;i++){
            if(nums[i]==elm){
                ctr++;
            }else{
                ctr--;
                if(ctr==0){
                   ctr=1;
                   elm = nums[i];
                }
            }
        }
        return elm;
    }
