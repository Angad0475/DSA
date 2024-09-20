class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum_Of_divisible=0;
        int sum_of_nondivicible=0;

        for(int i =1;i<=n;i++){
            if(i%m==0){
                sum_Of_divisible += i;
            }
            else{
                sum_of_nondivicible += i;
            }
        }
        int diff= sum_of_nondivicible-sum_Of_divisible;

        return diff;
    }
};
