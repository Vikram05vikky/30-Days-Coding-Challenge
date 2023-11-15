Problem : Excel sheet Part - 2

Input:
#include <bits/stdc++.h> 
long long titleToNumber(string str) {
    // Write your code here
    long ans=0;
    int n=str.size();
    for(int i=0;i<n;i++)
    {
        int a=str[i]-'A';
        ans=ans*26 + a+1;
    }
    return ans;
}
