class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int index = n-1;

        vector<int> Result(n);
        while (left <= right) {
            int leftIndex = nums[left] * nums[left];
            int rightIndex = nums[right] * nums[right];
            if (leftIndex > rightIndex) {
                Result[index] = leftIndex;
                left++;
            } else {
                Result[index] = rightIndex;
                right--;
            }
            index--;
        }

        return Result;
    }
};
