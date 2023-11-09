Problem : Sort Array By Parity II

Given an array of integers nums, half of the integers in nums are odd, and the other half are even.
Sort the array so that whenever nums[i] is odd, i is odd, and whenever nums[i] is even, i is even.
Return any answer array that satisfies this condition.

Input:
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        vector<int>v;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        int k=0;
        int l=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0) 
            {
                v.push_back(even[k]);
                k++;
            }
            else
            {
                v.push_back(odd[l]);
                l++;
            }
        }
        return v;
    }
};
