class Solution {
public:
    void reverse(vector<int>&arr,int start,int end){
        int temp;
        while(start<end){
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;

            start++;
            end--;
        }
    }
     
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        k=k%n;
        reverse(nums,0,n-k-1); //first part of the array 
        reverse(nums,n-k,n-1);//second part of array.
        reverse(nums,0,n-1);//whole array .
    }
};
