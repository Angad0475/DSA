class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int firstPosition;
    int lastPosition;

    firstPosition=findFirstPosition(nums,target);
    lastPosition=findLastPosition(nums,target);

    return {firstPosition,lastPosition};    
    }
    int findFirstPosition(vector<int>&nums,int target){
        int index =-1;

        int start=0;
        int end =nums.size()-1;

        while(start<=end){
            int mid=start+ (end-start)/2;

            if(nums[mid]==target){
                index=mid;
                end=mid-1;
            }
            else if(nums[mid]>target){
                   end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return index;
    }

    int findLastPosition(vector<int>&nums,int target){
        int index =-1;

        int start=0;
        int end =nums.size()-1;

        while(start<=end){
            int mid=start+ (end-start)/2;

            if(nums[mid]==target){
                index=mid;
                start=mid+1;
            }
            else if(nums[mid]>target){
                   end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return index;
    }
    
};
