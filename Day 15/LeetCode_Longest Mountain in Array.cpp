Problem:
You may recall that an array arr is a mountain array if and only if:
  arr.length >= 3
There exists some index i (0-indexed) with 0 < i < arr.length - 1 such that:
  arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
  arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given an integer array arr, return the length of the longest subarray, which is a mountain. Return 0 if there is no mountain subarray.

Input:
class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
         int ans = 0;
    for (int i = 1; i < n - 1;) {
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            int j = i;
            int count = 1;
            while (j >= 1 && arr[j-1] < arr[j]) {
                j--;
                count++;
            }
            while (i <= n - 2 && arr[i+1] < arr[i]) {
                i++;
                count++;
            }
            ans = max(ans, count);
            i++;
        } else {
            i++;
        }
    }
    return ans;
    }
};
