Problem : Missing Number
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Input:

class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        int x=(n*(n+1))/2;
        for(int i=0;i<n;i++)
        {
           x=x-nums[i];
        }
        return x;
    }
};
