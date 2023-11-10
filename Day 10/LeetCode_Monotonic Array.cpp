Problem :
An array is monotonic if it is either monotone increasing or monotone decreasing.
An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].
Given an integer array nums, return true if the given array is monotonic, or false otherwise.

Input:
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool flag=true,flag1=true;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            flag=false; 
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
            flag1=false; 
        }
        if(flag==true)
            return flag;
        else if(flag1==true)
            return flag1;
        else
            return false;
    }
};
