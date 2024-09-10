class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int sum=0;

        for(int i=0;i<=n-1;i++){
         sum=sum+nums[i];
        }
        int total = (n*(n+1))/2;
        int number= total-sum;

        return number;    
    }
};
