var search = function(nums, target) {
    let low=0, high=nums.length-1;
    while(low<=high){
        let mid= low+ Math.floor((high-low)/2);

        if(nums[mid]===target){
            return mid;
        }

        if(nums[low]<=nums[mid]){ // if left side sorted 
            if(nums[low]<=target && target < nums[mid]){ //check is target is located in left side.
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{ // if left side is not srted then right side is sorted then we will directly check wether element is present or not in the righgt side.
            if(nums[mid]<taget && target <=nums[high]){
                low=mid+1;
            }
            else{
                high= mid-1;
            }

        }
    }
    return -1;

};




