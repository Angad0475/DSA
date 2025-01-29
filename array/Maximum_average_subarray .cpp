class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum =0;
        for (int i=0;i<k;i++){
            sum += nums[i];
        }
        double maxSum=sum;

        for(int i=k;i<=nums.size()-1;i++){
            sum += nums[i]-nums[i-k];
            maxSum=max(maxSum,sum);
        }
        double average= maxSum/k;

        return average;
    }
};
