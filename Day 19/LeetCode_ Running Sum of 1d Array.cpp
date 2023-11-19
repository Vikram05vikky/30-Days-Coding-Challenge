Problem : Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums

Input:
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans ; 
    int sum = nums[0];
    ans.push_back(sum);
    for(int i=1 ; i<nums.size() ;i++){
            sum += nums[i];
        ans.push_back(sum);
     }
    return ans ; 
    }
};
