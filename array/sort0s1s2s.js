var sortColors = function(nums) {
    let l=0;
    let m=0;
    let h= nums.length-1;

    while(m<=h){
        let temp;

        if(nums[m]===0){
            temp=nums[l];
            nums[l]=nums[m];
            nums[m]=temp;

            l++;
            m++;
        }
        else if(nums[m]===1){
            m++;
        }
        else if(nums[m]===2){
            temp=nums[h];
            nums[h]=nums[m];
            nums[m]=temp;

            h--;
        }
    }
};
    
