Problem

The most important part of a GSM network is so called Base Transceiver Station (BTS). These transceivers form the areas called cells (this term gave the name to the cellular phone) and every phone connects to the BTS with the strongest signal (in a little simplified view). Of course, BTSes need some attention and technicians need to check their function periodically.
The technicians faced a very interesting problem recently. Given a set of BTSes to visit, they needed to find the shortest path to visit all of the given points and return back to the central company building. Programmers have spent several months studying this problem but with no results. They were unable to find the solution fast enough. After a long time, one of the programmers found this problem in a conference article. Unfortunately, he found that the problem is so called "Traveling Salesman Problem" and it is very hard to solve. If we have 
N BTSes to be visited, we can visit them in any order, giving us N! possibilities to examine. The function expressing that number is called factorial and can be computed as a product:
1.2.3.4....N. The number is very high even for a relatively small N.

Input :

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
