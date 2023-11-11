Problem:
Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
Return the array in the form [x1,y1,x2,y2,...,xn,yn].

Input:
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
         int i=0,j=n;
        vector<int> res;
        while(j<2*n){
            res.push_back(nums[i]);
            res.push_back(nums[j]);
            i++;
            j++;
        }
        return res;
    }
};
