Problem : Frog Jump

Input:

#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    if(n==0)
        return 0;
    
    int n1 = abs(heights[0]-heights[1]);
    int n2=0,cur;
    for(int i=2;i<n;i++)
    {
        cur=min(n1+abs(heights[i]-heights[i-1]),n2+abs(heights[i]-heights[i-2]));
        n2=n1;
        n1=cur;
    }
    return n1;
}
