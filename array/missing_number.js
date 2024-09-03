 @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    
    var n = nums.length;
    var sum = 0;

    // Calculate the total sum of first n natural numbers
    var total = (n * (n + 1)) / 2;

    // Sum all elements in the array
    for (let i = 0; i < n; i++) {
        sum += nums[i];
    }

    // The missing number is the difference between the expected sum and the actual sum
    return total - sum;
};
