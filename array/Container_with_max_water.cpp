class Solution {
public:
    int maxArea(vector<int>& height) { // height is the array of length of sticks use for storing water.
        int left=0;
        int right=height.size()-1;  //we initialize two pointer approach using two variables left and right one at start stick and other at end stick . 

        int maxArea=0;  

        while(left<right){
             int area= min(height[left],height[right])*(right-left); // length will be min of two sticks (logical thing) the water will stay at the least of both .  
                                                                        //width will be difference of two sticks .
             maxArea= max(area,maxArea); // we will keep a record maxArea found till far.

             if(height[left]<height[right]){  // after finding Area we will move forward with other sticks for finding the area . 
                left++; // the saller stick will move forward or backward .
             }
             else{
                right--;
             }
        }
        return maxArea;
    }
};
