var search = function(nums, target) {
    let low = 0, high = nums.length - 1;
    
    while (low <= high) {
        let mid = low + Math.floor((high - low) / 2);
        
        if (nums[mid] === target) {
            return mid;
        }
        
        if (nums[low] <= nums[mid]) { // if the left side is sorted
            if (nums[low] <= target && target < nums[mid]) { // check if target is in the left side
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else { // if the left side is not sorted, the right side must be sorted
            if (nums[mid] < target && target <= nums[high]) { // check if target is in the right side
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    
    return -1;
};
