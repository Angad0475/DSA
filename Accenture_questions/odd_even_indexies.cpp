class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n= nums.size();
        if(n==0 || n<=3){
            return 0;
        }
        vector<int>even_Indecies, odd_Indecies;

        for(int i=0;i<=n;i++){
            if(i%2==0){
                even_Indecies.push_back(nums[i]);
            }
            else{
                odd_Indecies.push_back(nums[i]);
            }
        }
        if(odd_Indecies.size() < 2 || even_Indecies.size() < 2){
            return 0;
        }

        sort(odd_Indecies.begin(),odd_Indecies.end());
        sort(even_Indecies.begin(),even_Indecies.end());

        int second_largest= evenIndecies[even_Indecies.size()-2];

        int second_minimum= odd_Indecies[1];

        int sum = second_largest+ second_minimum;

        return sum;
    }
};
